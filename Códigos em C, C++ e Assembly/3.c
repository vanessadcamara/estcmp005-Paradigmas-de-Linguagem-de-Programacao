#include<stdio.h>

int main(){
    float f;
    scanf("Insira a temperatura em Fahrenheit: %f", &f);
    float c = 5 * ((f-32)/9);
    printf("A temperatura em Celsius é: %.2f\n", c);
    return 0;
}