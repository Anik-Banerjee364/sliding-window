#include<bits/stdc++.h>
using namespace std;
vector<int> check(int arr[],int k,int n,vector<int>&ans){
        int i,j;
        i=j=0;
        list<int>l;
        while(j<n){
            while(l.size()>0 && l.back()<arr[j]){
                l.pop_back();
            }
            l.push_back(arr[j]);
        if((j-i+1)<k){
            j++;
        }
        else if((j-i+1)==k){
            ans.push_back(l.front());
            if(arr[i]==l.front()){
                l.pop_front();
            }i++;
            j++;
        }
        }
        return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    vector<int>ans;
    ans=check(arr,k,n,ans);
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}