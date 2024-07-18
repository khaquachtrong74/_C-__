struct NDE
{
    int data;
    NDE *next;
    NDE *prev;
    NDE(int p_data, NDE *p_next = nullptr, NDE *p_prev = nullptr) : data(p_data), next(p_next), prev(p_prev) {}
};

struct DoublyLinkedList
{
    NDE *head;
    NDE *tail;

    void append(int value);
};

void DoublyLinkedList::append(int value)
{
    NDE *newNDE = new NDE(value);
    if (!head)
    {
        head = tail = newNDE;
    }
    else
    {
        tail->next = newNDE;
        newNDE->next = tail;
        tail = newNDE;
    }
}