#include <bits/stdc++.h> 
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)

bool isvovel(char c){
	
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void solve()
{
	int n,k,count = 0;
	cin>>n>>k;
	
	if(n < k || n == 0){
		cout<<"NO"<<endl;return;
	}
	if( k == 0){
		cout<<"YES"<<endl;
		return;
	}
	set<int> s;
	vector<int> x;
	int a = n;
	while(a--){
		int b;
		cin>>b;
		if(s.find(b) == s.end()){
			s.insert(b);
			x.push_back(n - a);
			count++;
		}
	}
	
	
	if(k > count){
		cout<<"NO"<<endl;return;
	}
	cout<<"YES"<<endl;
	for(auto l:x){
		cout<<l<<" ";
	}
	cout<<endl;
   
}
int main()
{
	solve();
   // int t;
    // cin>>t;
    // for(i,0,t){
      // cout<<solve()<<endl;
    // }
	//cout<<solve()<<endl;
	return 0;
}
