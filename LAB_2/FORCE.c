#include <stdio.h>

int main() {
    float mass, accleration, force;
    printf("enter mass:");
    scanf ("%f",&mass);
    printf("entre accleration:");
    scanf("%f", &accleration);
    force = mass * accleration;
    printf("force = %f\n" , force);

    return 0;
}
