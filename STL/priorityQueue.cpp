// the guy who has the largest value stay on the top

void expalainPQ () {
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); //{5,2}
    pq.push(10); //{10,5,2}
    pq.push(8); // {10,8,5,2}

    cout<<pq.top(); //prints 10;
    pq.top() //{8,5,2}

    //Minimum heap store minimus at top

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5) //{5};  log(n)
    pq.push(2) // {2,5} O(1)
    pq.pop(); // log(m)
}