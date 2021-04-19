#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, findNum, flag = 0;
    printf("How many numbers in your list? \n");
    scanf("%d",&size);
    int arr[size];        // creating the array to store the values
    printf("Enter numbers: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);  // input numbers to array
    }
    printf("What num you want to search?");
    scanf("%d", &findNum);                // num to be searched

    for(int i=0; i<size; i++) {
        if(findNum == arr[i]) {         // linear search operation, comparing the num to be searched with all the elements present in the array
            flag = 1;                   // It helps to know, num is found or not.
            printf("%d is found at index %d\n", findNum, i);  // print index if the num found
            break;
        }
    }

    if(flag == 0) {
        printf("%d is not in the Array\n", findNum);   // if num not found print this
    }

}
