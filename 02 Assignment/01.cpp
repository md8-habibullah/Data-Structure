#include <iostream>
#include <string>
using namespace std;

class Node {
  
public:
  int value;
  Node* next;
  

  Node(){
    this->value = 0;
    this->next = nullptr;
  };
  
  Node (int val){
    this->value = val;
    this->next = nullptr;
  };
  
};

class Linkedlist {
  Node* head;
public:
  Linkedlist (){
    head = nullptr;
  };
  
  bool isEmpty (){
    return head == nullptr;
  };
  
  void addToFirst (int num){
    
    Node* newNode = new Node (num);
    
    if (isEmpty()){
      head = newNode;
      return;
    } else {
      newNode->next = this->head;
      this->head = newNode;
    };
  };
  
  void addAtEnd(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
  };
  
  void showLinkedlist (){
    Node* temp = head;

    
    while (temp != nullptr){
      cout << temp->value << "\t";
      temp = temp->next;
    };
  };
  
  
  ~Linkedlist() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

};

int main() 
{
    Linkedlist list;
    list.addToFirst(645);
    list.addToFirst(53);
    list.addAtEnd(967);
    
    cout << "Display list" << endl;
    
    list.showLinkedlist();
    return 0;
}