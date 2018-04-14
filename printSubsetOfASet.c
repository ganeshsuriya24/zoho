#include <stdio.h>
int set[100],l;
void subset(int start,int index,int numSub){
    int i,j;
    if (index-start+1==numSub){
        if (numSub==1){
            for (i=0;i<l;i++){
                printf("{%d}\n",set[i]);
            }
        }
        else{
            for(j=index;j<l;j++){
                printf("{");
                for(i=start;i<index;i++){
                    printf("%d,",set[i]);
                }
                printf("%d}\n",set[j]);
            }
            if(start!=l-numSub){
                subset(start+1,start+1,numSub);
            }
        }
    }
    else{
        subset(start,index+1,numSub);
    }
}
int main(){
    int i,len;
    while(scanf("%d",&set[len++])>0);
    l=len-1;
    for (i = 1;i<len-1;i++){
        subset(0, 0, i);
    }
    printf("{");
    for(i=0;i<len-2;i++){
        printf("%d,",set[i]);
    }
    printf("%d}",set[len-2]);
    return 0;
}
 
