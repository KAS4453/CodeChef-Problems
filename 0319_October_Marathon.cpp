#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    
    if(x<3){
        cout<<"GOLD"<<endl;
    }
    else if(x>=6){
        cout<<"BRONZE"<<endl;
    }
    else{
        cout<<"SILVER"<<endl;
    }
}
