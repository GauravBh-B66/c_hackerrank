#include <stdio.h>
#include <stdlib.h>


int main(){
    int numberOfElements;
    int counter;
    int sum=0;
    int *parray;

    printf("How many numbers?\n");
    scanf("%d",&numberOfElements);

    parray = (int*)malloc(numberOfElements*sizeof(int));        //Typecast is necessary because malloc returns a pointer of void type.
    
    if (parray == NULL){
        printf("Memory Allocation Failed.\n");
        return 0;
    }
    else{
        for(counter = 0; counter<numberOfElements; counter++){
           scanf("%d",(parray+counter));
        }
        for (counter=0; counter<numberOfElements; counter++){
            sum += *(parray+counter);
        }
        printf("The sum is %d.\n",sum);
        return 0;
    }

}