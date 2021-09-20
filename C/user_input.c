#include <stdio.h>

int main(void)
{
    float pi = 3.242, radius = 0, area = 0;

    printf("Enter Circle Radius: ");

    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Circle Area: %f\n",area);
    
}