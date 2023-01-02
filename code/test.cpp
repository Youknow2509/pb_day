
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
    if (node == NULL) newnode(data);
    node->next = newnode(data);
    return node;
}

void printll(node *n){
    node *temp = n;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node *addAt(node *l, int k, int x){
	node *p = l;
	for (int i = 0; i < k-1; i++){
		p = p->next;
	}
	//
	node *temp = new node;
	temp->data = x;
	temp->next = p->next;
	p->next = temp;
	
	return l;
}
int main(){

    int n, k , x;
    node *ll;

    cin >> n;
    cin >> x;
    ll = insert(ll, x);

    for (int i = 1; i < n; i++){
        cin >> x;
        ll = insert(ll, x);
    }
    cin >> k;

    ll = addAt(ll, k, x);


    printll(ll);

    return 0;
}
// Input: 4            Output: 1 10 2 3 4
//        1 2 3 4
//        1 10
