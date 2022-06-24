//#include<stdio.h>
//
//struct Node
//{
//    int data;
//    struct Node* left, * right;
//};
//typedef struct Node node;
//
//int selectOption();
//node* insert_BST(node* temp, node* nn);
//void inorder(node* root);
//void preorder(node* root);
//void postorder(node* root);
//node* search_BST(node* temp, int n);
//
//int main()
//{
//    //printf("hello");
//    node* root = NULL, * nn;
//    int ch, n;
//    ch = selectOption();
//
//    while (ch != 0)
//    {
//        if (ch == 1)
//        {
//            nn = new node();
//            nn->left = NULL;
//            nn->right = NULL;
//            printf("enter value: ");
//            scanf_s("%d", &nn->data);
//            root = insert_BST(root, nn);
//        }
//        else if (ch == 2)
//        {
//
//        }
//        else if (ch == 3)
//        {
//            printf("enter value to search: ");
//            scanf_s("%d", &n);
//            if (search_BST(root, n) == NULL)
//            {
//                printf("not found\n\n");
//            }
//            else
//            {
//                printf("found\n\n");
//            }
//        }
//        else if (ch == 4)
//        {
//            inorder(root);
//            printf("\n\n");
//        }
//        else if (ch == 5)
//        {
//            preorder(root);
//            printf("\n\n");
//        }
//        else if (ch == 6)
//        {
//            postorder(root);
//            printf("\n\n");
//        }
//        else
//        {
//            printf("invalid choice.\n\n");
//        }
//        ch = selectOption();
//    }
//
//}
//
//int selectOption()
//{
//    printf("1. Insert\n");
//    printf("2. Delete\n");
//    printf("3. Search\n");
//    printf("4. Inorder\n");
//    printf("5. Preorder\n");
//    printf("6. Postorder\n");
//    printf("0. Exit\n");
//    printf("Enter your choice: ");
//    int ch;
//    scanf_s("%d", &ch);
//    return ch;
//}
//
//node* insert_BST(node* root, node* nn)
//{
//    node* temp = root;
//    if (temp == NULL)
//    {
//        return nn;
//    }
//    else if (nn->data < temp->data)
//    {
//        temp->left = insert_BST(temp->left, nn);
//    }
//    else
//    {
//        temp->right = insert_BST(temp->right, nn);
//    }
//    return root;
//}
//
//void inorder(node* root)
//{
//    if (root != NULL)
//    {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//void preorder(node* root)
//{
//    if (root != NULL)
//    {
//        printf("%d ", root->data);
//        preorder(root->left);
//        preorder(root->right);
//    }
//}
//
//void postorder(node* root)
//{
//    if (root != NULL)
//    {
//        postorder(root->left);
//        postorder(root->right);
//        printf("%d ", root->data);
//    }
//}
//
//node* search_BST(node* temp, int n)
//{
//    if (temp == NULL || temp->data == n)
//    {
//        return temp;
//    }
//    else if (n < temp->data)
//    {
//        temp = search_BST(temp->left, n);
//    }
//    else
//    {
//        temp = search_BST(temp->right, n);
//    }
//}