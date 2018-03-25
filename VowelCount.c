#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^\n]s",s);
    char vowel[5]={'a','e','i','o','u'};
    int a[5]={0};
    for(int i=0;s[i]!='\0';i++){
        switch(s[i]){
            case 'a': a[0]++;
                      break;
            case 'A': a[0]++;
                      break;
            case 'e': a[1]++;
                      break;
            case 'E': a[1]++;
                      break;
            case 'i': a[2]++;
                      break;
            case 'I': a[2]++;
                      break;
            case 'o': a[3]++;
                      break;
            case 'O':a[3]++;
                      break;
            case 'u': a[4]++;
                      break;
            case 'U': a[4]++;
                      break;
        }
    }
    for(int i=0;i<5;i++){
        if(a[i]!=0){
            printf("%c --> %d\n",vowel[i],a[i]);
        }
    }
}
