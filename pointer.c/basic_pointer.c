#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=15,*b,**c;
    b=&a;
    c=&b;
    printf("%d\n",a);//OUtput:value of a
    printf("%d\n",&a);//Output:address of a
    printf("%d\n",b);//OUtput:address of a which is the value of b stored
    printf("%d\n",&b);//Output:address of b
    printf("%d\n",*b);//output:value of a 
    printf("%d\n",c);//OUtput:address of b which is the value of c stored
    printf("%d\n",*c);//output :adrees of a which stored as the value of b 
    printf("%d\n",**c);//output:value of a


}