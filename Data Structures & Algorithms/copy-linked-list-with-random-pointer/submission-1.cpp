/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp = head;
        // Node *copy = head;
        unordered_map<Node*, Node*> lp;
        lp[NULL] = NULL;
        while(temp){
            Node *copy = new Node(temp->val);
            lp[temp] = copy;
            temp = temp->next; 
        }
        temp = head;
        while(temp){
            Node *copy = lp[temp];
            copy->next = lp[temp->next];
            copy->random = lp[temp->random];
            temp = temp->next;
        }
        


        return lp[head];
        
    }
};
