#include <stdio.h>

int main() {
    float units, total_bill = 0.0;   
    printf("Enter units consumed: ");
    scanf("%f", &units);
	if (units < 0) 
	{
        printf("Invalid input");
    }
    else if (units<=100) 
	{
     total_bill = units *1.5;	
     printf("%f", total_bill);
    }
    else if (units>100 && units<=200) 
	{
        total_bill = 150+(units - 100) * 2.0;
        printf("%f", total_bill);
    }
    else if (units > 200 && units<=300) 
	{
        total_bill = 350+(units - 200) * 3.0;
        printf("%f", total_bill);
    }
    else
	{
        total_bill = 650+ (units-300)*5;
        printf("%f", total_bill);
    }
    printf("Total Bill = %.2f\n", total_bill);
    return 0;
}
