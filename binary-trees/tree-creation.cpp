#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree(node* root) {
        cout<<"Enter the data"<<endl;
        int data;
        cin>>data;
        node* newnode = new node(data);
        if(data == -1) {
            return NULL;
        }

        cout<<"Enter the data for inserting in left node"<<data<<endl;
        newnode->left = createTree(newnode->left);
        cout<<"Enter the data for inserting in right node"<<data<<endl;
        newnode->right = createTree(newnode->right);
        return root;
    }

node* levelOrder(node* root) {
    queue<node*> q;
    q.push(root);

    while(!q.empty) {
        node* frontnode = q.front();
        
        q.pop();
        if(temp == NULL) {#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree(node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* newnode = new node(data);

    cout << "Enter the data for inserting in the left of " << data << ": ";
    newnode->left = createTree(newnode->left);
    
    cout << "Enter the data for inserting in the right of " << data << ": ";
    newnode->right = createTree(newnode->right);

    return newnode;
}

void levelOrder(node* root) {
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* frontnode = q.front();
        q.pop();

        if (frontnode != NULL) {
            cout << "Data extracted: " << frontnode->data << endl;
            if (frontnode->left) {
                q.push(frontnode->left);
            }
            if (frontnode->right) {
                q.push(frontnode->right);
            }
        }
    }
}

void inorder(node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout<<"Extracted data is "<<root->data<<endl;
    inorder(root->right);

}

void preorder(node* root) {
    if(root == NULL) {
        return;
    }
    cout<<"Extracted data is "<<root->data<<endl;
    inorder(root->left);
    inorder(root->right);

}

void postorder(node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<"Extracted data is "<<root->data<<endl;
}

int main() {
    node* root = NULL;
    root = createTree(root);
    levelOrder(root);
    return 0;
}

            cout<<endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout<<"Data extracted "<<frontnode->data<<end;
            if(frontnode->left) {
                q.push(frontnode->left);
            }
            if(frontnode->right) {
                q.push(frontnode->right);
            }
        }

    }
}

int main () {
    node* root = NULL;
    root = createTree(root);
}