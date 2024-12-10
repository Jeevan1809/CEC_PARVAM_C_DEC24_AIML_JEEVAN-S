#include<stdio.h>
int main(){
    int Age=0;
    printf("Enter the Age : ");
    scanf("%d",&Age);
    if(Age>=18){
        if(Age >= 200){
            printf("Your Enter wrong Age 1");
        }else{ 
            printf("Your eligible to vote");
        }

    }
    else if(Age < 18){

        printf("Your Enter wrong Age 2");
    }    
    return 0;
}
