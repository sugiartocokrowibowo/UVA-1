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
    string str;
    int caseno=0;
    while(cin>>str){
        if(str=="#")
            break;
        printf("Case %d: ",++caseno);
        if(str=="HELLO")
            cout<<"ENGLISH"<<endl;
        else if(str=="HOLA")
            cout<<"SPANISH"<<endl;
        else if(str=="HALLO")
            cout<<"GERMAN"<<endl;
        else if(str=="BONJOUR")
            cout<<"FRENCH"<<endl;
        else if(str=="CIAO")
            cout<<"ITALIAN"<<endl;
        else if(str=="ZDRAVSTVUJTE")
            cout<<"RUSSIAN"<<endl;
        else
            cout<<"UNKNOWN"<<endl;
    }
}
