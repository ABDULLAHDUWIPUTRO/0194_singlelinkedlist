#include <iostream>
#include <string.h>
using namespace std;

class Node
{
    public:
        int noMhs;
        Node *next;
};

class List
{
    Node *START;

    public:
       List()
       {
        START = NULL;
       }
    void addNode()
    {
        int nim;
        cout << "\nMasukan Nomor Mahasiswa: ";
        cin >> nim;
    }

    