#include <stdio.h>
#include <string.h>

int my_strcmp(char str1[], char str2[]);
int my_strncmp(char str1[], char str2[], int size_t);
int * my_strchr(char str1[], char ch);

int main()
{
  int result;
  char str_empty[] = "";
  char str_single[] = "a";
  char str_one[] = "b";
  char str_two[] = "bc";
  char str_duo[] = "sd";
  char str_word[] = "stringg";
  char str_word2[] = "words";
  char str_word3[] = "acdfer";

  // use cases to test str_cmp:
  // 2 empty, 1 empty, other empty, one character * 2, one character one, one character other, multiple characters
  // same not same
  printf("Expeected:  0 result: %d\n\n", my_strcmp(str_empty, "")); // case of empty strings
  printf("Expeected:  0 result: %d\n\n", my_strcmp(str_single, str_single)); // case of matching single char
  printf("Expeected:  1 result: %d\n\n", my_strcmp(str_one, str_single)); // case of unmatching single char
  printf("Expeected:  1 result: %d\n\n", my_strcmp(str_word, str_single)); // case of un-even strings
  printf("Expeected: -1 result: %d\n\n", my_strcmp(str_word, str_word2)); // case of un-even strings
  printf("Expeected:  0 result: %d\n\n", my_strcmp(str_word, str_word)); // case of matching strings

  printf("Expeected:  0 result: %d\n\n", my_strncmp(str_word, str_word, 3)); // case of equl
  printf("Expeected:  -1 result: %d\n\n", my_strncmp(str_word, str_word2, 3)); // case of unequl
  printf("Expeected:  -1 result: %d\n\n", my_strncmp(str_word, str_word2, 100)); // case of big range
  printf("Expeected:  1 result: %d\n\n", my_strncmp(str_word2, str_word, 6)); // case of range smaller for one word

  printf("Expeected:  1 result: %d\n\n", my_strchr(str_word3, 'c'));
  printf(strchr(str_word3, 'c'));

  // char var[50];
  // printf("Enter a string\n");
  // scanf("%s", var);
  // printf("The string you entered is : %s\n", var);
  // return 0;
}

// If first str is bigger in ASCII / later in dictionary, result is -1
// If second str is bigger in ASCII / later in dictionary, result is 1
// If both strings are equal
int my_strcmp(char str1[], char str2[])
{
  // printf("length is: %d\n", strlen(str2));
  // printf("string is: %s\n", str1);
  // printf("string is: %s\n", str2);
  // printf("The string you entered is : %s\n", str1); // Printing a string
  unsigned int i;


  for (i = 0; i < strlen(str2) && i < strlen(str1); i++)
    if (str1[i] != str2[i])
      return str1[i]-str2[i];
      // return str1[i] > str2[i] ? 1 : -1;

  if (str1[i + 1] != '\0' && str2[i + 1] != '\0')
    return (0);
  else
    return str1[i + 1] != '\0' ? 1 : -1;
}

int my_strncmp(char str1[], char str2[], int size_t)
{
  unsigned int i;

  for (i = 0; i < strlen(str2) && i < strlen(str1) && i < size_t; i++)
    if (str1[i] != str2[i])
      return str1[i] > str2[i] ? 1 : -1;
  if (i == size_t)
    return 0;
  else
    return str1[i + 1] != '\0' ? 1 : -1;
}

int * my_strchr(char str1[], char ch) {
  int i;
  for (i=0; i<strlen(str1);i++)
    //printf("str1[i]: %c\n", str1[i]);
    if (str1[i] == ch)
      return &str1[i];
  return NULL;
  
}

// }
//   else

//   { // not same length strings
//     for (i = 0; i < strlen(str2) && i < strlen(str1); i++)
//     {
//       if (str1[i] > str2[i])
//       {
//         return 1;
//       }
//       else if (str1[i] < str2[i])
//       {
//         return -1;
//       }
//     }
//     if (strlen(str1) > strlen(str2))
//     {
//       return 1;
//     }
//     else if (strlen(str1) < strlen(str2))
//     {
//       return -1;
//     }
//   }

//   for (i = 0; i < (unsigned)strlen(str1) && i < (unsigned)strlen(str2) && str1[i] == str2[i]; i++)
//   {
//     return 0;
//     if (str1[i] == str2[i])
//     {
//       result = 0;
//       if (str1[i + 1] != '\0' && str2[i + 1] != '\0')
//       {
//         continue;
//       }
//       else if (str1[i + 1] != '\0')
//       {
//         result = 1;
//       }
//       else
//         result = -1;
//       else if (str1[i] - str2[i] > 0)
//       {
//         result = -1 break;
//       }
//       else result = 1;
//       break;
//     }
//     return (result);
//   }