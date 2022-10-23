 #include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
int main()
{
    Node *first = new Node(3);

    cout << first->data << endl;
    cout << first->next << endl;
}
