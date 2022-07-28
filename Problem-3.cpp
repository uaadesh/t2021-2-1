#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%2==0) n--;
	int j=1;
	while(--n){
	    cout<<j<<", ";
	    j += 2;
	}
	cout<<j;
	return 0;
}