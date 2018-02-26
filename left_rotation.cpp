#include <iostream>

using namespace std;

int main() {
   string s;
   cin>>s;
   int n,l=s.length();
   cin>>n;
   for(int i=0,j=0;j<l;j++,i++){
        cout<<s[(i+n)%l];
   }
}
