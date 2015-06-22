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
    open("ii.txt");
    int n;
    while(cin>>n){
        cin.ignore();
        stack<int>st;
        queue<int>q;
        priority_queue<int> pq;
        bool isStk = true,isQ = true,isPQ = true;
        rep(i,0,n){
            int a,b;
            cin>>a>>b;
            if(a==1){
                st.push(b);
                q.push(b);
                pq.push(b);
            }
            else {
                //cout<<b;
                if(!st.empty() and b==st.top() and isStk){
                    st.pop();
                }
                else{
                    isStk = false;
                }
                if(!q.empty()and b==q.front() and isQ  ){
                    q.pop();
                }
                else{
                    isQ = false;
                }
                if(!pq.empty() and b==pq.top() and isPQ){
                    pq.pop();
                }
                else{
                    isPQ = false;
                }
            }
        }
        if(isStk and !isQ and !isPQ)
            cout<<"stack"<<endl;
        else if(isQ and !isStk and !isPQ)
            cout<<"queue"<<endl;
        else if(isPQ and !isStk and !isQ)
            cout<<"priority queue"<<endl;
        else if((isPQ and isStk) or (isPQ and isQ) or (isQ and isStk)or (isPQ and isQ and isStk))
            cout<<"not sure"<<endl;
        else
            cout<<"impossible"<<endl;
    }
}
