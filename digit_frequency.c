/*Given a string,s,consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    int counter, *numbers;
    s = malloc(1024 * sizeof(char));
    numbers = (int*) calloc (10, sizeof(int));
    scanf("%[^\n]", s);    
    s = realloc(s, strlen(s) + 1);

    for (counter = 0; counter < strlen(s); counter++){
        if ((*(s+counter)>47) && (*(s+counter)<58)){
            (*(numbers + (*(s+counter)-48)))++;
        }

    }
    for (counter = 0; counter <10; counter++){
        printf("%d\t", *(numbers+counter));
    }
    printf ("\n");


    return 0;
}
