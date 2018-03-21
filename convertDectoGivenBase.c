#include <stdio.h>
/* 
1.Obtain number and base value
2.Run while loop till number is greater than 0
3.Inside the loop, store the remainder(number%base) in the array.
4.Print the array in reverse using for loop.
*/
int main(void) {
    int ans[100],k=0,number,base;
    scanf("%d %d",&number,&base);
    while(number>0){
        ans[k++]=number%base;
        number=number/base;
    }
    for(k=k-1;k>=0;k--){
        printf("%d",ans[k]);
    }
	return 0;
}

