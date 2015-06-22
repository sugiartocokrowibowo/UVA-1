#include<bits/stdc++.h>
#define pii pair<int,int>
#define msi map<string,int>

#define vpii vector<pii>
#define vmsi vector<msi>


#define _visit true
#define _unvisit false
#define pb(n) push_back(n)
#define INF 2000000000

using namespace std;
int main(){
    int cases;
    cin>>cases;
    cin.ignore();
    for(int caseno=1;caseno<=cases;caseno++){
        int n,mile=0,juice=0;
        cin>>n;
        cin.ignore();
        for(int i = 0;i<n;i++){
            int ori,a,x=1;
            cin>>ori;
            a=ori+1;
            while(x!=0){
                x=a/30;
                mile+=(x*10);
                a=a%30;
            }
            if(a!=0)
                mile+=10;
            x=1;
            a=ori+1;
            while(x!=0){
                x=a/60;
                juice+=(x*15);
                a=a%60;
            }
            if(a!=0)
                juice+=15;
        }
        if(mile<juice){
            cout<<"Case "<<caseno<<": "<<"Mile"<<" "<<mile<<endl;
        }
        else if(mile == juice){
            cout<<"Case "<<caseno<<": "<<"Mile "<<"Juice "<<mile<<endl;
        }
        else {
            cout<<"Case "<<caseno<<": "<<"Juice"<<" "<<juice<<endl;
        }
    }
}
