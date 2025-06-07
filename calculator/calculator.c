#include<stdio.h>
int calculation(int choice){
    int number1, number2,result;
    printf("Enter the number1: ");
    scanf("%d", &number1);
    printf("\n");
    printf("Enter the number2 : ");
    scanf("%d", &number2);
    switch (choice)
    {
    case 1:

        result = number1 + number2;
        printf("The sum of %d + %d = %d ", number1,number2,result);
        printf("\n******\n\n");

        break;
        case 2:
            result = number1 - number2;
            printf("The subtraction of %d - %d = %d ",number1,number2,result);
            break;
            case 3 :
                result = number1 / number2;
                printf("The division of %d / %d = %d", number1 , number2,result);
                break;


    default:
        break;
    }




}
void choice(){
     printf("Enter 1 for addition : \n");
    printf("Enter 2 for subtraction : \n ");
    printf("Enter 3 for multiplication :\n ");
    printf("Enter 4  for division :\n ");
    printf("Enter 5 for modulus : \n ");
    printf("Enter 6 for power : \n ");
    printf("Enter 7 for Exit : \n");
}



int main(){
    int choicee;
    while (1){
        choice();
        printf("Enter your choice now : ");
        scanf("%d", &choicee);
        calculation(choicee);
        if(choicee==7) break;

    } 
}