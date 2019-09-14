#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    union constant
    {
        int a;
        float b;
        char c;
    } cont;
    cont.a = 123;
    // cont.b = 10.2;
    // cont.c = 'c';
    // printf("%d %f %c\n", cont.a, cont.b, cont.c);
    // printf("%p %p %p\n", &cont.a, &cont.b, &cont.c);
    // printf("%d\n", &cont.a == &cont.c );
    // printf("%d\n", 1 == 1);
    // int *ptr;
    // scanf("%p", &ptr);
    // printf("%d", *ptr);
    printf("%x\n", cont.a);

    return 0;
}
