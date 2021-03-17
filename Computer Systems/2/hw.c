#include <stdio.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_double(double x){
    show_bytes((byte_pointer) &x, sizeof(double));
}

void show_short(short x){
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x){
    show_bytes((byte_pointer) &x, sizeof(long));
}


int is_little_endian(){
    int val = 1;
    return ((byte_pointer) &val) == "01";
}

int main(){
    int ival = 10;
    float fval = (float) ival;
    short sval = (short) ival;
    long lval = (long) ival;
    double dval = (double) ival;
    int *pval = &ival;

    // show_int(ival);
    // show_short(sval);
    // show_long(lval);
    // show_float(fval);
    // show_double(dval);
    // show_pointer(pval);
    printf("%d", is_little_endian());
}