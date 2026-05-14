#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,largest=0;
    int a[100];
    printf("how many number do you want to enter = ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("enter %dth number",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
if(a[i]>largest){
    largest=a[i];
}
    }
    printf("%d",largest);
}