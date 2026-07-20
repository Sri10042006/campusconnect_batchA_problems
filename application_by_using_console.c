#include<stdio.h>
typedef struct student{
    int id;
    char name[20];
    float cgpa;
}acer;

int main(){
    int n ,i;
    scanf("%d",&n);
    acer arr[n];
    for(i=0;i<n;i++)
    scanf("%d%s%f",&arr[i].id,arr[i].name,&arr[i].cgpa);

    for(i=0;i<n;i++)
    {
        if(arr[i].cgpa>=8.0)
        printf("%s\n",arr[i].name);
    }

}