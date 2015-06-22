#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define msi map<string, int>
#define mem(arrayName,i) memset(arrayName,int (i),sizeof arrayName)
#define pb(number) push_back(number)
#define _VISIT true
#define _UNVISIT false

#define INF 2000000000
#define _INF 127
#define _HALF_INF 63

using namespace std;

int main(){
    string song[]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    vector<string> vec;
    int n;
    freopen("inp.txt","r",stdin);
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }

    int j=0,i=0;
    if(n<=16)
        while(j!=16){
            cout<<vec[i++]<<": "<<song[j++]<<endl;
            if(i==n)
                i=0;
        }
    else{
        while(i!=n){
            cout<<vec[i++]<<": "<<song[j++]<<endl;
            if(i==n && j!=16){ /// If no more peoples are exist and the song not end yet then break the loop
                i = 0;
                break;
            }
            if(j==16 && i!=n){ ///If song is end but some people are exist yet then continue
                j=0;
            }
        }
        while(j!=16){
            cout<<vec[i++]<<": "<<song[j++]<<endl;
        }
    }
}
