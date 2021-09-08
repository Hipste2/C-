//链表--头插法
#include<stdio.h>
#include<stdlib.h>

struct Book
{
    char title[20];
    char author[20];
    struct Book *next;
};

void addBook(struct Book **);
void getInput(struct Book *);
void printShow(struct Book *);
void release(struct Book **);


void addBook(struct Book **library)
{
    struct Book *book, *temp;

    book = (struct Book *)malloc(sizeof(struct Book));
    if(book == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }
    getInput(book);

    if(*library != NULL)
    {
        temp = *library;
        *library = book;
        book->next = temp; 
    }
    else
    {
        *library = book;
        book->next = NULL;
    }

}

void getInput(struct Book *book)
{
    printf("开始添加信息...\n");
    printf("请输入书名:");
    scanf("%s",book->title);
    printf("请输入作者:");
    scanf("%s",book->author);
}

void printShow(struct Book *B)
{
    struct Book *library;
    int count = 1;
    library = B;
    while(library != NULL)
    {
        printf("第%d本书\n",count);
        printf("书名:%s\n",library->title);
        printf("作者:%s",library->author);
        library = library->next;
        count++;
    }
    
}

void release(struct Book **Book)
{
    struct Book *temp;
    while (*Book != NULL)
    {
        temp = *Book;
        *Book = (*Book)->next;
        free(temp);
    }
    
}

int main()
{
    struct Book *library = NULL;
    int ch;
    while (1)
    {
        printf("请问是否需要录入书籍信息(Y/N)？");
        do
        {
            ch = getchar();
        }while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
        {
            addBook(&library);
        }
        else
        {
            break;
        }
    }
    printf("请问是否需要打印图书信息(Y/N)？");
    do
    {
        ch = getchar();
    }while (ch != 'Y' && ch != 'N');
    if (ch == 'Y')
    {
        printShow(library);
    }
    else
    {
        release(library);
    }
    return 0;
}