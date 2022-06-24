//#include<stdio.h>
//struct Node {
//    int data;
//    struct Node* left, * right;
//};
//typedef struct Node node;
//int sumofLeft = 0;
//int sumofRight = 0;
//int nextprime = 0;
//node* minValueNode(node* temp)
//{
//    node* current = temp;
//    while (current->left != NULL)
//        current = current->left;
//
//    return current;
//}
//
//node* deleteNode(node* root, int key)
//{
//    // base case
//    if (root == NULL) {
//        puts("                                              >>>>> Operation faild (data not found) <<<<<");
//        return root;
//    }
//
//    // If the key to be deleted
//    // is smaller than the root's
//    // key, then it lies in left subtree
//    if (key < root->data)
//        root->left = deleteNode(root->left, key);
//
//    // If the key to be deleted
//    // is greater than the root's
//    // key, then it lies in right subtree
//    else if (key > root->data)
//        root->right = deleteNode(root->right, key);
//
//    // if key is same as root's key,
//    // then This is the node
//    // to be deleted
//    else {
//        // node with only one child or no child
//        if (root->left == NULL) {
//            node* temp = root->right;
//            delete(root);
//            return temp;
//        }
//        else if (root->right == NULL) {
//            node* temp = root->left;
//            delete(root);
//            return temp;
//        }
//
//        // node with two children:
//        // Get the inorder successor
//        // (smallest in the right subtree)
//        node* temp = minValueNode(root->right);
//
//        // Copy the inorder
//        // successor's content to this node
//        root->data = temp->data;
//
//        // Delete the inorder successor
//        root->right = deleteNode(root->right, temp->data);
//    }
//    return root;
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
//    printf("7. Sum of left - right subtree\n");
//    printf("8. next prime\n");
//    printf("0. Exit\n");
//    printf("Enter your choice: ");
//    int ch;
//    scanf_s("%d", &ch);
//    return ch;
//}
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
//    else {
//        temp->right = insert_BST(temp->right, nn);
//    }
//    return root;
//}
//void inorder(node* root)
//{
//    if (root != NULL)
//    {
//        inorder(root->left);
//        printf("%d, ", root->data);
//        inorder(root->right);
//    }
//}
//void preorder(node* root)
//{
//    if (root != NULL) {
//        printf("%d, ", root->data);
//        preorder(root->left);
//        preorder(root->right);
//    }
//}
//void postorder(node* root)
//{
//    if (root != NULL)
//    {
//        postorder(root->left);
//        postorder(root->right);
//        printf("%d, ", root->data);
//    }
//}
//node* BST_search(node* root, int value)
//{
//
//    if (root == NULL || root->data == value)
//        return root;
//    else if (value < root->data)
//    {
//        root = BST_search(root->left, value);
//    }
//    else root = BST_search(root->right, value);
//
//}
//
//void sumLeft(node* root)
//{
//   
//    if (root != NULL)
//    {
//        sumLeft(root->left);
//        sumofLeft = (sumofLeft + root->data);
//        sumLeft(root->right);
//    }
//}
//void sumRight(node* root)
//{
//    if (root != NULL)
//    {
//        sumRight(root->left);
//        sumofRight = sumofRight + root->data;
//        sumRight(root->right);
//    }
//}
//int calculateSum(node* root)
//{
//    int diff;
//    sumLeft(root->left);
//    sumRight(root->right);
//    diff = sumofLeft - sumofRight;
//   
//    return diff;
//
//}
//int isprime(int n)
//{
//    for (int i = 2; i < n ; i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//void findNextPrime(node* root, int n)
//{
//    
//    if (root != NULL)
//    {
//        findNextPrime(root->left, n);
//        if (root->data > n)
//        {
//            if (isprime(root->data))
//            {
//                nextprime = root->data;
//            }
//        }
//        findNextPrime(root->right, n);
//    }
//}
//void getNextPrime()
//{
//    int number = nextprime;
//    number += 100;
//    for (int i = nextprime+1 ; i <= number; i++)
//    {
//        if (isprime(i))
//        {
//            nextprime = i;
//            break;
//        }
//    }
//}
//
//
//int main()
//{
//    int ch, n;
//    node* root = NULL, * nn;
//    while (ch = selectOption())
//    {
//        if (ch == 1)
//        {
//            nn = new node();
//            nn->left = NULL;
//            nn->right = NULL;
//            printf("Enter data >> "); scanf_s("%d", &nn->data);
//            root = insert_BST(root, nn);
//            puts("                                              >>>>> Data inserted successfully <<<<<");
//        }
//        else if (ch == 2)
//        {
//            printf("Enter data to delete -> ");
//            int key;
//            scanf_s("%d", &key);
//            root = deleteNode(root, key);
//        }
//        else if (ch == 3)
//        {
//            int value;
//            printf("Enter value to search -> ");
//            scanf_s("%d", &value);
//            if (BST_search(root, value) == NULL)
//            {
//                puts("                                              >>>>> Not found <<<<<");
//            }
//            else puts("                                              >>>>> Found <<<<<");
//        }
//        else if (ch == 4)
//        {
//            if (root != NULL)
//            {
//                inorder(root);
//                puts("");
//            }
//            else puts("                                              >>>>> no data fount <<<<<");
//        }
//        else if (ch == 5)
//        {
//            if (root != NULL)
//            {
//                preorder(root);
//                puts("");
//            }
//            else puts("                                              >>>>> no data fount <<<<<");
//        }
//        else if (ch == 6)
//        {
//            if (root != NULL)
//            {
//                postorder(root);
//                puts("");
//            }
//            else puts("                                              >>>>> no data fount <<<<<");
//
//        }
//        else if (ch == 7)
//        {
//            int diff = calculateSum(root);
//            if (diff < 0)
//                diff = -1 * diff;
//            printf("Diff of left and right is ->>> %d\n", diff);
//            sumofLeft = sumofRight = 0;
//        }
//        else if (ch == 8)
//        {
//            int n;
//            printf("Enter a value ->> ");
//            scanf_s("%d", &n);
//            
//            findNextPrime(root, n);
//            getNextPrime();
//            printf("in the tree nextprime not in tree is ->> %d\n", nextprime);
//            nextprime = 0;
//        }
//        else puts("                                                         wrong input\n                                                   >>>> please try again <<<<");
//    }
//
//    return 0;
//}