//problem link: https://chatgpt.com/c/6a97f9f1-8c08-83e8-a993-06bdbcb17006
//timeComplexity: O(1)
//spaceComplexity:  O(1)

class Node{
public:
    string data;
    Node*next;
    Node*prev;
    Node(string x): data(x),next(NULL),prev(NULL){};
};
class BrowserHistory {
public:
    Node*curr;
    BrowserHistory(string homepage) {
        curr=new Node(homepage);
    }
    
    void visit(string url) {
        Node*newNode=new Node(url);
        curr->next=newNode;
        newNode->prev=curr;
        curr=curr->next;
    }
    
    string back(int steps) {
        while(curr->prev!=NULL && steps>0){
            curr=curr->prev;
            steps--;
        }
        return curr->data;
    }
    
    string forward(int steps) {
        while(curr->next!=NULL && steps>0){
            curr=curr->next;
            steps--;
        }
        return curr->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */