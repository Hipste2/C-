#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr =NULL;
    int num, i;
    printf("请输入待录入整数的个数:\n");
    scanf("%d",&num);
    ptr = (int *)malloc(num * sizeof(int));
    for(i = 0;i < num;i++)
    {
        printf("请录入第%d个整数\n",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("你录入的整数是:");
    for(int k = 0;k < num;k++)
    {
        printf("%d ",ptr[k]);
    }
    putchar('\n');
    free(ptr);
    return 0;
}