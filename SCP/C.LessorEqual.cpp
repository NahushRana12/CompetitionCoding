#include <bits/stdc++.h> 
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
vector<string> SplitbyRegex(string s,string Regex){
    vector<string> tokens;
    regex re(Regex);
    sregex_token_iterator begin(s.begin(), s.end(), re),end;
    copy(begin, end,back_inserter(tokens));
    return tokens;
}
bool Isvovel(char c){
	
	return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int Solve()
{
	int n,k;
	cin>>n>>k;
	if(n < k)return 0;
	vector<int> result(n);
	for(int i = 0;i < n ;i++){
		int x;
		cin>>x;
		result[i] = x;
	}
	sort(result.begin(),result.end());
	
	if(k == 0){
		if(result[0] <= 1)return -1;
		return result[0] - 1 ;
	}
	if(result[k] == result[k-1])
	return -1;
	else
	return result[k-1];
   
}
int main()
{
    //Solve();
   //int T;
   // cin>>T;
   // FOR(i,0,T){
     // cout<<"Case #"<<i+1<<": " <<Solve()<<endl;
   // }
   cout<<Solve()<<endl;
    
}
