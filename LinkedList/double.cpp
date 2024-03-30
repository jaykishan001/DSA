#include<bits/stdc++.h>
using namespace std;

class Node {
    public:

    int data;
    Node* next;
    Node* prev;

    //constructor created

    Node(int d){

        this->data = d;
        this->next = NULL;
        this-> next = NULL;

    }

};
void print(Node* head) {

    Node* temp = head;
    while(temp !=NULL) {
        cout<<temp-> data;
        temp =temp -> next;
    }
    cout<<endl;
    
};

int getLenth(Node* head) {
    Node* temp = head;
    int length = 0;
    while(temp != NULL) {
        length ++;
        temp = temp-> next;
    }
    return length;
    };

int main() {

    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    cout<<getLenth(head)<<endl;

    

}