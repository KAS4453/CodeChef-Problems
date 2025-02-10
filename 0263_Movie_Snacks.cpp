#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x, y, z;
    cin>>x>>y>>z;
    
    if(x+y <=z){
        cout<<2*x+3*y<<endl;
    }
    else{
        cout<<2*z+y<<endl;
    }
}
