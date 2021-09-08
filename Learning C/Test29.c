//如何实现自动管理大小--2
#include<stdio.h>
#include<stdlib.h>
//使用realloc一次性解决申请内存不够用，需要手动拷贝的问题

int main()
{
    int *ptr = NULL;
    int num;
    int count = 0;
    do{
        printf("请输入要存入的整数（停止存入,请输入-1）:\n");
        scanf("%d",&num);
        count++;

        ptr = (int *)realloc(ptr, count * sizeof(int));
        if(ptr == NULL)
        {
            exit(1);
        }
        ptr[count - 1] = num;
    }while(num != -1);
  
    printf("您输入的数据是:");
    if(ptr[0] != -1)
    {
    for(int i = 0;i < count-1;i++)
        {
            printf("%d ",ptr[i]);
        }
    }
    else
    {
        printf("无数据！\n");
    }
    putchar('\n');
    free(ptr);
    return 0;
}