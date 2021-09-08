#include<stdio.h>
#include<string.h>

void quick_sort(int [], int , int );

void quick_sort(int array[], int left, int right)
{
    int i, j, povit;
    int temp;
    i = left;
    j = right;
    povit = array[(i + j)/2];
    while (i <= j)
    {
        while (array[i] < povit)
        {
            i++;
        }
        while (array[j] > povit)
        {
            j--;
        }
        if(i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            j--;
            i++;
        }
    }
    if(left < j)
    {
        quick_sort(array, left, j);
    }
    else if (i < right)
    {
        quick_sort(array, i, right);
    }
}

int main()
{
    int length, i;
    int array[] = {123,32,43,543,546,657,876,897,756,354,132,433};
    length = sizeof(array)/sizeof(array[0]);
    quick_sort(array, 0, length-1);

    printf("排列的顺序为：\n");
    for(i = 0;i < length;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}