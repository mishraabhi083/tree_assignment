#include<header.h>

bool tree_search(Node* root,int value){
    if(root){
        if(root->data==value){
            return true;
        }
        if(value < root->data){
            root=root->left;
            tree_search(root,value);
        } else {
            root=root->right;
            tree_search(root,value);
        }
    }
}



int getMin(Node* root){
    while(root){
        if(!root->left){
            return root->data;
        }
        root=root->left;
    }
}


int getMax(Node* root){
    while(root){
        if(!root->right){
            return root->data;
        }
        root=root->right;
    }
}

int getHeight(Node* root){
    if(!root){
        return 0;
    } else {
        int l = getHeight(root->left);
        int r = getHeight(root->right);
        l=l > r ? l : r;
        return l+1;
    }
}

void rangeDisplay(Node* root,int min,int max){
    if(root){
        rangeDisplay(root->left,min,max);
        if(root->data >= min && root->data <= max)
            printf("%d - ",root->data);
        rangeDisplay(root->right,min,max);        
    }
}



void inOrder(Node* root){
    if(root){
        inOrder(root->left);
        printf("%d - ",root->data);
        inOrder(root->right);
    }
}
void preorder(Node* root){
    if(root){
        printf("%d - ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d - ",root->data);
    }
}


void display(Node* root,void*(algo)(Node* root)){
    algo(root);
    printf("\n");
}
