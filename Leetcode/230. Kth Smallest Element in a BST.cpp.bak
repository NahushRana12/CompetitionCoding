//Leetcode Problem: 707. Design Linked List(https://leetcode.com/problems/design-linked-list/)

#include <bits/stdc++.h> 
using namespace std;
 
 
bool isvovel(char c){
	
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

template <typename T>
void readVector(vector<T> &arr, int n){
	arr.resize(n);
	for(int i = 0;i< n;i++){
		T temp;
		cin>>temp;
		arr[i] = temp;
	} 
}
template <typename T>
void writeVector(vector<T> &arr){
	for(auto x: arr){
		cout<<x<<" ";
	}
	cout<<endl;
}
template <typename T>
void swapVector(T &a1,T &a2){
	T temp = a1;
	a1 = a2;
	a2 = temp;
}


class MyLinkedList {
    int val;
    MyLinkedList* next;
    int len{-1};
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        val = 0;
        next = NULL;
    }
    MyLinkedList(int v,MyLinkedList *ptr) {
        val = v;
        next = ptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int i) {
        if(i < 0 || i > len){
            return -1;
        }
        MyLinkedList * temp1  = next;
        while(i--){
            
            temp1 = temp1->next;
        }
        return temp1->val;
    }
    
    void Display(){
        MyLinkedList * temp  = next;
        cout<<"\nDisplay Node\t ";
        while(temp != NULL){
            cout<<temp->val<<" ->";
            temp = temp->next;
        }
        cout<<"\tlenth = "<<len;
        
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
      //  cout<<"\nADD at Head \t";
       
        if(next == NULL){
              MyLinkedList * temp  = new MyLinkedList(val,NULL);
           // cout<<"Head NULL and Inserting val =" << val;
            
            next = temp;
        }
        else
        {
            MyLinkedList * temp  = new MyLinkedList(val,next);
            next = temp;
        //    cout<<" Node present \t ";
            
        }
        len++;
      // Display();
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
          MyLinkedList * temp  = new MyLinkedList(val,NULL);
          MyLinkedList * temp1  = next;
       //   cout<<"\nInsert at Last\t ";
        if(temp1 == NULL){
             MyLinkedList * temp  = new MyLinkedList(val,NULL);
           // cout<<"Head NULL and Inserting val =" << val;
            
            next = temp;
        }
        else{
          while(temp1->next != NULL){
            temp1 = temp1->next;
          }
          temp1->next = temp;
        }      
        len++;
     //   Display();
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int i, int val) {
        if(i < 0 || i > len + 1){
            return ;
        }
        MyLinkedList * temp1  = next,*temp2 = NULL;
        if(i ==0 ){
            MyLinkedList * temp3  = new MyLinkedList(val,next);
             len++;
     //   Display();
            next = temp3;
            return;
        }
        while(i--){
            temp2 = temp1;
            temp1 = temp1->next;
            
        }
         MyLinkedList * temp3  = new MyLinkedList(val,NULL);
        temp3->next = temp1;
        temp2->next = temp3;
        
        len++;
     //   Display();
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int i) {
         cout<<i<<" "<<len;
        if(i < 0 || i > len){
            return ;
        }
      
        MyLinkedList * temp1  = next,*temp2 = next;
          if(i == 0){
            next = temp1->next;
               len--;
     
               Display();return;
        }
        while(i--){
            temp2 = temp1;
            temp1 = temp1->next;
        
        }
        
        temp2->next = temp1->next;
        len--;
        
    }
};


int main()
{
	
 // Your MyLinkedList object will be instantiated and called as such:
	MyLinkedList* obj = new MyLinkedList();
 int param_1 = obj->get(index);
 obj->addAtHead(val);
 obj->addAtTail(val);
 obj->addAtIndex(index,val);
 obj->deleteAtIndex(index);
	
	
}
