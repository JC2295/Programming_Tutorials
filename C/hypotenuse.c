#include <stdio.h>
#include <math.h>

int main(void)
{
    double adjacent, opposite, hypotenuse;

    printf("Enter length of adjacent: ");

    scanf("%lf", &adjacent);

    printf("Enter length of opposite: ");

    scanf("%lf", &opposite);

    double sum = pow(adjacent, 2) + pow(opposite, 2);

    hypotenuse = sqrt(sum);

    printf("Length of hypotenuse is: %lf", hypotenuse);
}