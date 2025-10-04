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

Node* arrayToLinklist(int arr[],int n){
    Node *head = new Node(arr[0]);
    Node *mover=head;
    for (int i = 1; i < n;i++){
        Node *temp=new Node(arr[i]);
        mover->next = temp;
        mover=mover->next;
    }
    
    return head;
};

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);


    Node* head=arrayToLinklist(arr, n);
    
    Node* mover=head;
    while (head!=NULL)
    {
        cout << head->data <<" ";
        head = head->next;
    }
    
}