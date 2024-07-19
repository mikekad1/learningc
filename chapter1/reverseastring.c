#include <stdio.h>

int py_len(self)
    char self[];
{
    int i;
    for(i=0; self[i]; i++);
    return i;
}
void reverse(char *word)
{
    int py_len();
    int length = py_len(word);
    int new, i;
    //Divided by 2 to determine middle - because that is
    //where loop should stop.
    for(i=0; i<length/2; i++){
    new = word[i];
    word[i] = word[length - i - 1];
    word[length - i - 1] = new;
    }
}
int main(void)
{   
    char word[20];
    //scanf("%s\n");
    fgets(word,20,stdin);

    reverse(word);
   
printf("%s\n", word);
}

