 #include<bits/stdc++.h>
 using namespace std;

 class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

 };

 void InsertAtNode(Node* &head , int d){
    
    // create a new node

    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
    
 }

 void InsertAtLast(Node* &tail, int d) {

    Node*temp = new Node(d);
    tail -> next = temp;
    tail = temp; 
 }

void  InsertAtMiddle(Node* &head ,int possition, int data){
   
   Node* temp = head;
   int cmt =1;

   while(cmt <  possition-1) {
      temp = temp -> next;
      cmt++;
   }
   // creatong a node for d

   Node* nodeToInsert = new Node(data);

   nodeToInsert -> next = temp-> next;
   temp -> next = nodeToInsert;

}

    // traverse the linked list

    void PrintLinkedList (Node* &head) { 

        // we dont want to change the head so we created other pointer pointing to head 
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp -> data <<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

 int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    InsertAtNode(head, 20);
    InsertAtLast(tail, 30);
    InsertAtMiddle(head, 2, 90);
    PrintLinkedList(head);
    

 }