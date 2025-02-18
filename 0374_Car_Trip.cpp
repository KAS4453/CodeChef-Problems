#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x;
    cin>>t;
    
    while(t--){
        cin>>x;
        if(x<=300){
            cout<<3000<<endl;
        }
        else{
            cout<<10*x<<endl;
        }
    }
}
