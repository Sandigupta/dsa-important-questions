#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

Node* convertLinklist(int arr[],int n){
      Node *head=new Node(arr[0]);
      Node *mover = head;
      for(int i=1;i<n;i++){
          Node *temp = new Node(arr[i]);
          mover->next = temp;
          mover = temp;
      }
      return head;
};

//Time comlexcity:O(N)+O(N)  space complexcity:O(N)
 Node* reverseList(Node* head) {
        // code here
        
        Node* mover=head;
        stack<int> st;
        while(mover!=NULL){
            st.push(mover->data);
            mover=mover->next;
        }
        
        Node* temp=head;
        while(temp!=NULL){
            temp->data=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
};


// Time complexcity:O(N) and space complexcity:O(1)
Node *reverseListPointer(Node *head){
    Node *temp = head;
    Node *prev = NULL;
    Node *front = NULL;

    while(temp!=NULL){
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = convertLinklist(arr, n);
    Node *it = head;
    while(it!=NULL){
        cout << it->data <<" ";
        it = it->next;
    }

    cout<<"\n";
    
    Node *revs = reverseList(head);
    Node *revs2 = reverseListPointer(head);
    while(revs2!=NULL){
        cout << revs2->data <<" ";
        revs2 = revs2->next;
    }


}