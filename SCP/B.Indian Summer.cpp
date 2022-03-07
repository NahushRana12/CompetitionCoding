#include <bits/stdc++.h> 
using namespace std;

#define for(i, a, n) for (register int i = (a); i < (int)(n); ++i)

bool isvovel(char c){
	
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void solve()
{
	int n,count = 0;
	cin>>n;
	set<int> book;
   while(n--){
			int temp;
			cin>>temp;
			book.insert(temp);
   }
   if(book.size() >= 2)
   {
		auto iter = book.begin();
// It will move forward the passed iterator by passed value
std::advance(iter, 1);
	cout<<*iter<<endl;return;
}
   cout<<"NO"<<endl;
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
	
}
