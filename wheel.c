#include<stdio.h>
int main(){
    int tw,fw,w,v;
    scanf("%d%d",&w,&v);
    tw=((v*4)-w)/2; 
    fw=v-tw;   
    printf("%d %d",tw,fw);
    
}