#include <iostream>

struct Node {
  int data;
  Node* next;
};

Node* createNode(int value) {
  Node* newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr;
  return newNode;
}

void insertAtHead(Node*& head, Node*& tail, int value) {
  Node* newNode = createNode(value);
  newNode->next = head;
  if (head == nullptr) {
    tail = newNode; // If the list is empty, update tail as well
  }
  head = newNode;
}

void insertAtTail(Node*& head, Node*& tail, int value) {
  Node* newNode = createNode(value);
  if (head == nullptr) {
    head = tail = newNode; // If the list is empty, set head and tail to newNode
  } else {
    tail->next = newNode;
    tail = newNode;
  }
}

void traverseAndPrint(Node* head) {
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data << " -> ";
    current = current->next;
  }
  std::cout << "nullptr" << std::endl;
}

int main() {
  Node* head = nullptr;
  Node* tail = nullptr;
std::cout<<"Head: "<<std::endl;
  // Insert nodes at the head
  insertAtHead(head, tail, 33);
  traverseAndPrint(head);
  insertAtHead(head, tail, 34);
  traverseAndPrint(head);
  insertAtHead(head, tail, 35);
  traverseAndPrint(head); // Output will be 35 -> 34 -> 33 -> nullptr
    
std::cout<<"Tail: "<<std::endl;
  // Insert nodes at the tail
  
  insertAtTail(head, tail, 36);
  traverseAndPrint(head);
  insertAtTail(head, tail, 37);
  traverseAndPrint(head); // Output will be 35 -> 34 -> 33 -> 36 -> 37 ->
  insertAtTail(head, tail, 38);
  traverseAndPrint(head); // Output will be 35 -> 34 -> 33 -> 36 -> 37 ->nullptr

  // Code to delete the list and free memory (if needed)
  // ...

  return 0;
}
