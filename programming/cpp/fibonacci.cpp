#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,n,k=1,t1=0,t2=1,nextt=t1+t2;
cin>>n;
int arr[n+1];
arr[0]=1;
arr[1]=1;
for(i=2;i<=n;i++){
arr[i]=nextt;
t1=t2;
t2=nextt;
nextt=t1+t2;
}
cout<<arr[n]<<endl;

while(k<=n){
cout<<arr[k]<<" ";
k+=1;
}
return 0;
}