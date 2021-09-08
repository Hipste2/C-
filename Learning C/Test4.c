#include<stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct date
{
    int month;
    int year;
    int day;
    /* data */
};

typedef struct Book
{
    struct date date1;
    char author[20];
    char name[20];
    char takeout[20];
}book;


int main()
{
    book book1;
    int length;
    length = sizeof(book1);
    printf("该结构体大小为：%d\n",length);
    return 0;

}