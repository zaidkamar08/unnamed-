class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    int peekEle = -1;

    MyQueue() {
        
    }
    
    void push(int x) {
        if (s1.empty() && s2.empty()) {
            peekEle = x;
        }
        s1.push(x);
    }
    
    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();

        if (s2.empty() && !s1.empty()) {
            peekEle = s1.top();
        }

        return val;
    }
    
    int peek() {
        if (!s2.empty()) {
            return s2.top();
        }

        return peekEle;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};