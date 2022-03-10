#include<header.h>

int main(int argc, char** argv) {
    Node* root=NULL;
    int arr[]={15,10,20,17,25,5};
    for(int i=1;i<=6;i++){
        root=insertNode(root,arr[i-1]);
    }
    

    if(tree_search(root,5)){
        printf("true\n");
    } else{
        printf("false\n");
    };


    printf("min : %d \nmax : %d\n",getMin(root),getMax(root));
    printf("height of tree : %d\n",getHeight(root));
    printf("from 4 to 9 inclusive :- \n");
    rangeDisplay(root,4,9);
    printf("\n");
    // deleteNode(root,4);
    rangeDisplay(root,4,9);
    printf("\n");
    display(root,&inOrder);
    display(root,&preorder);
    display(root,&postorder);
}
