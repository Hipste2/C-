#include<stdio.h>
#include<string.h>
int main()
{
    /*
    字符串处理函数
    */
    //strlen  strcpy
    // char str[] = "I love eat!";
    // printf("字符串的siezeof为：%d\n",sizeof(str));
    // printf("字符串的strlen为：%u\n",strlen(str));
    // char str1[] = "New Test1";
    // char str2[] = "New StringTest";
    // strcpy(str1,str2);
    // printf("拷贝过后的str1为：%s",str1);
    // printf("拷贝过后的str2为：%s",str2);

    //strncpy(与指定的n个字符进行复制)
    // char str1[] = "New TestOne!";
    // char str2[40];
    // strncpy(str2,str1,5);
    // str2[5] = '\0';需要自己来加入\0来表示结束

    // printf("str2的结果为：%s",str2);

    //链接字符串函数 strcat(两者相互连接) strncat(与指定的str2中的n个字符串进行连接)
    // char str1[] = "I love";
    // char str2[] = "eat";
    // strcat(str1," ");
    // // strcat(str1,str2);
    // strncat(str1,str2,1);
    // printf("新的str1为：%s\n新的str2为：%s",str1,str2);
    // return 0;

    //比较字符串strcmp(全部比较) strncmp(对比前面的n个字符)
    char str1[] = "I love!";
    char str2[] = "I love!";

    if(!strncmp(str1,str2,2))
    {
        printf("相等！\n");
    }
    else
    {
        printf("不相等！\n");
    }
    return 0;
}