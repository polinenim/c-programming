#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
   char str[256];
   int alpha=0, digit=0, specialChar = 0,i;
   printf("Please Enter a String :");
   scanf("%[^\n]", str);
   int len = strlen(str);
   for(i=0; i<len; i++)
   {
    if (isdigit(str[i]))
      digit++;
    else if (isalpha(str[i]))
      alpha++;
    else
      specialChar++;
    }
   printf("alphabets = %d, digits = %d, specialChars = %d ", alpha, digit, specialChar);
   return 0;
}
