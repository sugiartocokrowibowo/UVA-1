#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    cin.ignore();
    for(int caseno=1;caseno<=cases;caseno++){
        string answer,original;
        getline(cin,answer);
        getline(cin,original);
         bool flag = true;
        if(answer==original){
            cout<<"Case "<<caseno<<": Yes"<<endl;
        }
        else{
            int strLen = original.size();
            int j = 0,i=0;
            while(i<strLen){
                if(answer[j] == original[i]){
                    i++;
                    j++;
                    continue;
                }
                if(answer[j]==' '){
                    while(answer[j]==' '){
                        j++;
                    }
                }
                if(answer[j]!=original[i])
                {
                    flag= false;
                    break;
                }
            }
            if(!flag)
                cout<<"Case "<<caseno<<": Wrong Answer"<<endl;
            else
                cout<<"Case "<<caseno<<": Output Format Error"<<endl;
        }
    }
}
