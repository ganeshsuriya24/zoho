#include <stdio.h>
#include <string.h>

void uniqueLongSubStr(char s[]){
    int alphaUniqueHash[26]={0},len=strlen(s),maxSubLen=0,uniArrLen=0;
    int index[100],subLen[100]; //Declared if multiple long substrings have the same length
    for(int first=0;first<len;first++){
        int temp=first,ic=0;
        for(;alphaUniqueHash[s[temp]-'a']==0&&temp<len;ic++,temp++){
            alphaUniqueHash[s[temp]-'a']=1;
        }
        if(ic>=maxSubLen){
           if(ic>maxSubLen){
               maxSubLen=ic;
               uniArrLen=0;
           }
           subLen[uniArrLen]=ic+first;
           index[uniArrLen++]=first;
        }
        for(;temp>=0;temp--){
            alphaUniqueHash[s[temp]-'a']=0;
        }
    }
    for(int i=0;i<uniArrLen;i++){
        for(int j=index[i];j<subLen[i];j++){
            printf("%c",s[j]);
        }
        printf("\n");
    }
}
int main(void) {
	char string[100];
	scanf("%s",string);
	uniqueLongSubStr(string);
	return 0;
}

