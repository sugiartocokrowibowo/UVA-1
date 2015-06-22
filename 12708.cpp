/*
Problem Type: Adhoc,Simple Math
The largest gcd of each pair between 1 to n (inclusiv) is n/2 for the
pair (n/2,n).
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
    int testCase;
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        ull n;
        cin>>n;
        ull res = (ull)(n/2);
        //cout<<floor(n/2)<<endl;
        cout<<res<<endl;
    }

}
