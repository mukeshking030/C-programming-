#include <stdio.h>

int main(){
    int days;
    float rent;

    scanf("%d",&days);

    if(days<=5) rent=days*500;
    else if(days<=10) rent=5*500+(days-5)*400;
    else rent=5*500+5*400+(days-10)*300;

    printf("Total Rent=%.2f",rent);
}
