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
#define dy4 {-1,+1,0,0}
#define dx8 {-1,0,+1,-1,+1,-1,0,+1}
#define dy8 {+1,+1,+1,0,0,-1,-1,-1}
using namespace std;
int main(){
    //open("i.txt");
    string input,op;
    bool flag = false;
    int mx = -1;
    while(getline(cin,input)){
        int sz = input.size();
        rep(i,0,sz){
            input[i] = tolower(input[i]);
            if(isalnum(input[i]) or input[i]=='-'){
                continue;
            }
            input[i]=' ';
        }
        //cout<<input<<endl;
        stringstream ss(input);
        string word;

        while(ss>>word){
            if(word=="e-n-d"){
                flag = true;
                break;
            }
            int s = word.size();
            if(mx<s){
                mx = s;
                op = word;
            }
        }
        if(flag)
            break;
    }
    cout<<op<<endl;
}
