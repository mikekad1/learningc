#include <stdio.h>
int main(){
    printf("%c %d\n", 'A', 'A');
}
/*
- The C 'char' type is just a number - 
character representation depend on the
character set.
- Modern characters includeing 😊 are represented
 in multi-byte sequences using Unicode and UTF-8 - 
 but in 1978 we used ASCII and other character sets.
*/