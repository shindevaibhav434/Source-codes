#include <stdio.h>

int main() {
    
    int iNo = 0;
    
    printf("Enter number to check number is even or not \n");
    scanf("%d",&iNo);
    printf("\n");
    
    if((iNo % 2) == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is not even");
    }
    
}
