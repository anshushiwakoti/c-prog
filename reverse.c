#include<stdio.h>
#include<conio.h>
void main(){
    int n,x,y=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0){
      x=n%10;
      n=n/10;
      y=y*10+x;  
    }
    printf("%d is reverse",y);
}