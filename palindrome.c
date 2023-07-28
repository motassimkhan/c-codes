// #include <stdio.h>

// // void rev()
// // {
// //     int i,num;
// //     while (num > 0)
// //     {
// //         int r = num % 10;
// //         int rev = rev * 10 + r;
// //         num /= 10;
// //     }
// // }
// int main()
// {
//     int num, rev = 0, r, o ;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     o = num;
//     while (num != 0)
//     {
//         r = num % 10;
//         rev = rev * 10 + r;
//         num = num / 10;
//     }
//     if (num == o)
//         printf("number is palindrome\n");
//     else
//         printf("not palindrome\n");
// }
#include <stdio.h>
int main() {
  long int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    retun 0;
}

