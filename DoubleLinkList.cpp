#include <iostream>
#include <string>
using namespace std;

class mode {
    public:
         int noMhs;
         Node *next;
         Node *prev;
};

class DoubleLinkList
{
    private:
    Node *START;

    public:
    DoubleLinkList()
    {
        START = NULL;
    }

