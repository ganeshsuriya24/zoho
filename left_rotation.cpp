#include <iostream>

using namespace std;

int main() {
   string s;
   char a[100];
   cin>>s;
   int n,l=s.length();
   cin>>n;
   for(int i=0;i<s.length();i++){
        a[i]=s[(i+n)%l];
   }
   for(int i=0;i<l;i++){
       cout<<a[i];
   }
}
