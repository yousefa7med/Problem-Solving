
#include <bits/stdc++.h>
using namespace std;
 
int main() {
int x=0;
cin>>x;
for(int i=2;i<x;i++){
if(x%i==0){
    cout<<"NO"<<endl;
return 0;
}
}cout<<"YES"<<endl;
 
}