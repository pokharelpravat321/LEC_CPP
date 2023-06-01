#include<stdio.h>
void main(){
    int *pc,c;
    c=5;
    pc=&c;
    printf("value of address of c is given by pointer variable %p\n",pc);
    printf("value of c id given by *pc %d",*pc);
}