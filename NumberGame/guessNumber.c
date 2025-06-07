#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int randomNumber, Guess, count=0;
printf("Welcome to the Guess The Number Game\n");

 randomNumber = rand()%101;

    srand(time(NULL));
        do{
            printf("Enter Your Number:");
            scanf("%d", &Guess);
            count++;
            if(Guess<randomNumber){
                printf("Enter Bigger Number than %d ",Guess);

            }
    else if(Guess>randomNumber){
                printf("Enter a smaller Number than %d ", Guess);
            }
    else{
        printf("you are right,The Number was %d \n", randomNumber);
        printf("And you Guessed it in the %d th Attempt \n ", count-1);
    }

        } while (Guess!=randomNumber);
printf("Thankyou for playing \n");
printf("Developed by @Sachin..");
}