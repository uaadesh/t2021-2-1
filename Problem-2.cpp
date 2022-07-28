#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int j=1;
	while(--n){
	    cout<<j<<", ";
	    j += 2;
	}
	cout<<j;
	return 0;
}