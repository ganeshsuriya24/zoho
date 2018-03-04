#include <stdio.h>
/*
1.Obtain the array inputs
2.A two dimensional array is created.
3.In the 2D array, the elements are stored in the following format
  newArray[position][0] = uniqueElement
  newArray[position][1] = uniqueElementCount
4.As the Unique elements are stored in the new Array, the occurences are equated to'*'
5.Finally the 2D array is printed
*/
int main(void) {
	int array[100],arrayLength=0;
	while(scanf("%d",&array[arrayLength++])>0);
	int newArray[100][2],newArrayLength=0;
	for(int i=0;i<arrayLength;i++){
	    if(array[i]!='*'){
	        newArray[newArrayLength][0]=array[i];
	        int count=1;
	        for(int j=i+1;j<arrayLength;j++){
	            if(array[i]==array[j]){
	                count++;
	                array[j]='*';
	            }
	        }
	        newArray[newArrayLength++][1]=count;
	    }
	} 
     for(int i=0;i<newArrayLength-1;i++){
         printf("%d --> %d\n",newArray[i][0],newArray[i][1]);
     }
	return 0;
}

