//枚举型
#include<stdio.h>
#include<time.h>
  enum Day
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,

};

int main()
{
  

    enum Day today;
    struct tm *p;
    time_t t;
    p = localtime(&t);    
    
    today = p->tm_wday;
    switch (today)
    {
    case Mon:break;
    case Tue:
    case Wed:
    case Thu:
    case Fri:printf("干活！\n");break;
    case Sat:
    case Sun:printf("放假！");break;
    default:printf("error!\n");
        break;
    }
    return 0;
}