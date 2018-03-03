#include <iostream>

using namespace std;

int main() {
	int count=0,n;
	cin>>n;
	while(n){
	    if(n&1){
	        count++;
	    }
	    n=n/2;
	}
	cout<<count;
}
