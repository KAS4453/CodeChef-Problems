#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, x, y;
    cin>>t;
    
    while(t--){
        cin>>x>>y;
        if(100*x >= 10*y){
            cout<<"Cloth"<<endl;
        }
        else{
            cout<<"Disposable"<<endl;
        }
    }
}
