#include<stdio.h>
int calculateInterest(int pr, int ti, int ra) {
    return ((pr * ti * ra) / 100);
}
int main() {
    float principal, time, rate, finalAmount;
    printf("Enter the principal amount in rupees:\n");
    scanf("%f", &principal);
    printf("Enter the time duration in years:\n");
    scanf("%f", &time);
    printf("Enter the rate of interest:\n");
    scanf("%f", &rate);
    finalAmount = calculateInterest(principal, time, rate);
    printf("The simple interest on principal of rupees %f is: rupees %f", principal, finalAmount);
    return 0;
}