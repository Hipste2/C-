//凯撒密码---对应BUUCTF变异凯撒
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Int_str(char *);

void Int_str(char *ptr)
{
    int i = 0;
    int j = 5;
    int k = 0;
    for(i; i < strlen(ptr); i++)
    {
        k = ptr[i] + j;
        printf("%c", k);
        j += 1;
    }
}

int main()
{
    char *ptr;
    ptr = (char *)malloc(sizeof(char));
    printf("请输入字符串:\n");
    scanf("%s", ptr);
    Int_str(ptr);
    return 0;
}