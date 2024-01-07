#include <stdio.h>

int main(){

    char opertor;
    double num1;
    double num2;
    double result;

    printf("\nenter operator:");
    scanf(" %c", &opertor);

    printf("enter num1:");
    scanf("%lf",&num1);

    printf("enter num2:");
    scanf("%lf",&num2);

    switch (opertor){
        case '+':
            result = num1 + num2;
            printf("\nresult:%lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult:%lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult:%lf",result);
            break;  
        case '/':
            result = num1 / num2;
            printf("\nresult:%lf",result);
            break;
        default:
        printf("\n404");
    }

    return 0;
}   
