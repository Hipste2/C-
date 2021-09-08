//栈
#include<stdio.h>
#include<stdlib.h>

#define ElemType char
#define ini_stack_size 100
#define OK 0

typedef struct stack
{
    ElemType *base;
    ElemType *top;
    int stackSize;
}sqStack;

void initial_stack(sqStack *);
// void menu();
// void again_menu(sqStack *);
void Push(sqStack *, ElemType);
ElemType GetPop(sqStack *);
void Pop(sqStack *);
int Stacklen(sqStack );


void initial_stack(sqStack *s)
{
    s->base = (ElemType *)malloc(ini_stack_size * sizeof(ElemType));
    if( !s->base )
    {
        printf("Error!\n");
        exit(0);
    }
    else
    {
        s->top = s->base;
        s->stackSize = ini_stack_size;
    }
}

void Push(sqStack *s, ElemType e)
{
    if(s->top - s->base == s->stackSize)
    {
        s->base = (ElemType *)realloc(s->base, (s->stackSize + ini_stack_size) * sizeof(ElemType));
        if( !s->base )
        {
            exit(0);
        }
    }
    else
    {
        *(s->top) = e;
        s->top++;
    }
    return OK;
}

ElemType GetPop(sqStack *s)
{
    ElemType a;
    if(s->base == s->top)
    {
        printf("Error!\n");
        exit(0);
    }
    else
    {
        a = s->top;
        s->top--;
    }
    return a;
}

void Pop(sqStack *s)//传入的为指针所以用箭头
{
    if(s->base == s->top)
    {
        printf("There is no data!\n");
        exit(0);
    }
    else
    {
        while (s->top != s->base)
        {
            printf(" %c ", s->top);
            s->top--;
        }     
    }
}

int Stacklen(sqStack s)//传入地址,所以用小数点
{
    return (s.top - s.base);
}

// void menu()
// {
//     printf("------------\n");
//     printf("1.初始化栈\n");
//     printf("2.输入整型元素\n");
//     printf("请输入你的选项: ");
// }

// void again_menu(sqStack *s)
// {
//     while (1)
//     {
//         int a;
//         menu();
//         scanf("%d", &a);
//         switch(a)
//         {
//             case 1 : initial_stack(s);break;
//             default : printf("Error!Please input again!\n");break;
//         }
//     }

// }

int main()
{
    ElemType c;
    sqStack s;
    int len, i, sum = 0;

    initial_stack(&s);

    printf("请输入二进制数，输入#符号表示结束!\n");
    scanf("%c", &c);
    while (c != '#')
    {
        Push(&s, c);
        scanf("%c", &c);
    }
    
    getchar();
    
    len = Stacklen(s);
    printf("栈的当前容量为：%d\n",len);

    Pop(&s); 

    return 0;
}