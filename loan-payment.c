#include <stdio.h>

float calculate_interest(float total, float rate){
    return total * (1.00 + (rate/100.0)) ;
}

int main()
{
    float loan_price;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_price);
    
    float interest_rate;
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    
    float monthly_payment;
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    printf("Balance remaining after first payment: %.2f\n", loan_price - monthly_payment);
    loan_price -= monthly_payment;
    loan_price = calculate_interest(loan_price, interest_rate);
    
    printf("Balance remaining after second payment: %.2f\n", loan_price - monthly_payment);
    loan_price -= monthly_payment;
    loan_price = calculate_interest(loan_price, interest_rate);
    
    printf("Balance remaining after third payment: %.2f\n", loan_price - monthly_payment);
    loan_price -= monthly_payment;
    loan_price = calculate_interest(loan_price, interest_rate);
}

