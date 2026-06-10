class MinStack {
public:
    MinStack() {
    }
    
    void push(int val) {
        intStack.push_back(val);

        if (minStack.empty() || val <= minStack.back()) {

            minStack.push_back(val);

        }
    }
    
    void pop() {
        if (intStack.back() == minStack.back()) {

            minStack.pop_back();

        }
        intStack.pop_back();
        
    }
    
    int top() {
        return intStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
private:
    vector<int> intStack;
    vector<int> minStack;
};
