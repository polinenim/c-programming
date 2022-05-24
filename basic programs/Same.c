#include <stdio.h>
#include <string.h>
int main()
{
   char str1[256], str2[256],c;
   printf("C program to check given two string are same or not \n");
   printf("Enter the first string : ");
   scanf("%[^\n]%c",str1,&c);
   printf("Enter the second string : ");
   scanf("%[^\n]%c",str2,&c);
   if (strcmp(str1, str2) == 0)
      printf("Strings are same\n");
   else
      printf("Strings are not same\n" );
   return 0;
}
