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
string Solve()
{
	map<string,int> store;
   int n,max = 0;
   string s,smax;
   cin>>n>>s;
   for(int i = 0;i < n -1 ;i++){
	   string temp = s.substr(i,2);
	   if(store.count(temp) ){
		   store[temp] = store[temp] + 1;
	   }
	   else{
		   store[temp] = 1;
	   }
	   if(store[temp] > max){
		   smax= temp;
		   max = store[temp];
	   }
   }
   return smax;
   
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
