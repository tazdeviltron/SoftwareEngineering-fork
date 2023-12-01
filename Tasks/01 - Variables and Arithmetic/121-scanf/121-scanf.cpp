#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int y = 0;
    int z = 0;

    //Prompt user
    printf("Enter your age\n");
    printf("Enter another number\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);
    int number = scanf_s("%d", &y);
    int average = (x+y)/2;

    //Display how many items were matched
    printf("Matched %d items\n", found);
    printf("Matched %d items\n", number);

    //Display what was typed in
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("average= %d\n", average);
}


