//KMP
#include<stdio.h>

void get_next(char *, int *);
int Index_KMP( char *, char *, int);

void get_next(char *T, int *next)
{
    int j = 0;
    int i = 1;
    next[1] = 0;

    while( i < T[0] )
    {
        if( 0 == j || T[i] == T[j])
        {
            i++;
            j++;
            if(T[i] != T[j])
            {
                next[i] = j;
            }
            else
            {
                next[i] = next[j];
            }
        }
        else
        {
            j = next[j];
        }
    }

}

int Index_KMP( char *S, char *T, int pos)
{
    int i = pos;
    int j = 1;
    int next[255];

    get_next(T, next);
    while(i <= S[0] && j <= T[0])
    {
        if(0 == j || S[i] == T[i])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }
    if(j > T[0])
    {
        return i - T[0];
    }
    else
    {
        return 0;
    }
}
int main()
{
    
    return 0;
}