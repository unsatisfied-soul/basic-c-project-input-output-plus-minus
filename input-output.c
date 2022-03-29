#include <stdio.h>

int main(){
    float num1 , num2, result;

    printf("please Enter two numbers here :");
    scanf("%f %f", &num1, &num2);
    
    //sum
    result = num1 + num2;

    printf("%.2f + %.2f = %.2f\n", num1,num2, result);

    //minus
    result = num1 - num2;

    printf("%.2f + %.2f = %.2f\n", num1,num2, result);

    //multiply
    result = num1 * num2;

    printf("%.2f + %.2f = %.2f\n", num1,num2, result);

    //divide
     result = num1 / num2;

    printf("%.2f + %.2f = %.2f\n", num1,num2, result);
    return 0;
}