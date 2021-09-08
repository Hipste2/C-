//指针函数和函数指针
#include<stdio.h>

char *getword(char c);
//指针函数
char *getword(char c)
{
    switch (c)
    {
        case 'A':return "Apple";break;
        case 'B':return "Banana";break;
        case 'C':return "Cat";break;
        case 'D':return "Dog";break;
        default:return "Error";break;
    }
}


int main()
{
    char input;

    printf("请输入一个带字母的字符:\n");
    scanf("%c",&input);

    printf("结果为:%s",getword(input));
    return 0;
}


