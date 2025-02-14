#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, x, y, z;
    cin>>n;
    
    while(n--){
        cin>>x>>y>>z;
        
        if((y>x && y>z && x>z)||(z>x && z>y && x>y)){
            cout<<x<<endl;
        }
        else if((x>y && x>z && y>z)||(z>x && z>y && y>x)){
            cout<<y<<endl;
        }
        else if((x>y && x>z && z>y)||(y>x && y>z && z>x)){
            cout<<z<<endl;
        }
    }
}
