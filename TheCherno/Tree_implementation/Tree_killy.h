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
    void add_recursive(int num, Node* root);
    void remove(int target);
    void remove_recursive(int target, Node* root); //TODO
    void display_preorder(Node* root) const;
    void display_inorder(Node* root) const;
    void display_postorder(Node* root) const;
    Node* find(int target) const;
    Node* binary_search_recursive(int target, Node* root) const;
    void depth(int target) const;
    void depth_from(int target, Node* origin ,int depth=0) const;

};