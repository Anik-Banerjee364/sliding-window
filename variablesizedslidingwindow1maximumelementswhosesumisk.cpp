#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[],int n,int maximum,int k,int sum){
    int i,j;
    i=j=0;
    while(j<n){
        sum+=arr[j];
        if(sum<k){
            j++;
        }
    else if(sum==k){
        maximum=max(maximum,j-i+1);
        j++;
    }
    else if(sum>k){
        while(sum>k){
            sum-=arr[i];
            i++;
        }
        j++;
    }
    }
    return maximum;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    int m;
    int mx=0;
    m=maximum(arr,n,mx,k,0);
    cout<<m<<endl;
    return 0;
}