/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
#include <stdio.h>
#include <time.h>

#define MAXLEN 1000
#define ITERATIONS 10000

void test_binsearch(int binsearch(int x, int v[], int n), int x, int v[], int n)
{
  static int test_nr = 0;
  long clocks = clock();

  int i;
  for (i = 0; i < ITERATIONS; ++i)
  {
    binsearch(x, v, n);
  }

  clocks = clock() - clocks;

  printf("test_%d: %lu clocks (%.4f seconds)\n", test_nr, clocks, (double)clocks / CLOCKS_PER_SEC);

  ++test_nr;
}


int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (high+low)/2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid]) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int binsearch_upd(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid - 1;
        else 
            low = mid + 1;
    }
    if (v[low -1] == x)
        return low - 1;
    return -1;
}


int main(){
    int v[MAXLEN];
    for(int i = 0; i < MAXLEN; i++){
        v[i] = i*5;
    }

    test_binsearch(binsearch, 20, v, MAXLEN);

    int v1[MAXLEN];
    for(int i = 0; i < MAXLEN; i++){
        v1[i] = i*5;
    }

    test_binsearch(binsearch_upd, 20, v1, MAXLEN);

    // printf("%d \n", binsearch(20, v, 100));
}



// NOTE: By using a simple test in the for loop there is a chance to increase the
// binsearch() execution speed. Just modifying an if-else statement from 3 branches
// with two condition testing to 2 branches with 1 condition testing will not
// increase drasticaly the program performance on modern machines, but is a better
// aproach.