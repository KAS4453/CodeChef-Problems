#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a, b, c, x;
    cin>>a>>b>>c>>x;
    
    if(a*b*c > pow(x,3)){
        cout<<"Cuboid"<<endl;
    }
    else if(a*b*c < pow(x,3)){
        cout<<"Cube"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
}
