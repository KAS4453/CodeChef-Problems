#include <bits/stdc++.h>
using namespace std;

int main() {
    int f1, p1, f2, p2;
    cin>>f1>>p1>>f2>>p2;
    
    if(abs(p1-f1) < abs(p2-f2)){
        cout<<"First";
    }
    else if(abs(p1-f1) > abs(p2-f2)){
        cout<<"Second";
    }
    else if(abs(p1-f1) == abs(p2-f2)){
        cout<<"Both";
    }
}
