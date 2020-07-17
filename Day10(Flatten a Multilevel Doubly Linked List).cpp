/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
    Node* frec(Node* head){
        Node *curr=head,*tail=head;
        while(curr){
            Node *child=curr->child;
            Node *next=curr->next;
            if(child){
                Node *_tail=frec(child);
                
                _tail->next=next;
                if(next) next->prev=_tail;
                
                curr->next=child;
                child->prev=curr;
                
                curr->child=nullptr;
                
                curr=tail;
            }
            else curr=next;
            if(curr) tail=curr;
        }
        return tail;
        
    }
public:
    vector<int>v;
    Node* flatten(Node* head) {
        //if(head) frec(head);
        if(!head) return head;
        trav(head);
        //head->child=nullptr;
        //head->next=nullptr;
        //Node *temp=head;
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        Node *curr=temp;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            if(i==0){
                struct Node* nex = (struct Node*)malloc(sizeof(struct Node));
                temp->val=v[i];
                curr=temp;
                temp->next=nex;
                temp=temp->next;
                //temp->prev=curr;
            }
            else{
                struct Node* nex = (struct Node*)malloc(sizeof(struct Node));
                temp->prev=curr;
                temp->val=v[i];
                curr=temp;
                temp->next=nex;
                temp=temp->next;
            }
        }
        //head=temp;
        return temp;
    }
    void trav(Node* head){
        if(!head) return;
        v.push_back(head->val);
        trav(head->child);
        trav(head->next);
    }
};
