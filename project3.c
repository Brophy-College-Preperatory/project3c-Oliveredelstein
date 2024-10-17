#include <stdio.h>

//Build project 3 here:
// add y loop

int main(void){

int totalQ = 0;
int totalD = 0;
int totalN = 0;
int totalP = 0;
int userInput;
char choice = 'y';
while (choice == 'y'){
    //while cjoice == y
    //need to ask the user if they would like to continue
        //so print f: prompt
        //scan it
        //if no breaka
    printf("How Much Change Do You Have");
    printf("Enter as a whole number. for example, print .41$ as 41$");
    scanf("%i", &userInput);


    while (userInput > 24){
    userInput = userInput - 25;
    totalQ++;
    }

    while (userInput > 9){
    userInput = userInput - 10;
    totalD++;
    }

    while(userInput > 4){
    userInput = userInput - 5;
    totalN++;
    }

    while (userInput > 0){
    userInput = userInput - 1;
    totalP++;
    }
    printf("Quarters: %i \n", totalQ);
    printf("Dimes: %i \n", totalD);
    printf("Nickles: %i \n", totalN);
    printf("Pennies: %i \n", totalP);

    printf("Total Coins = %i\n" , totalD + totalN + totalP + totalQ);
    };
return 0;
}






