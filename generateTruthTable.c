#include<stdio.h>
#include<string.h>
char var[100];
void varcount(char *s,int *t){
    int cnt=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z'){
            int j=cnt,f=0;
            while(j>=0){
                if(var[j]==s[i]){
                    f=1;
                    break;
                }
                j--;
            }
            if(!f){
                var[cnt++]=s[i];
            }
        }
    }
    var[cnt]='\0';
    *t=cnt;
}
int main() {
   char s[100];
   int varcnt=0;
   scanf("%s",s);
  varcount(s,&varcnt);
 // printf("%d",varcnt);
  int ttrows=1<<varcnt;
  int tt[varcnt][ttrows];
  for(int i=varcnt-1,toggle=0,t=1;i>=0;i--,t=t*2){
      for(int j=0,k=0;j<ttrows;j++){
          tt[j][i]=toggle;
          k++;
          if(k>=t){
              toggle=!toggle;
              k=0;
          }
      }
  } 
  for(int i=0;i<varcnt;i++){
      printf("%c\t",var[i]);
  }
  printf("| O/P\n");
  for(int i=0;i<varcnt+1;i++){
      printf("----");
  } printf("\n");
  for(int i=0;i<ttrows;i++){
      for(int j=0;j<varcnt;j++){
          printf("%d\t",tt[i][j]);
      } printf("| %d\n",tt[i][0]^tt[i][1]);
  }
}
