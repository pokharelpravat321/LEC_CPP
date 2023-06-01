#include<stdio.h>
int main()
{
    int *pc,c;
    c=22;
    printf("address of c:%p\n",&c);
    printf("value of c:%d\n\n",c);
    pc = &c;
    printf("address of a pointer pc:%p\n",pc);
    printf("value of pointer pc:%d\n\n",*pc);
    c=11;
    printf("address of a pointer pc:%p\n",pc);
    printf("value of pointer pc:%d\n\n",*pc);
    *pc=2;
     Printf("address of c:%p\n",&c);
    printf("value of c:%d\n\n",c);
    return 0;
    
}
