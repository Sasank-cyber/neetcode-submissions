class MinStack {
public:
    MinStack() {
        
    }
    stack<int> l;
    stack<int> min_stack;


    void push(int val) {
        l.push(val);
        if(min_stack.empty()){
            min_stack.push(val);
        }
        else{
            min_stack.push(min(val,min_stack.top()));
        }
        
    }
    
    void pop() {
        l.pop();
        min_stack.pop();
        
    }
    
    int top() {
        return l.top();
        
    }
    
    int getMin() {
        return min_stack.top();
        
    }
};
