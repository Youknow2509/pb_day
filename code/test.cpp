
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

// Tao mot Node 
Node* newNode(int data){
    Node* temp = new Node;
    temp->next = NULL;
    temp->data = data;
    return temp;
}

// them gia tri vao vi tri cuoi cung cua Node
Node* insertNode(Node* node, int data){
    if (node == NULL) node = newNode(data);
    node->next = newNode(data);
    return node;
}

// in ra man hinh gia tri cac node lien tiep 
void printNode(Node* node){
    Node* temp = node; // sao chep Node hien tai ra mot bien moi de thuc hien code du lieu khong bi thay doi
    while ( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){

    Node* node = NULL;
    int n, x , k;
    cin >> n;
    cin >> x;
    node = insertNode(node, x);
    for (int i = 1; i < n; i++){
        cin >> x;
        node = insertNode(node, x);
    }
    printNode(node);

    return 0;
}
// Input:   	4
//              1 2 3 4    -----> Output:   1 10 2 3 4
//              1 10

