//快排
#include<stdio.h>
#include<string.h>

void quick_sort(int arry[],int,int);
void quick_sort(int arry[],int left,int right)
{
    int i = left, j = right;
    int  temp;
    int  pivot;//基准点
    pivot = arry[(left + right) / 2];
    while ( i <= j)
    {
        //从左到右找到大于等于基准点的元素
        while (arry[i] < pivot)
        {
            i++;
        }
        //从右到左找到小于等于基准点的元素
        while (arry [j] > pivot)
        {
            j--;
        }
        //如果i <= j,则互换元素
        if(i <= j)
        {
            temp = arry[i];
            arry[i] = arry[j];
            arry[i] = temp;
            i++;
            j--;
        }
        
    }
    if(left < j)
    {
        quick_sort(arry, left, j);
    }
    else if(i < right)
    {
        quick_sort(arry, i, right);
    }
    
}

int main()
{
    int arry[] = {1, 4, 5, 6, 7, 8, 9, 11, 43, 41, 123, 444, 542, 654};
    int length,i;
    length = sizeof(arry)/sizeof(arry[0]);
    quick_sort(arry, 0, length-1);

    printf("排序后的结果为:\n");
    for(i = 0;i < length;i++)
    {
        printf("%d ",arry[i]);
    }
    return 0;
}