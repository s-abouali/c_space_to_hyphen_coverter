#include<stdio.h>
#include<string.h>
int main(){

    char string[100], *p; //name the string anything you want

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); //Don't forget to change the name of your string!!
    
    p = string;

    for (p = string ; p < string + strlen(string); p++){
        
        if (*p == ' '){
            *p = '-';
        }
    }
    
    puts(string);

    return 0;
}