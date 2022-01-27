 #include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int sum,int mx,int i,int j,int wsize,int n){
    while(j<n){
        sum+=arr[j];
    if((j-i+1)<wsize){
        j++;
    }
    else if((j-i+1)==wsize){
        mx=max(mx,sum);
        sum-=arr[i];
        i++;
        j++;
    }
    else
    return 0;
    }
    return mx;
    }


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    arr[i]=temp;
}
int maximum=maxsum(arr,0,0,0,0,2,n);
cout<<maximum<<endl;
    return 0;
}