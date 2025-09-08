#include<stdio.h>
int main()
{
    char alpha;
   char vowels[] = {'A','E','I','O','U','a','e','i','o','u'};
   int flag = 0;
   printf("enter the character you want to check");
   scanf("%c",&alpha);
   for (int i=0; i < 10; i++) {
    if (vowels[i] == alpha) {
        flag = 1;
        break;
    }
   }
   if (flag) {
    printf("it is a vowel");
   }
   else {
    printf("it is a consonant");
   }
   return 0;
}