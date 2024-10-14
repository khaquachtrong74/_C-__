#include <iostream>
#include <string>
using namespace std;
#define Tsize 20 // Size của Hash Table
int h_func(int k)
{
    return k % Tsize;
}
struct h
{
    h *next;
    int value;
    h(int v = -1, h *n = nullptr)
    {
        value = v;
        next = n;
    }
};
struct htb
{
    h *hvl;
    htb()
    {
        hvl = new h[Tsize];
    }
    void hashValue(int el)
    {
        int i = h_func(el);
        if (hvl[i].value == -1)
        {
            hvl[i] = el;
            return;
        }
        h *current = &hvl[i];
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new h(el);
    }
    void outHashValue()
    {
        for (int i = 0; i < Tsize; i++)
        {
            h *current = &hvl[i];
            while (current != nullptr && current->value != -1)
            {
                cout << current->value << " ";
                current = current->next;
            }
            if (hvl[i].value != -1)
            {
                cout << endl;
            }
        }
    }
};