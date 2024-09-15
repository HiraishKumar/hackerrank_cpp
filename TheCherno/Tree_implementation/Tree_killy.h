#pragma once

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data) : data(data), left(nullptr), right(nullptr) {};
};


class Tree {
public:
    Node* root;
    Tree() : root(nullptr) {};

    void add(int num);
    void display_preorder(Node* node) const;
    void display_inorder(Node* node) const;
    void display_postorder(Node* node) const;


};