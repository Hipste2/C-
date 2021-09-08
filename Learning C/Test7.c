/*指针练习*/
#include<stdio.h>
#include<string.h>
int main()
{
    // int a = 10;
    // int *ptr = &a;
    // printf("整形指针的大小:%d",*ptr);
    // return 0;
    //指针和数组
    // char str[128];
    // char *ptr = str;
        // printf("请输入域名:\n")
    // scanf("%s",ptr);
    // printf("域名为:%c\n",*ptr);
    // return 0;
    int p = 0;
    char *str = "I love study!";
    printf("该字符串的长度为:%d\n",strlen(str));
    printf("该字符串的尺寸为:%d\n",sizeof(str));
    for(int i = 0;i < 14;i++)
    {
        if(*(str++)!='\0')
        {

            p++;
        }
        else
        {
            break;
        }
    }
    printf("该字符串的长度为：%d",p);
    return 0;

}