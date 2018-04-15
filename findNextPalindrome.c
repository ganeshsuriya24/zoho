#include<stdio.h>
#include<math.h>
int a[100]={0};
void arrStore(int n,int l){
    while(n>0){
        a[l--]=n%10;
        n=n/10;
    }
}
int findNextPalindrome(int l){
    int np=0,i,flag=1,check,m,k;
    k=l>>1;
    check=0;
    for(i=0;i<l;i++){
        if(a[i]!=9){
            flag=0;
            break;
        }
    }
    if(flag==1){
       a[0]=1;
       for(i=1;i<l;i++){
          a[i]=0;
       }
       a[l]=1;
       a[l+1]=0;
       check=1;
    }
    flag=0;
    if(check!=1){
        for(i=0;i<k;i++){
           if(a[i]<a[l-1-i]){
              flag=-1;
           } 
           else if(a[i]>a[l-1-i]){
              flag=1;
           }
           a[l-1-i]=a[i];
        }
        if(!(l&1)){
          m=k-1;
        }
        else{
          m=k;  
        } 
        if(flag==0||flag==-1){
               i=0;
               while(a[m-i]==9){
                   a[m-i]=0;
                   a[l-1-m+i]=0;
                   i++;
               }
               a[m-i]++;
               a[l-1-m+i]=a[m-i];
        }
    }
    if(a[l]!=0){
        l+=1;
    }
    for(int i=0;i<l;i++){
        np=np*10+a[i];
    }
    return np;
}
int main(){
    int num,l;
    scanf("%d",&num);
    l=floor(log10(abs(num)))+1;
    arrStore(num,l-1);
    int nextPalindrome = findNextPalindrome(l);
    printf("%d",nextPalindrome);
    return 0;
}
