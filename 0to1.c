#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,b,d=0,y=0;
    printf("enter amy number");
    scanf("%d",&n);
    long long int z=n,c;
    while(n!=0){
        b=n%10;
        n=n/10;
        d++;
    }
    for(int i=0;i<d;i++){
      c=(z/pow(10,d-1-i));
      c=c%10;
      if(c==0){
        c=1;
      }
      y=y*10+c;
    }
    printf("%d",y);
    getch();
    }