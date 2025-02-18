#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin>>t;
	
	while(t--){
	    cin>>x;
	    if(x<4){
	        cout<<"MILD"<<endl;
	    }
	    else if(x>=7){
	        cout<<"HOT"<<endl;
	    }
	    else{
	        cout<<"MEDIUM"<<endl;
	    }
	}
}
