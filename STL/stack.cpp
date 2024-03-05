// Stack is LIFO (last in first out) the guy who went in last will comes first out

void explainStack() {
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{1,2}
    st.push(3); //{1,2,3}
    st.push(3); //{1,2,3,3}

    st.top() //it will give us 3 "st[3] is invalid we can not access stack by giving index"
    st.pop() //it will pop top element {1,2,3};
    st.size() //3
    st.empty() //false

    stack<int> st1, st2;
    st1.swap(st2);

    //all the operation(push, pop, top) in stack are Big O(1);

}