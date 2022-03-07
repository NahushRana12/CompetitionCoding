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
vector<long long> solve2(vector<long long> &result,int current,int compared,vector<long long> temp){
	if(compared == result.size() || current == result.size() -1)
	    return temp;
	int y = result[compared];
	vector<long long> temp1,temp2;
	if(y == result[current] + 1){
		temp.push_back(compared);
		temp1 = solve2(result,compared,compared + 1,temp);
	}
	else{
		temp1 = solve2(result,current,compared + 1,temp);
		vector<long long> temp3;
		temp3.push_back(compared);
		temp2 = solve2(result,compared,compared+1,temp3);
	}
	if(temp1.size() > temp2.size())return temp1;
	return temp1;
}
void Solve()
{
	int n;
	cin>>n;
	vector<long long> result(n);
	for(int i = 0;i < n ;i++){
		int x;
		cin>>x;
		result[i] = x;
	}
	vector<long long> temp;
	temp.push_back(0);
	temp= solve2(result,0,1,temp);
	cout<<temp.size()<<endl;;
	for(auto x : temp){
	    cout<<x + 1<<" ";
	}
	cout<<endl;
	
}
int main()
{
    //Solve();
   //int T;
   // cin>>T;
   // FOR(i,0,T){
     // cout<<"Case #"<<i+1<<": " <<Solve()<<endl;
   // }
   Solve();
    return 0;
}
