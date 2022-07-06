/*Given a sentence, , print each word of the sentence in a new line.

Input Format

The first and only line contains a sentence, .

Constraints
1<len(s)<1000

Output Format

Print each word of the sentence in a new line.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int counter;    
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    //printf ("%d\n", strlen(s));

    for (counter=0; counter <strlen(s); counter++){
        if (*(s+counter)==32){
            printf("\n");
        }
        else printf("%c",*(s+counter));
    }
    printf("\n");

    return 0;
}

