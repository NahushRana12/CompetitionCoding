//Leetcode 208. Implement Trie (Prefix Tree) (https://leetcode.com/problems/implement-trie-prefix-tree/)

#include <bits/stdc++.h> 
using namespace std;
 


class Trie {
    Trie *children[26];
        bool end;
public:
     
    /** Initialize your data structure here. */
    Trie (){
       
        end= false;
        for(int i =0;i<26;i++){
            children[i]= nullptr;
        }
       
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie *newnode = this;
        for(int i=0;i<word.length();i++){
            int index = word[i]-'a';
            if(!newnode->children[index])
                newnode->children[index] = new Trie();
            
            newnode = newnode->children[index];
            
        }
        newnode->end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie *newnode = this;
        for(int i=0;i<word.length();i++){
            int index = word[i]-'a';
            if(!newnode->children[index])
                return false;
            
            newnode = newnode->children[index];
            
        }
        return ( newnode != nullptr && newnode->end);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie *newnode = this;
        for(int i=0;i<prefix.length();i++){
            int index = prefix[i]-'a';
            if(!newnode->children[index])
                return false;
            
            newnode = newnode->children[index];
            
        }
        return (newnode!= nullptr);
        
    }
};

int main(){
 //Your Trie object will be instantiated and called as such:
  Trie* obj = new Trie();
  obj->insert(word);
  bool param_2 = obj->search(word);
  bool param_3 = obj->startsWith(prefix);
  return 0;
}