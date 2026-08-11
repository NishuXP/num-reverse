#include<stdio.h>
int main(){
    int no,t=0;
    printf("Enter the value to be reversed:");
    scanf("%d", &no);
    printf("the given number is %d",no);
    while(no!=0){
        t=(t*10)+(no%10);
        no=no/10;
    }
    printf("The reverse no. is:%d",t);
    return 0;
}