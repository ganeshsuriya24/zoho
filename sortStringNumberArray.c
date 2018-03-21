#include <stdio.h>
/* 
1.Obtain string array
2.Convert them to integer and store it in integer array.
3.Bubble sort is used to sort the array.
4.Print the result using for loop.
*/
int main(void) {
   char s[100][100];
   int a[100],arrayLength=0;
   while(scanf("%s",s[arrayLength++])>0);
   
   for(int i=0;i<arrayLength;i++){
       int j=0,sign =1;
       if(s[i][0]=='-'){
           sign=-1;
           j=1;
       }
       int rev=0;
       while(s[i][j]!='\0'){
           rev=rev*10+(s[i][j]-'0');
           j++;
       }
       a[i]=rev*sign;
   }
  for(int i=0;i<arrayLength-1;i++){
      for(int j=i+1;j<arrayLength-1;j++){
          if(a[i]>a[j]){
              int t=a[i];
              a[i]=a[j];
              a[j]=t;
          }
      }
  }
  for(int i=0;i<arrayLength-1;i++){
      printf("%d ",a[i]);
  }
	return 0;
}

