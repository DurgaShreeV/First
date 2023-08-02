/*Arrange the strings in lexicographical order using C*/
#include <stdio.h>
#include <string.h>

int main() {
   char s[50][50], temp[50];
   int n=0;
   while(scanf("%s ",s[n])==1)
   {
       n++;
   }
   // storing strings in the lexicographical order
   for(int i=0;i<n;i++) {
      for(int j =i+1;j<n;j++) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(s[i], s[j]) > 0) {
            strcpy(temp, s[i]);
            strcpy(s[i], s[j]);
            strcpy(s[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for(int i=0; i<n;i++) {
      printf("%s ",s[i]);
   }
   return 0;
}
