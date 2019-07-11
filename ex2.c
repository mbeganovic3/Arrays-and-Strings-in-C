/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX], c, letter, justLetters[MAX];
  int i;
  int lowercase, uppercase, digits, other;
  int length, tru, fals, palindrome;

  fals = 0;
  tru = 1;

  puts("Type some text (then ENTER):");

  /* Save typed characters in text[]: */

  fgets(text, MAX, stdin);
  length = strlen(text) - 1;

 for (i = lowercase = uppercase = digits = other = 0; i < MAX; i++)
      {
        c = text[i];
        if (c >= 'a' && c <= 'z')
          lowercase++;
        else if (c >= 'A' && c <= 'Z')
          uppercase++;
        else if (c >= '0' && c <= '9')
          digits++;
        else
        {
          if (c == '\n')
            break;
          other++;
        }
      }

  for(int b = 0; b <= length; b++) {
    if(b == length) reverse[length] = '\0';
    reverse[length - b - 1] = text[b];
  }
 

  printf("Your input in reverse is:\n%s\n",reverse); 

  palindrome = tru;
 
  for(int j = 0; j < length; j++) {
     if(text[j] != reverse[j]) palindrome = fals;
  }

  if(palindrome) puts("Found a palindrome!");

}

