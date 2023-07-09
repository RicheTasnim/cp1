#include <stdio.h>

int main(){
    double num1, num2;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter another number: ");
    scanf("%lf", &num2);
    /*double sum = num1+num2;
    double sub = num1-num2;
    double mul = num1*num2;
    double div = num1/num2;*/
    char a = '+';
    char b = '-';
    char c = '*';
    char d = '/';
    printf("%lf %c %lf = %lf\n", num1,a, num2, num1+num2);
    printf("%lf %c %lf = %lf\n", num1,b, num2, num1-num2);
    printf("%lf %c %lf = %lf\n", num1,c, num2, num1*num2);
    printf("%lf %c %lf = %lf\n", num1,d, num2, num1/num2);
    return 0;
}
