#include <iostream>

using namespace std;
int a,b,c,s;
int main(){
    cin>>a;
    while(cin>>a>>b){
        c=c+b-a;
        if(c>s){
            s=c;
        }
    cout<<s;
    }


    return 0;
}
