#include<stdio.h>
void filecopy(FILE *ifp, FILE *ofp);
int main(int argc, char const *argv[])
{
    if(argc == 1){
        filecopy(stdin, stdout);
        return 0;
    }else if (argc == 3)
    {
        FILE* fp_in = fopen(argv[1], "r");
        FILE* fp_out = fopen(argv[2], "w+");
        filecopy(fp_in, fp_out);
    }
    
    return 0;
}


void filecopy(FILE *ifp, FILE *ofp){
    int c;
    while ((c = getc(ifp)) != EOF){
        printf("%c", c);
        putc(c, ofp);
    }
    
}
