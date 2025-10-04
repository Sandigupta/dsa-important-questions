#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data;
        Node *next;
        
        Node(int val){
            data = val;
            next = nullptr;
        }
};

// hash map TC:O(N * 2 * log(N)         SP:O(N)
bool detectCycle(Node *head){
    unordered_map<Node *,int> mp;
    Node *temp = head;

    while(temp!=NULL){
        if(mp.find(temp->next)!=mp.end()){
            return true;
        }
        mp[temp] = 1;
        temp = temp->next;
    }
    return false;
}
bool detectCycle(Node* head) {
Node* slow = head;
    Node* fast = head;

    // Step 2: Traverse the linked list with
    // the slow and fast pointers
    while (fast != nullptr && fast->next != nullptr) {
        // Move slow one step
        slow = slow->next;
        // Move fast two steps
        fast = fast->next->next;

        // Check if slow and fast pointers meet
        if (slow == fast) {
            return true;  // Loop detected
        }
    }

    // If fast reaches the end of the list,
    // there is no loop
    return false;
}

int main(){
    
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(4);
  
    head->next->next->next = head->next;

    bool cycle = detectCycle(head);
    if(cycle)
    cout << "Cycle exist" << "\n";
    else 
    cout<<"Cycle does not exist"<<"\n";
}