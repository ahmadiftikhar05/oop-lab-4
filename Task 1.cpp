#include<iostream>
using namespace std;
class DNode {
public:
    int data;
    DNode* prev;
    DNode* next;
    DNode(int d) : data(d), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    DNode* head;
    DNode* tail;
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int data) {
        DNode* newNode = new DNode(data);
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void display()
    {
        DNode* temp = head;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NUll\n";
    }
    void reversedisplay()
    {
        DNode* temp = tail;
        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->prev;
        }
        cout << "NUll\n";
    }
    void searchValue(int find_value)
    {
        DNode* temp = head;
        while(temp) 
        {
           if(temp->data == find_value )
           {
            cout<<"Number is found in link list."<< endl;
            cout<<"Memory Address = " << temp << endl;
            return;
           }
           temp = temp->next;

        }
        cout<<"Value was not found in link list" << endl;
    }
  
   
};
int main()
{
    DoublyLinkedList DNode;
    DNode.append(10);
    DNode.append(20);
    DNode.append(30);
    DNode.display();
    DNode.reversedisplay();
    int value;
    cout<<"Enter value to search = ";
    cin>> value;
    DNode.searchValue(value);
    return 0;
}

