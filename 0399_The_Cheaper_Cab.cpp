#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x, y;
    cin>>t;
    
    while(t--){
        cin>>x>>y;
        if(x<y){
            cout<<"FIRST"<<endl;
        }
        else if(x==y){
            cout<<"ANY"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
    }
}
