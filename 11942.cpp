#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> vec,svec,rsvec;
    freopen("inp.txt","r",stdin);
    cin>>n;
    cin.ignore();
    cout<<"Lumberjacks:"<<endl;
    while(n--){
        vec.clear();
        svec.clear();
        rsvec.clear();
        for(int i=0;i<10;i++){
            int n;
            cin>>n;
            vec.push_back(n);
            svec.push_back(n);
            rsvec.push_back(n);
        }
        sort(svec.begin(),svec.end());
        sort(rsvec.rbegin(),rsvec.rend());
        if(vec==svec || vec==rsvec)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
}
