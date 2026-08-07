class BrowserHistory {
    struct node{
        string url;
        node*prev;
        node*next;
        
        node(string u){
        url = u;
        prev = NULL;
        next = NULL;
    }
    };
    
    node* curr;
public:
    
    BrowserHistory(string homepage) {
        curr = new node(homepage);
    }
    
    void visit(string url) {
        node *newnode = new node(url);
        newnode->prev = curr;
        curr->next = newnode;
        curr = newnode;
    }
    
    string back(int steps) {
        node* temp = curr;
            for(int i =0;i<steps;i++){
                if(temp->prev == NULL){
                    break;
                }
                temp = temp->prev;
            }
            curr = temp;
        
        return curr->url;
    }
    
    string forward(int steps) {
        node* temp2 = curr;
        for(int i =0;i<steps;i++){
            if(temp2->next == NULL){
                break;
            }
            temp2 = temp2->next;
        }
        curr = temp2;
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */