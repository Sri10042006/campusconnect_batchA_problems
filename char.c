#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch (a)
    {
        case 'A'...'Z':printf("Uppercase letter");
        break;
        case 'a'...'z':printf("lowercase Letter");
        break;
        case '0'...'9':printf("Digit");
        break;
    }
}