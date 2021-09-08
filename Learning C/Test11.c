#include<stdio.h>
int main()
{
    int arry[][3] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,1,3,5}
    };
    int (*p)[3] = arry;
    int i,j;

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 4;j++)
        {
            printf("%2d",*(*(p+i)+j));
        }
        printf("\n");
    }
    return 0;
}