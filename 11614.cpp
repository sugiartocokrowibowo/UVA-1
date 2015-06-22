#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    cin.ignore();
    while(testcase--){
        double n;
        cin>>n;
        double d = sqrt(n*8 + 1);
        d-=1;
        d/=2;
        unsigned long long r = d;
        cout<<r<<endl;
    }
}
