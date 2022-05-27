#include<stdio.h>
#include<ctype.h>
int main()
{
   char str[100];
   printf("Please enter a String: ");
   scanf("%s", str);
   for(int i=0; str[i]!='\0'; i++)
   {
      str[i] = toupper(str[i]);
   }
   printf("String after converting into uppercase: %s\n", str);
   return 0;
}
