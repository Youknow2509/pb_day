
#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
};

node* newnode(int x){
    node* temp = new node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}

node* insert (node *node, int data){
    node->next = newnode(data);
    return node;
}

void printll(node *n){
    node *temp = n;
    while( n != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){

    int n, k , x;
    node ll;

    cin >> n;
    

    return 0;
}
