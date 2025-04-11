// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    if(a==b || a==c || b==c){
        printf("Isosceles");
    }
    else if(a==c&&a==b || b==c&&b==a){
        printf("Equilateral");
    }
    else{
        printtf("Scalene")
        }
        return(0);
}