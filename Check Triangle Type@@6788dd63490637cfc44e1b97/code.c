// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b || a==c || b==c){
        printf("Isosceles");
    }
    else if(a==c&&a==b || b==c&&b==a){
        printf("Equilateral");
    }
    else{
        printf("Scalene");
        }
        return(0);
}