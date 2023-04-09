// Playing with inputs and prints:
// #include <stdio.h>
// #include <string.h>

// int main() {
//   int var;
//   printf("Enter a number\n");
//   scanf("%d", &var);
//   printf("The number is: %d\n", var);
//   return 0;
// }
// --------------------------------------------------------------------------------
// /* https://www.w3resource.com/c-programming-exercises/basic-2/index.a
//  1. Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one. Go to the editor
//     Sample Date:
//         (1,2,3) -> 1
//         (10, 20, 4, 5, 11) -> 4 */

// int main(int argc, char const *argv[])
// {
//     int i, n;
//     printf("Please insert how many integers");
//     scanf("%d", &n);
//     for ( i = 0 ; i < n; i++){
        
//     }
//     return 0;

//     int myNum;
// }
// --------------------------------------------------------------------------------
//https://www.w3resource.com/c-programming-exercises/string/index.php
//Write a program in C to input a string and print it.
#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a string\n");
    char str[] = "Scaler";
    //scanf("%d", &var);
    printf("The string is: %d\n", var);
    return 0;
}
// --------------------------------------------------------------------------------
// Initializing a string:
// 1. char str[] = "String";
// 2. char str[12] = "Programming";
// 3. char str[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
// 4. char str[13] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', '\0'};
// 5. scanf("%s", name); - scanning a string from user