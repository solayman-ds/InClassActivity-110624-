#include <stdio.h>

int main() {

 float fahrenheit;

 printf("Enter temperature in Fahrenheit: ");

 scanf("%f", &fahrenheit);

 double celsius = (fahrenheit - 32) * 5 / 9;

 printf("Temperature in Celsius: %f\n", celsius);

 return 0;

}
