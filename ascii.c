<<<<<<< HEAD
#include <stdio.h>
#include<conio.h>

int main(void) {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    getch();
    return 0;

}