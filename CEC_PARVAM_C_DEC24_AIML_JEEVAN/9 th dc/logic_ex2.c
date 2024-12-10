#include<stdio.h>
int main(){
    int num,Result;
    printf("enter  the number:");
    scanf("%d",&num);
    if(num > 500){
        printf("the number is greater than 500. Result after dividing by 2:%d\n",num/2);
    }else if (num >100){
        printf("the number is greater than 100. Result after multiplying by 5:%d\n", num*5);
    }
    else
    {
        printf("the number is less than or equal to 100. Result after modulud with 10:%d\n", num % 10);
    }
     return 0;
    {
        






