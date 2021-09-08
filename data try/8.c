//二叉树
#include<stdio.h>
#include<stdlib.h>

typedef char ElemType;


typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

void CreatBiTree(BiTree *);
void visit(ElemType ,int);
void PreOrderTraverse(BiTree , int);

//创建一颗二叉树,用前序遍历的方式输入数据
void CreatBiTree(BiTree *T)
{
    char c;
    scanf("%c", &c);
    if(' ' == c)
    {
        *T = NULL;
    }
    else
    {
        *T = (BiTNode *)malloc(sizeof(BiTNode));
        (*T)->data = c;
        CreatBiTree(&(*T)->lchild);//左
        CreatBiTree(&(*T)->rchild);//右
    }
}

//访问二叉树结点的具体操作
void visit(ElemType c,int level)
{
    printf("%c位于%d层\n", c, level);
}


//遍历二叉树
void PreOrderTraverse(BiTree T, int level)
{
    if( T )
    {
        visit(T->data, level);
        PreOrderTraverse(T->lchild, level+1);
        PreOrderTraverse(T->rchild, level+1);
    }

}


int main()
{
    int level = 1;
    BiTree T = NULL;
    
    CreatBiTree(&T);
    PreOrderTraverse(T, level);

    return 0;
}