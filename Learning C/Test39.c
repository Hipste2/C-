// //位域
// #include<stdio.h>
// int main()
// {
//     struct Test
//     {
//         unsigned int a : 1;
//         unsigned int b : 1;
//         unsigned int c : 2;
//     }t;
//     t.a = 0;
//     t.b = 1;
//     t.c = 2;
//     printf("test.a的值为:%d\n",t.a);
//     printf("test.b的值为:%d\n",t.b);
//     printf("test.c的值为:%d\n",t.c);
//     printf("size of test :%d",sizeof(t));
//     return 0;
// }