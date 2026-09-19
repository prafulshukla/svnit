#include <stdio.h>

int main() {
    char c;
    printf("Please enter a character or a digit ");
    scanf("%c", &c);
    if(c >='a' && c <= 'z') 
        printf("You entered a lowercase character");
    else if(c >= 'A' && c <= 'Z') 
        printf("You entered an uppercase character");
     else if(c >= '0' && c <= '9') 
        printf("You entered a digit");
     else 
        printf("You entered a special character");
    
    return 0;
}