#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("R.txt","r",stdin);
    int testcase;
    cin>>testcase;
    cin.ignore();
    int line,caseno=0;
    while(testcase--){
        cin>>line;
        cin.ignore();
        cout<<"Case "<<++caseno<<":"<<endl;
        while(line--){
            string str,output;
            getline(cin,str);
            bool flag = true;
            int len = str.length();
            for(int i = 0 ;i<len;i++){
                if( str[i]==' ' and flag ) {
                    output+= str[i];
                    flag = false;
                }
                else if(str[i]!=' '){
                    output+= str[i];
                    flag = true;
                }
            }
            cout<<output<<endl;

        }
        if(testcase!=0){
                cout<<endl;
            }
    }
}
