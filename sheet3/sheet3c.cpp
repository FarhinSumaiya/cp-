
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
        cin>>a[i];
        }
for(int i=0;i<n;i++){
    if(a[i]<0){
        cout<<" "<<"2";
    }
    else if(a[i]>0){
    cout<<" "<<"1";
    }
    else {
            cout<< " "<<"0";
}
}
cout<<endl;
return 0;
}
