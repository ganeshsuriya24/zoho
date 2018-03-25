#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void stringSwap(char *s1,char *s2){ //Function to swap two strings.
     char t[10];
    strcpy(t,s1);
    strcpy(s1,s2);
    strcpy(s2,t);
}
int main(void) {
   char s[100][100];
   int arrayLength=0;
   while(scanf("%s",s[arrayLength++])>0); //string array input is obtained
   for(int i=0;i<arrayLength;i++){
	   for(int j=i+1;j<arrayLength;j++){
	       if(s[i][0]=='-'&&s[j][0]=='-'){
	           if(strlen(s[i])<strlen(s[j])){
	               stringSwap(s[i],s[j]);
	           }
	           else if(strlen(s[i])==strlen(s[j])&&(strcmp(s[i],s[j])<strcmp(s[j],s[i]))){
	               stringSwap(s[i],s[j]);
	           }
	       }
	       else if(s[i][0]!='-'&&s[j][0]=='-'){
	            stringSwap(s[i],s[j]);
	       }
		   else if((strlen(s[i])>strlen(s[j]))&&s[i][0]!='-'&&s[j][0]!='-'){
		       stringSwap(s[i],s[j]);
		   }
		   else if(strlen(s[i])==strlen(s[j])){
		       if(strcmp(s[i],s[j])>strcmp(s[j],s[i])){
		          stringSwap(s[i],s[j]);
		       }
		   }
	   }
   }
   for(int i=0;i<arrayLength;i++){
       printf("%s ",s[i]);
   }
			   
  
	return 0;
}

