#include<stdio.h>

int main(void){

    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    char operator1;
    printf("Enter the operator: ");
    scanf(" %c",&operator1);
    if(operator1!='=' || operator1!= '+' || operator1!= '-' || operator1!= '/'|| operator1!= '*'){
        printf("THAT ISN'T A VALID OPERATION");
        return 0;
    }
    while (operator1!= '='){
        int num2;
        printf("Enter the number: ");
        scanf("%d",&num2);
        if (operator1=='+'){
            num1=num1+num2;
        }
        else if(operator1=='-'){
            num1=num1-num2;
        }
        else if(operator1=='*'){
            num1=num1*num2;
        }
        else if(operator1=='/'){
            if (num2==0){
                printf("\nINVALID!!! CANT DIVIDE BY ZERO\n\n");
            }
            else{
                num1=num1/num2;
            }
        }
        printf("Enter the operator: ");
    scanf(" %c",&operator1);
if(operator1!='=' || operator1!= '+' || operator1!= '-' || operator1!= '/'|| operator1!= '*'){
        printf("THAT ISN'T A VALID OPERATION");
        return 0;
    }
        
    }
    printf("The final result is: %d\n",num1);
    return 0;
}