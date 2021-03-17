#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline); 
void reverse(char to[], char from[], int limit);

/* print the longest input line */ 
int main()
{
    int len;     /* current line length */
    int max;     /* maximum length seen so far */
    char original[MAXLINE];   /* current input line */
    char reversed[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = getLine(original, MAXLINE)) > 0){
        reverse(original, reversed, len-1); 
    }
    return 0; 
}


/* getline: read a line into s, return length */ 
int getLine(char s[], int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c == '\n') { 
        s[i] = c;
        ++i; 
    }
    s[i] = '\0';
    return i; 
}


/* copy: copy 'from' into 'to'; assume to is big enough */ 
void reverse(char from[], char to[], int limit)
{
    int i;
    i = 0;
    while ((to[limit] = from[i]) != '\0'){
        printf("%c", from[i]);
        --limit;
        ++i; 
    }
    printf("%s\n", to);
}