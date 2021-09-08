//结构体
#include<stdio.h>
struct  Book
{
    char title[20];
    char publisher[20];
    char author[10];
    float price;
    unsigned int date;
}book;


int main()
{
    printf("请输入书名:\n");
    scanf("%s",book.title);
    printf("请输入作者:\n");
    scanf("%s",book.author);
    printf("请输入售价:\n");
    scanf("%.2f",&book.price);
    printf("请输入出版日期:\n");
    scanf("%u",&book.date);
    printf("请输入出版社；\n");
    scanf("%s",book.publisher);

    printf("\n======数据录入完毕=======\n");
    printf("书名:%s\n",book.title);
    printf("作者:%s\n",book.author);
    printf("售价:%.2f\n",book.price);
    printf("出版日期:%u\n",book.date);
    printf("出版社:%s\n",book.publisher);
    return 0; 

}