#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Add node at the end
    void append(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Add node at the beginning
    void prepend(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // Print the list
    void printList()
    {
        Node *current = head;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Print the list in reverse
    void printListReverse()
    {
        Node *current = tail;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }

    // Delete a node by value
    void deleteNode(int value)
    {
        Node *current = head;
        while (current && current->data != value)
        {
            current = current->next;
        }
        if (!current)
            return; // Node not found

        if (current == head)
        {
            head = current->next;
            if (head)
                head->prev = nullptr;
        }
        else
        {
            current->prev->next = current->next;
        }

        if (current == tail)
        {
            tail = current->prev;
            if (tail)
                tail->next = nullptr;
        }
        else
        {
            current->next->prev = current->prev;
        }

        delete current;
    }

    // Destructor to free memory
    ~DoublyLinkedList()
    {
        Node *current = head;
        while (current)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main()
{
    DoublyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);

    std::cout << "List: ";
    list.printList();

    list.prepend(0);
    std::cout << "After prepend: ";
    list.printList();

    list.deleteNode(2);
    std::cout << "After deletion: ";
    list.printList();

    std::cout << "Reverse list: ";
    list.printListReverse();

    return 0;
}
