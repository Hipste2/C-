#include<stdio.h>
#include<stdlib.h>

struct Book getInput(struct Book*);
void printshow(struct Book *);

struct Date
{
    int year;
    int month;
    int day;
};


struct Book
{
    char Title[128];
    char publisher[128];
    char author[128];
    int price;
    struct Date date;  
};

struct Book getInput(struct Book *book)
{
    printf("---欢迎来到书籍录入系统！---\n\n");
    printf("请输入书名:");
    scanf("%s", book->Title);
    printf("请输入出版社:");
    scanf("%s", book->publisher);
    printf("请输入作者:");
    scanf("%s", book->author);
    printf("请输入价钱:");
    scanf("%d", &book->price);
    printf("请输入日期:");
    scanf("%d", &book->date.year, &book->date.month, &book->date.day);
    
}

void printshow(struct Book *book)
{
    printf("书名:%s\n", book->Title);
    printf("出版社:%s\n", book->publisher);
    printf("作者:%s\n", book->author);
    printf("价钱:%d\n", book->price);
    printf("日期:%d\n", book->date.year, book->date.month, book->date.day);
}

int main()
{
    struct Book *b1, *b2;
    b1 = (struct Book*)malloc(sizeof(struct Book));
    b2 = (struct Book*)malloc(sizeof(struct Book));
    printf("----开始录入书籍信息----\n\n");

    getInput(b1);
    putchar('\n');

    getInput(b2);
    putchar('\n');

    printf("开始打印第一本书的信息....\n");
    printshow(b1);
    putchar('\n');

    printf("开始打印第二本书的信息....\n");
    printshow(b2);

    free(b1);
    free(b2);
    return 0;
}