// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b!=c || a==c&&c!=b || b==c&&a!=c){
        printf("Isosceles");
    }
    else if(a==c&&a==b&&b==c){
        printf("Equilateral");
    }
    else{
        printf("Scalene");
        }
        return(0);
}