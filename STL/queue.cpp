//it is also conatiner same as stack work on FIFO first in first out

void explainQueue() {
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4) //{1,2,4}

    q.back()+=5 // means we are adding 5 in the last element;

    cout<<q.back(); //print 9
    cout<<q.front(); //print 1

    q.pop(); //{2,4}
    cout<<q.front(); //print 2

    //siuze swap empty same as stack
    // all the operation happing in O(1);

}