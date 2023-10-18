//Implement Queue using Stacks
#include<stack>
class MyQueue {
    stack<int> st1;
    stack<int> st2;
public:
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(st1.size()!=1){
            st2.push(st1.top());
            st1.pop();
        }
        int ans=st1.top();
        st1.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
        
    }
    
    int peek() {
        while(st1.size()!=1){
            st2.push(st1.top());
            st1.pop();
        }
        int ans=st1.top();
        //st1.pop();
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return ans;
    }
    
    bool empty() {
        return st1.empty();
    }
};

//Minimum element in stack in constant space
int ME(stack<int> st){
    int ans=INT_MAX;
    while(!st.empty()){
        ans=min(ans,st.top());
        st.pop();
    }
    return ans;
}