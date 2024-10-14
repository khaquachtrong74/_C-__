struct Node
{
    int data;
    Node *link;
    Node(int p_data, Node *p_link = nullptr) : data(p_data), link(p_link) {}
};

struct SllNode
{
    Node *head;
    SllNode()
    {
        head = nullptr;
    }
    void addHead(int data);
};
void SllNode::addHead(int data)
{
    head = new Node(data, head);
}