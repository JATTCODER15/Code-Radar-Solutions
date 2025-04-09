// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    if(a%4==0&&a!=1900){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}