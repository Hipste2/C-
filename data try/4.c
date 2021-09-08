#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int BF(char *, char *);
void again(char *s, char *p);

int BF(char *s, char *p)
{
    int i = 0, j = 0;
    while(i < strlen(s) && j < strlen(p))
    {
        if(s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }

    if ( j==strlen(p) ) 
    {
        return i-strlen(p)+1;
    }
    else
    {
        return 0;
    }
}

void again(char *str, char *ptr)
{
    int asw;
    asw = BF(str, ptr);
    if(asw != 0)
    {
        printf("匹配成功!!\n");
        printf("匹配位置为:%d\n", asw);
    }
    else
    {
        printf("匹配失败!!\n");
    }
}

int main()
{
    char *str, *ptr;
    //void (*OK)(char *, char *);
    ptr = (char *)malloc(sizeof(char));
    str = (char *)malloc(sizeof(char));
    printf("请输入模式串:");
    scanf("%s", str);
    printf("请输入子串:");
    scanf("%s", ptr);
    again(str, ptr);
    return 0;
}