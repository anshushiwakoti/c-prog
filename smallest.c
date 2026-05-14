#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,smallest;
    int a[100];
    printf("how many number do you want to enter = ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("enter %dth number",i);
        scanf("%d",&a[i]);
        smallest=a[1];
    }
    for(i=1;i<=n;i++){
if(a[i]<smallest){
    smallest=a[i];
}
    }
    printf("%d",smallest);
}