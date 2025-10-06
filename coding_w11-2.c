#include <stdio.h>

float average(int a, int b, int c) {
    return(a + b + c)/3;
}
int main() {
    int Math, Physics, Chemistry ;
    float avg ;

    printf("Enter Math scores :");
    scanf("%d" ,&Math);

    printf("Enter Physics scores :");
    scanf("%d" ,&Physics);

    printf("Enter Chamistry scores :");
    scanf("%d" ,&Chemistry);

    avg = average(Math, Physics, Chemistry);

    printf("Math = %d\n" ,Math);
    printf("Physice = %d\n" ,Physics);
    printf("Chamistry = %d\n" ,Chemistry);
    printf("avg = %.2f\n" ,avg);

}