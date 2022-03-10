#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>


#define MAXSIZE 20
#define INITIALIZE 0


typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
} Node;


Node* insertNode(Node* root,int value);
bool tree_search(Node* root,int value);
void inOrder(Node* root);
void preorder(Node* root);
void postorder(Node* root);
void display(Node* root,void*(algo)(Node* root));
int getMax(Node* root);
int getMin(Node* root);
int getHeight(Node* root);
void rangeDisplay(Node* root,int min,int max);
// Node* tree_search_addr(Node* root,int value);
Node* deleteNode(Node* root, int value);
