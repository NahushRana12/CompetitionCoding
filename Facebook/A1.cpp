/*
Connie received a string SS for her birthday, consisting entirely of uppercase letters (each between "A" and "Z", inclusive).
However, Connie really only likes nice, consistent strings. She considers a string to be consistent if and only if all of its letters are the same.
Each second, Connie may choose one letter in SS and replace it with a different letter. If her chosen letter is a vowel, then she may replace it with any consonant of her choice. On the other hand, if her chosen letter is a consonant, then she may replace it with any vowel of her choice. The 55 letters "A", "E", "I", "O", and "U" are considered vowels, while the remaining 2121 letters of the alphabet are considered consonants. If a letter appears multiple times in SS, she may only replace a single occurrence per second.
Help her determine the minimum number of seconds required to change SS into any consistent string. Note that SS might already be consistent, in which case 00 seconds would be required.
Constraints
1 \le T \le 451≤T≤45
1 \le |S| \le 1001≤∣S∣≤100
"A" \le S_i \le≤S 
i
​
 ≤ "Z"
The sum of |S|∣S∣ across all test cases is at most 4{,}5004,500.
Input
Input begins with an integer TT, the number of birthdays Connie has had. For each birthday, there is a single line containing the string SS.
Output
For the iith string, print a line containing "Case #i: " followed by the minimum number of seconds required to change SS into any consistent string.
Sample Explanation
In the first case, Connie could replace the second and third letters ("B" and "C") each with "A", yielding the string "AAA" in 22 seconds.
In the second case, "F" is already consistent.
In the third case, Connie could replace the first, third, and fifth letters ("B", "N", and "N") each with "A", yielding the string "AAAAAA" in 33 seconds.

*/

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
   string s1;int vovel = 0,con = 0,count[26],Maxvovel = 0,Maxcon = 0;
   memset(count,0,sizeof(count));
   cin>>s1;
   int k;
   string 
   for(
   for(auto x: s1){
	   //cout<<int( x - 'A')<<" ";
	   count[x - 'A']++;
		if(Isvovel(x))
		{
			vovel++;
			if(count[x - 'A'] > Maxvovel)
				Maxvovel = count[x - 'A'];
		}
		else{
		con++;
			if(count[x - 'A'] > Maxcon)
				Maxcon = count[x - 'A'];
		}
   }
   // for(int i = 0;i<26;i++)cout<<count[i]<<" ";
	return min((con - Maxcon) * 2 + vovel , (vovel- Maxvovel) * 2 + con );
}
int main()
{
    //Solve();
   int T;
    cin>>T;
    FOR(i,0,T){
      cout<<"Case #"<<i+1<<": " <<Solve()<<endl;
    }
    
}
