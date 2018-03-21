#include <stdio.h>
/*
1.Obtain input as string
2.Initialize a for loop
3. With while loop inside it, check the repeating occurence and increment the count
4. Print the character and its respective count
*/
int main(void) {
	char a[100];
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
	    int c=1;
	    while(a[i]==a[i+1]){
	        c++;
	        i++;
	    }
	    printf("%c%d",a[i],c);
	}
	return 0;
}

