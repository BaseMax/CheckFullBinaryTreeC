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

    return (nodes == (1 << (int)(log2(nodes) + 1)) - 1);
}
