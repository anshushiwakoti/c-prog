#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,a,b,LCM,c;
    printf("enter any tow numbers");
    scanf("%d%d",&a,&b);
     x=a;
     y=b;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    LCM=(x*y)/a;
    printf("HCF is %d \n LCM is %d",a,LCM);
}
    
