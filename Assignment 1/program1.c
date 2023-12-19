#include<stdio.h>

float simple_interest(int p, float r, int t)
{
    float simple_interest = (p*r*t)/100;
    return simple_interest;
}

int main()
{
    int principle, time;
    float rate, simpleinterest;
    printf("Enter Principle Amount: ");
    scanf("%d", &principle);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time: ");
    scanf("%d", &time);
    simpleinterest = simple_interest(principle, rate, time);
    printf("Simple Interest: %.2f \n", simpleinterest);
    return 0;
}