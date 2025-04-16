//basics of tree creation

#include<iostream>
#include<queue>
using namespace std;

class node{
   public:
    int data;
    node*left;
    node*right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node*root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of"<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter data for inserting in right"<<data<<endl;
    root->right = buildtree(root->left);
    return root;
}

void levelordertraversal(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

//first we push element in stack (root at first)then we 
//store front of queue in temp var then pop the front of the queue,
// then look for left aznd right child of temp

    while(!q.empty()){
        node*temp = q.front();
        
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);

        }
        if(temp->right){
            q.push(temp->right);
            
        }
        }
    }
     

}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}


int main()
{
    node*root = NULL;
    root= buildtree(root);
    levelordertraversal(root);

    cout<<"inorder traveral is: ";
    inorder(root);

    cout<<"preorder traversal is : ";
    preorder(root);

    cout<<"postorder traversal is : ";
    postorder(root);


    return 0;
}