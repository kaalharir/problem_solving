#include <iostream>
using namespace std;
int main(){
    int n,x=0;
    string s;

    cin>>n;
    while(n--){
        cin>>s;
        if(s[1]=='+')
            x++;
        else
            x--;
//        cin>>x;
    }
    cout<<x;
//    cin>>x;
    return 0;

}
