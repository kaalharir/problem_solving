#include <iostream>
using namespace std;
string s;
int n,i,a;
int main(){
   cin>>n;
   for(i=0;i<n;i++){
    cin>>s;
    a=s.size();
    if(a>10)
        cout<<s[0]<<a-2<<s[a-1]<<endl;

   else{
    cout<<s<<endl;
   }
   }

    return 0;
}
