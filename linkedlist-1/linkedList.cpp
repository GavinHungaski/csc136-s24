#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void linkedList::insertAtEnd(int x)
{
  //create a new node
  node *temp = new node;
  temp->num = x;
  temp->next = nullptr;

  if(head == nullptr) // to handle if the list is empty
  {
    head = temp;
    tail = temp;
  }
  else //the list is not empty
  {
    tail->next = temp;
    tail = tail->next;
  }
  count++; //keeps track of the amount of nodes
}

void linkedList::print() const
{
  node *temp = head;
  while(temp != nullptr)
  {
    cout << temp->num << " ";
    temp = temp->next;
  }
  cout << endl;
}
