#include <stdio.h>

void inputAndShow();

int main() {
    inputAndShow();

    return 0 ;
}

void inputAndShow() {
    int Math ,Physice ,Camistry;

    printf("Enter Math :");
    scanf("%d", &Math);

    printf("Enter Physice :");
    scanf("%d",&Physice);

    printf("Enter Camistry :");
    scanf("%d",&Camistry);

    printf("scores : Math = %d , Physice = %d , Camistry = %d",Math,Physice,Camistry);
} 