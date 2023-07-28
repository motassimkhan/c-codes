#include <stdio.h>
int main()
{
    int bin = 0,dec,rem,base = 1;
    printf("rnter decimal number");
    scanf("%d",&dec);
    while (dec>0){
        rem = dec % 2;
        bin += rem*base;
        base*=10;
        dec /=2;
    }
    printf("%d bin",bin);
    return 0;
} 
// #include <stdio.h>

// int main() {
//     int decimal, binary = 0, base = 1, remainder;
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     while (decimal > 0) {
//         remainder = decimal % 2;
//         binary += remainder * base;
//         base *= 10;
//         decimal /= 2;
//     }

//     printf("Binary equivalent: %d\n", binary);
//     return 0;
// }
