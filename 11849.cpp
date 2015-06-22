#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define msi map<string, int>
#define mem(arrayName,i) memset(arrayName,int (i),sizeof arrayName)
#define pb(number) push_back(number)
#define _VISIT true
#define _UNVISIT false
#define ull unsigned long long

#define INF 2000000000
#define _INF 127
#define _HALF_INF 63

using namespace std;
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)and n!=0 and m!=0){
        getchar();
        int sameCd=0;
        set<ull> st;

        for(int i=1;i<=n;i++){
            ull num;
            cin>>num;
            st.insert(num);
        }
        cin.ignore();
        for(int i=1;i<=m;i++){
            ull num;
            cin>>num;
            if(st.find(num)==st.end()){
                continue;
            }
                ++sameCd;
        }
        cout<<sameCd<<endl;
    }
}
