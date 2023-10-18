/**
*    author:  Akayiz
*    created: 2023-10-15 21:36:31
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

class Node{
    public:
        ll value;
        Node *next, *prev;
        
        // Parameterized Constructor
        Node(ll v){
            value = v;
            next = NULL;
            prev = NULL;
        }

        // Default Constructor
        Node(){
        }
};

class Linkedlist{
    public:
        Node *tail;

        Linkedlist(){
            tail = NULL;
        }

        void insert(int val){
            Node *new_node = new Node(val);
            if(tail != NULL)
                tail->next = new_node;
            
            new_node->prev = tail;
            tail = new_node;
        }
}linked_list;

int main() {
    Akayiz

    int n, p;
    cin >> n >> p;

    ll val;
    Node* current_node;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        linked_list.insert(val);
        if(i == p)
            current_node = linked_list.tail;
    }

    int q;
    cin >> q;

    string instruction;
    while(q--){
        cin >> instruction;
        if(instruction == "moveLeft"){
            if(current_node->prev != NULL)
                current_node = current_node->prev;
        }
        else if(instruction == "moveRight"){
            if(current_node->next != NULL)
                current_node = current_node->next;
        }
        else if(instruction == "insertLeft"){
            cin >> val;
            Node* new_node = new Node(val);
            new_node->prev = current_node->prev;
            new_node->next = current_node;
            if(current_node->prev != NULL)
                current_node->prev->next = new_node;
            current_node->prev = new_node;
        }
        else if(instruction == "insertRight"){
            cin >> val;
            Node* new_node = new Node(val);
            new_node->prev = current_node;
            new_node->next = current_node->next;
            if(current_node->next != NULL)
                current_node->next->prev = new_node;
            current_node->next = new_node;
        }
        else{
            cout << current_node->value << el;
        }
    }

    return 0;
}