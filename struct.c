#include<stdio.h>
#include<stdlib.h>

typedef struct person
{
    char* first;
    char* last;
} full_name;


int main(int argc, char const *argv[])
{
    // full_name my = {"Sagar", "Ingale"};
    full_name* mySelf = malloc(sizeof(int));
    mySelf -> first = "Sagar";
    mySelf -> last = "Ingale";
    printf("%s %s\n", (*mySelf).first, mySelf -> last);
    // printf("%s %s\n", mySelf.first, mySelf.last);
    
    
    return 0;
}
