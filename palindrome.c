#include<stdio.h>
#include<conio.h>
void main(){
    int n,x,y=0,z;
    printf("Enter a number");
    scanf("%d",&n);
    z=n;
    while(n!=0){
      x=n%10;
      n=n/10;
      y=y*10+x;  
    }
    if (z==y){
    printf("%d is palindrome",z);
    }
}