#include <bits/stdc++.h>
using namespace std;

bool check(string &a,string &b){
	//checking anagrams
	map<char,int> m;
	for(int i=0;i<a.length();i++)
		m[a[i]]++;
	for(int i=0;i<b.length();i++)
		m[b[i]]--;
	for(auto it=m.begin();it!=m.end();it++)
		if(it->second!=0)
			return false;
	return true;
}

int countNoOfAnagram(string &a,string &b){
	int count=0;
	//sliding window
    int i,j;
    i=j=0;
    while(j<a.size()){
        if((j-i+1)<b.size()){
            j++;
        }
        else if((j-i+1)==b.size()){
            if(check(a,b)){
                count++;
            }i++;
            j++;
        }
    }return count;
	
}

int main()
{
	string S,C;
	
	cout<<"Enter string S and word C\n";
	cin>>S>>C;
	
	cout<<countNoOfAnagram(S,C)<<endl;
	
	return 0;
}
