// class MyQueue {
// public:
//     stack <int> s1;

//     MyQueue() {
        
//     }
    
//     void push(int x) {
//     s1.push(x);    
//     }
    
//     int pop() {
//         stack<int> s2;
//         int v;
//         while(!s1.empty())
//         {
//             v = s1.top();
//             s1.pop();
//             if(s1.empty())
//             {
//                 break;    
//             }
//             s2.push(v);
//         }
//         while(!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//         return v;
//     }
    
//     int peek() {
//         stack<int> s2;
//         int v;
//         while(!s1.empty())
//         {
//             v = s1.top();
//             s1.pop();
//             s2.push(v);
//         }
//         while(!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//         return v;

//     }
    
//     bool empty() {
//         return s1.empty();
//     }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */