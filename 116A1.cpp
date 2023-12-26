#include <iostream>

using namespace std;

int main(){
    int m=0,n=0,a,b,l,i;
    cin>>l;
    for(i=0;i<l;i++){
        cin>>a>>b;
        n=n-a+b;
        if(n>m)
            m=n;
    }
    cout<<m;


    return 0;
}
