#include<stdio.h>
#include<string.h>

int main(){
    char str[100],temp;
    scanf("\n %s",str);
    int n=strlen(str);
    int start=0 ,end=n-1;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;

    }
    printf("%s",str);

}