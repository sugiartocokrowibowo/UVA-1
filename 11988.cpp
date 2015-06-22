/*
Problem Type: String Processing, STL-list
Note:We used list over vector in this problem. Because vector insert function lost his
iterator validity after every successfull insertion, on the other hand
list iterator function does not do that.
For more on cplusplus.com

*/


#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define msi map<string, int>

#define ull unsigned long long
#define EPS 1e-9
#define Pi acos(-1.0)
#define INF 2000000000
#define _INF 127
#define _HALF_INF 63
#define rep(i,from,to) for(int i = from; i<to ;i++)
#define open(inp) freopen(inp,"r",stdin)
#define Clear(a) memset(a,0,sizeof(a))
#define setfalse(a) memset(a,false,sizeof(a))
#define pb(number) push_back(number)
#define dx4 {-1,+1,0,0}
#define dy4 {0,0,-1,+1}
#define dx8 {-1,0,+1,-1,+1,-1,0,+1}
#define dy8 {+1,+1,+1,0,0,-1,-1,-1}
using namespace std;
int main(){
    string a;
    //open("988.txt");
    while(getline(cin,a)){
        list<char> vc;
        list<char> ::iterator it = vc.begin(),cit;

        int len = a.length();
        for(int i = 0;i<len;i++){
            //cout<<a[i]<<endl;
            if(a[i]=='['){
                it = vc.begin();
            }
            else if(a[i]==']')
                it = vc.end();
            else{
                vc.insert(it,a[i]);
            }
        }
        int l =vc.size();
        //for(int i  = 0;i<l;i++){
        for(list<char>::iterator cit = vc.begin();cit!=vc.end();cit++){
            cout<<*cit;
        }
        cout<<endl;
    }
}
