#include <stdio.h>
/*We must carefully understand the "size" of the character array 
and not exceed it - in C nothing is "auto-extended"*/
int main(){
    char x[10];
    int i;

    for(i=0; i<1000; i++) x[i] = '*'; //here 1000 chars are beyond alocated 10.
    printf("%s\n",x);
}

//Segmentation fault: 11