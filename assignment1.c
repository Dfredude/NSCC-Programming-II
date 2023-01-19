/* Create an application for a streaming service which will determine the price of a subscription. 
Ask the user to choose 1 for ad-supported, 2 for basic, or 3 for standard.

The output is the name of the tier chosen as well as the price of their subscription.
The prices are as follows: ad-supported $9.99, basic $16.99, standard $24.99.

If the user enters an invalid choice, set the price to 0.
Prompt the user if they want an add-on to allow users outside their household, 
but only if the subscription selection is valid. The add-on price is $7.99.

Display an appropriate output message that indicates the subscription tier (always) and add-on (only if chosen).
Save the file as Streaming.c */

#include<stdio.h>

int main()
{
    int option = -1;
    char* tier = "No plan\0";
    float price = 0;
    printf("Please choose a subscription: \n");
    printf("1. Ad-supported $9.99\n");
    printf("2. Basic $16.99\n");
    printf("3. Standard $24.99\n");
    printf(">");
    scanf("%2d", &option);
    if (option == 1)
    {
        price = 9.99;
        tier = "Ad-supported\0";
    } else if (option == 2){
        price = 16.99;
        tier = "Basic\0";
    } else if (option == 3){
        price = 24.99;
        tier = "Standard";
    }

    char add_on;
    printf("Do you wish to purchase the add-on to allow users outside your household (y/n)? ");
    scanf(" %1c", &add_on);

    if (add_on == 'y'){
        price += 7.99;
    }

    printf("Subscription tier: %s\n", tier);
    printf("Total price of your subscription: %3.2f\n", price);
    
    return 0;
}
