#include <stdio.h>
int main(){
    char x[3] = "Hi";
    char y[3] = {'H', 'i'};
    printf("x %s\n", x);
    printf("y %s\n", y);
    printf("%s\n", "Hi");
    printf("%c%c\n", 'H', 'i');
}

/*-Languages like PHP, Python, 
and JS treat single and double quotes nearly the same. 
Both create 'string' constants.
- In C singles quotes are a character and double quotes
are a character array (neither are a string).
- In C, a character is a byte - a short (typically 8bit)
integer.*/