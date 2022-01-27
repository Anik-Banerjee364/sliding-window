#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int k;
cin>>k;
list<int>c;
int arr[n];
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    arr[i]=temp;
}
int j=0;
int i=0;
while(j<n){
    if(arr[j]<0)
    {
        c.push_back(arr[j]);
    }
    if((j-i+1)<k){
        j++;
        continue;
    }
    else if((j-i+1)==k){
        if(c.size()==0)
        cout<<0<<endl;
        else
        cout<<c.front()<<endl;
        j++;
        if(c.front()==arr[i]){
            c.pop_front();
        }
            i++;

        
    }
}
    return 0;
}