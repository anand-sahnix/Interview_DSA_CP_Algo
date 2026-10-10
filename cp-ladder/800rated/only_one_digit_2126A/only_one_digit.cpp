#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int smalltest = 9;
	    while(x){
	        int last = x % 10;
	        if(last < smalltest){
	            smalltest = last;
	            
	        }
	        x /= 10;
	    }
	    cout<<smalltest<<endl;
	}
}
