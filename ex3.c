/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX], rev[MAX], c, letter, justLetters[MAX];
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


   for(int w = 0; w <= length; w++) {
        if(w == length) reverse[length] = '\0';
        rev[w] = text[length - w - 1];
      }

 int counter = 0;
 for(int a = 0; a < length; a++) {
    if(isalpha(text[a])) {
        justLetters[counter] = tolower(text[a]);
        counter++;
     }
 }

 justLetters[counter+1] = '\0';

  for(int b = 0; b <= counter; b++) {
    if(b == counter) reverse[counter] = '\0'; 
    reverse[counter - b - 1] = justLetters[b];
  }

  printf("Your input in reverse is:\n%s\n",rev);
  palindrome = tru;
 
  for(int j = 0; j < counter; j++) {
     if(justLetters[j] != reverse[j]) palindrome = fals;
  }

  if(palindrome) printf("Found a palindrome!\n");

}

