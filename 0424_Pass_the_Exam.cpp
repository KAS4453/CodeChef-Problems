#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, a, b, c;
    cin>>t;
    
    while(t--){
        cin>>a>>b>>c;
        if(a>=10 && b>=10 && c>=10 && a+b+c >=100){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
}
