#include<stdio.h>
int main()
{  
    char s[11];
    scanf("%s",s); 
    int i = 0;   
    int vowel= 0;  
    while(i<11)  
    {  
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='u'|| s[i]=='o')  
        {  
            vowel++;  
        }  
        i++;  
    }  
    printf("The number of vowels present in a word is:%d",vowel);  
}  
