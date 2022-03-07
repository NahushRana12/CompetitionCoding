#include <bits/stdc++.h> 
using namespace std;


bool isvovel(char c){
	
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void solve()
{
	int n,count = 0;
	cin>>n;
	int arr[n];vector<int> result;
	set<int> book;
	int i =0 ;int l = n;
   while(l--){
			int temp;
			cin>>temp;
			arr[i++] = temp;
   }
   
   for(int i = n -1;i >= 0 ;i--){
	   if(book.find(arr[i]) != book.end()){
		   
	   }
	   else{
	cout<<result.push_back
	   book.push_back(arr[i]);
	   }
   }
   
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
