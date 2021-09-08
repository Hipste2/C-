#include<stdio.h>
#include<stdlib.h>

#define stacklenth 100
#define OK 0
#define Elemtype char

typedef struct stackTest
{   
    Elemtype *base;
    Elemtype *top;
    int stacksize;
} stack;

void init_stack(stack *);//初始化
void Push(stack *, Elemtype );//入栈
Elemtype getPop(stack *);//出栈
int Stacklen(stack );//当前栈的长度
void destoryStack(stack *);//销毁栈

void init_stack(stack *s)//初始化
{
    s->base = (Elemtype *)malloc(stacklenth * sizeof(Elemtype));
    if(!s->base)
    {
        printf("Something wrong in init_stack!\a\n");
        exit(0);
    }
    else
    {
        s->top = s->base;
        s->stacksize = stacklenth;
    }
}

void Push(stack *s, Elemtype e)//入栈
{
    if(s->top - s->base == s->stacksize)
    {
        s->base = (Elemtype *)realloc(s->base, (stacklenth + s->stacksize) * sizeof(Elemtype));
        if(!s->base)
        {
            printf("Something wrong in Push!\a\n");
            exit(0);
        }
    }
    else
    {
        *(s->top) = e;
        s->top++;
    }
}

Elemtype getPop(stack *s)//出栈
{
    Elemtype *c;
    if(s->top == s->base)
    {
        printf("END!\a\n");
        exit(0);
    }
    else
    {
        Elemtype *c = *s->top;
        s->top--;
    }
    return *c;
}

int Stacklen(stack s)//当前栈的长度
{
    return (s.top - s.base);
}

void destoryStack(stack *s)//销毁栈
{
    if(s->top == s->base)
    {
        free(s->base);
    }
    else
    {
        while(s->top != s->base)
        {
            Elemtype *d;
            d = s->top;
            s->top--;
            free(d);
        }
    }
}

int main()
{
    stack s;
    Elemtype e, *a;
    int i = 0, len;
    //初始化栈
    init_stack(&s);
    //入栈
    printf("请输入要入栈的元素(若结束按下#):");
    scanf("%c", &e);
    while (e != '#')
    {
        Push(&s, e);
        scanf("%c", &e);
    } 
    getchar();
    //出栈
    printf("排队出来!");
    len = Stacklen(s);
    while(i<len)
    {   
        *a = getPop(&s);
        printf("第%d出栈的元素是:%c\n", (i+1), *a);
        i++;
    }
    //计算栈的长度
    printf("当前长度为:%d\n", len);
    printf("展示结束！\n");
    destoryStack(&s);
    return 0;
}