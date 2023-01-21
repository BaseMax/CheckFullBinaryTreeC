#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct bin_tree
{
    int data;
    struct bin_tree *left;
    struct bin_tree *right;
};

struct bin_tree *create_node(int data)
{
    struct bin_tree *node = (struct bin_tree *)malloc(sizeof(struct bin_tree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int number_of_nodes(struct bin_tree *root)
{
    if (root == NULL) return 0;
    return (1 + number_of_nodes(root->left) + number_of_nodes(root->right));
}

// int number_of_nodes_dynamic(struct bin_tree *root)
// {
//     int count = 0;
//     struct bin_tree *queue[100];
//     int front = 0, rear = 0;
//
//     queue[rear++] = root;
//     while (front != rear)
//     {
//         struct bin_tree *node = queue[front++];
//         count++;
//         if (node->left != NULL)
//             queue[rear++] = node->left;
//         if (node->right != NULL)
//             queue[rear++] = node->right;
//     }
//
//     return count;
// }

bool is_full_bin(struct bin_tree *root)
{
    int nodes = number_of_nodes(root);
    int mylog = log2(nodes) + 1;

    return (
        nodes == (1 << mylog) - 1
    );
}

int main(int argc, char** argv)
{
    // Create a binary tree
    struct bin_tree *root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->left->right = create_node(5);
    root->right->left = create_node(6);
    root->right->right = create_node(7);
    root->left->left->left = create_node(8);
    root->left->left->right = create_node(9);
    root->left->right->left = create_node(10);
    root->left->right->right = create_node(11);
    root->right->left->left = create_node(12);
    root->right->left->right = create_node(13);
    root->right->right->left = create_node(14);

    if (is_full_bin(root))
        printf("The binary tree is full binary tree\n");
    else
        printf("The binary tree is not full binary tree\n");

    root->right->right->right = create_node(15);

    if (is_full_bin(root))
        printf("The binary tree is full binary tree\n");
    else
        printf("The binary tree is not full binary tree\n");

    return 0;
}
