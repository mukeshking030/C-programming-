#include <stdio.h>

int main(){
    int pin=1234, entered, choice;
    float balance=10000, amount;

    printf("Enter PIN: ");
    scanf("%d",&entered);

    if(entered==pin){
        printf("1.Withdraw 2.Deposit 3.Check Balance\n");
        scanf("%d",&choice);

        if(choice==1){
            scanf("%f",&amount);
            if(amount<=balance){
                balance-=amount;
                printf("Withdraw success\nBalance=%.2f",balance);
            }else{
                printf("Insufficient balance");
            }
        }
        else if(choice==2){
            scanf("%f",&amount);
            balance+=amount;
            printf("Deposit success\nBalance=%.2f",balance);
        }
        else if(choice==3){
            printf("Balance=%.2f",balance);
        }
        else{
            printf("Invalid option");
        }
    }else{
        printf("Wrong PIN");
    }
}
