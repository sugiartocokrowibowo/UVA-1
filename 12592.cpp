#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define msi map<string, int>

#define visit_ true
#define unvisit_ false
#define ull unsigned long long
#define EPS 1e-9
#define Pi acos(-1.0)
#define INF 2000000000
#define _INF 127
#define _HALF_INF 63

#define open(inp) freopen(inp,"r",stdin)
#define Clear(a) memset(a,0,sizeof(a))
#define setfalse(a) memset(a,false,sizeof(a))
#define pb(number) push_back(number)

using namespace std;
int main(){
    int n;
    //while(cin>>n){
        cin>>n;
        cin.ignore();
        map<string,string> mp;
        map<string,string> ::iterator mp_it;
        for(int i = 1;i<=n; i++){
            string str1,str2;
            getline(cin,str1);
            getline(cin,str2);
            mp[str1] = str2;
        }
        int q;
        cin>>q;
        cin.ignore();
        for(int i=1;i<=q;i++){
            string str1;
            getline(cin,str1);
            cout<<mp[str1]<<endl;
        }
    //}
}
