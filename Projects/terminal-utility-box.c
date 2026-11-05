#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Tables(int m, int n);
void TempConvert(float temp, int opera);


int main(){
    srand(time(NULL));
    int option = 0;

    while (option != 5)
    {
        printf(" 1. Temperature converters.\n");
        printf(" 2. Multiplication table.\n");
        printf(" 3. Number guessing game.\n");
        printf(" 4. Basic calculator.\n");
        printf(" 5. Exit\n");
        printf("Enter your Task to be performed: \n");
        scanf("%d", &option);

        if (option == 5) break;
        else if (option == 1){
            int opera;
            float temp;
            printf("Tempeature converstion: ");
            printf(" 1. Celcius to Farenhite\n");
            printf(" 2. Farenhite to Celcius\n");
            printf("Choose option: ");
            scanf("%d", &opera);
            printf("Enter intial temperature: ");
            scanf("%f", &temp);
            TempConvert(temp, opera);
        }
        else if (option == 2){
            int m, n;
            printf("Enter your number: ");
            scanf("%d", &m);
            printf("Enter next number: ");
            scanf("%d", &n);
            Tables(m, n);
        }
        else if (option == 3 ){
            int opera, Guess;
            int random = rand();
            while (1)
            {
                printf("1. Guess Number.\n 2.Exit\n Choose: ");
                scanf("%d", &opera);
                if (opera == 1){
                    printf("Enter your Guess: ");
                    scanf("%d", &Guess);
                     
                    if (Guess > random){
                        printf("Smaller!!");
                    }
                    else if (Guess < random){
                        printf("Larger!!");
                    }
                    else {
                        printf("Bingo!! %d was correct", random);
                        break;
                    }
                }

                else if (opera == 2){
                    printf("Exiting!!!");
                    break;
                }

                else {
                    printf("Enter Valid option!!");
                }
            }
            
        }

        else if (option == 4){
            int num1, num2;

            int oper;

            while (1)
            {
                printf("Enter Number1: ");
                scanf("%d", &num1);
                printf("Enter Number2: ");
                scanf("%d", &num2);

                printf("\n 1. + \n 2. *\n 3. \\ \n 4. - \n 5. Exit \n Enter operation: ");
                scanf("%d", &oper);

                if (oper == 1){
                    printf("%d + %d = %d", num1, num2, num1 + num2);
                }
                else if (oper == 2){
                    printf("%d * %d = %d", num1, num2, num1*num2);
                }
                else if (oper == 3){
                    if (num2 == 0){
                        printf("Division by zero is not allowed\n");
                        continue;
                    }
                    printf("%d / %d = %.2f", num1, num2, (float)num1/num2);
                }
                else if (oper == 4){
                     printf("%d - %d = %d", num1, num2, num1 - num2);
                }
                else if (oper == 5){
                    break;
                }
                else {
                    printf("Enter a valid input");
                }
            }
            

        }
        else {
            printf("*************Enter Valid opeartion*************");
        }
    }
    
}

void TempConvert(float temp, int opera){
    if (opera == 1) {
        float result = (temp * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", result);
    }
    else if (opera == 2) {
        float result = (temp - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f\n", result);
    }
    else {
        printf("Invalid conversion option!\n");
    }
}

void Tables(int m, int n){
    for (int i = 1; i <= n; i++){
        printf("%d * %d = %d\n", m, i, m*i);
    }
}