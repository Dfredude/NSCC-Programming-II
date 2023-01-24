/* Create an application that prompts an employee for an hourly pay rate and number of hours worked. 
Compute their gross pay (hours times rate), withholding tax, and net pay (gross pay minus withholding tax). 
Withholding tax is computed as a percentage of gross pay based on the following: 

Gross Pay ($)                                          Withholding (%)
0 to 450.00                                                10
450.01 to 600.00                                           12
600.01 to 1000.00                                          15
1000.01 and over                                           20
*/

#include<stdio.h>

int main(){
    int wage = 0, number_of_hours = 0, withholding_tax_percentage = 0, gross_pay = 0, withholding_tax = 0;
    char ch;
    
    printf("Please enter an hourly pay rate: ");
    scanf("%d", &wage);
    while ( ( (ch = getchar()) != '\n' && ch != EOF)); // Flushing buffer
 
    printf("Please enter the number of hours worked: ");
    
    scanf("%d", &number_of_hours);
    while ( ( (ch = getchar()) != '\n' && ch != EOF)); // Flushing buffer


    gross_pay = wage * number_of_hours;

    if (gross_pay <= 450) withholding_tax_percentage = 10;
    else if (gross_pay <= 600) withholding_tax_percentage = 12;
    else if (gross_pay <= 1000) withholding_tax_percentage = 15;
    else withholding_tax_percentage = 20;

    withholding_tax = gross_pay * (20.0/100);

    printf("Your gross pay: %d\n", gross_pay);
    printf("The withholding tax is: %d\n", withholding_tax);
    printf("Your net pay is: %d\n", gross_pay-withholding_tax);


    return 0;
}


