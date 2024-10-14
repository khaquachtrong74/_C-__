#include <iostream>
using namespace std;

struct Data
{
    string name;
    int tuoi, chieucao;
    float cannang;
    Data(string n, int t, int c, float cn) : name(n), tuoi(t), chieucao(c), cannang(cn) {}
};

// Danh sach lien ket don
struct Node
{
    Data a;
    Node *point;
    Node(Data p_a, Node *ptr_p = nullptr) : a(p_a), point(ptr_p) {}
};

struct linkNode
{
    Node *head;
    linkNode()
    {
        head = nullptr;
    }
    void addNode(Data a)
    {
        head = new Node(a, head);
    }
};

int main()
{
    Data dt1("Kha", 19, 165, 55);
    Data dt2("Msc", 12, 30, 56);
    linkNode test;
    test.addNode(dt1);
    test.addNode(dt2);
    cout << test.head->point->a.name; // Kha
    cout << test.head->a.name;        // Msc
}
