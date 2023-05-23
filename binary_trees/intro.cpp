#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree() {
    cout << "Enter the data\n";
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1)
        return NULL;

    cout << "Enter data for inserting in the left of " << data << "\n";
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in the right of " << data << "\n";
    root->right = buildTree(root->right);
}

void levelOrderTraversal() {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << "\n";
            if(!q.empty())
                q.push(NULL);
        }
        else {
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        } 
    }
}

int main() {
    Node* root = NULL;

    // tree creation
    root = buildTree();

    // level order
    levelOrderTraversal(root);
}