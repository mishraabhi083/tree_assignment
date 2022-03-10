#include<header.h>


Node* insertNode(Node* root,int value){
    Node* tmp=root;
    if(root==NULL){
        root=(Node*)malloc(sizeof(Node));
        root->data=value;
        root->left=NULL;
        root->right=NULL;
        return root;
    } else {
        Node* tmp=root;
        while(root!=NULL){
            if(value < root->data){
                if(root->left==NULL){
                    root->left=(Node*)malloc(sizeof(Node));
                    root=root->left;
                    root->data=value;
                    root->left=NULL;
                    root->right=NULL;
                    return tmp;
                }
                root=root->left;
            } else if(value > root->data){
                if(root->right==NULL){
                    root->right=(Node*)malloc(sizeof(Node));
                    root=root->right;
                    root->data=value;
                    root->left=NULL;
                    root->right=NULL;
                    return tmp;
                }
                root=root->right;
            } else {
                return tmp;
            }
        }
        printf("value already present in tree \n");
        return root;
    }
}

Node* tree_search_addr(Node* root,int value){
    if(root){
        printf("tre adr ; %d\n",root->data);
        if(root->data==value){
            return root;
        }
        if(value < root->data){
            root=root->left;
            tree_search(root,value);
        } else {
            root=root->right;
            tree_search(root,value);
        }
    }
    return NULL;
}

Node* deleteNode(Node* root, int value){
    Node* node = tree_search_addr(root,value);
    printf("searched : %p\n",node);
    getMin(node->right);
    node->data = getMin(node->right);

    // deleting node
     while(node->right){
        if(!root->left){
            root=NULL;
        }
        root=root->left;
    }
    return root;
}