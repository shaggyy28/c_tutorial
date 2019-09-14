#include<stdio.h>
#include<stdlib.h>
int a = 10;
int foo(int a);
int foo1(int a);

int main(int argc, char const *argv[])
{
    
    int a = 10;
    int *p;
    p = &a;
   
//    *p = a;
   printf("%d\n", playFoo(foo1, 2));
}
/*increments num by 1 */
int foo(int a){
    return a + 1;
}

int foo1(int a){
    return a + 2;
}

int playFoo(int (*foo)(int), int a){
    (*foo)(a);
}