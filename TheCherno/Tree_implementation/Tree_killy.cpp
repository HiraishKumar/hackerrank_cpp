#include "Tree_killy.h"
#include <iostream>;

using namespace std;


void Tree::display_preorder(Node* root) const {
	cout << root->data << endl;
	display_preorder(root->left);
	display_preorder(root->right);
}

void Tree::display_inorder(Node* root) const {
	display_inorder(root->left);
	cout << root->data << endl;
	display_inorder(root->right);
}

void Tree::display_postorder(Node* root) const {
	display_postorder(root->left);
	display_postorder(root->right);
	cout << root->data << endl;
}

void Tree::add(int num) {
	root = this->root;
	add_recursive(num, root);
	return;
}

void Tree::add_recursive(int num, Node* root) {
	if (!root) return ;

	if (num < root->data) {
		if (!root->left) {
			Node* leaf = new Node(num);
			root->left = leaf;
			return;
		}
		else {
			add_recursive(num, root->left);
		}
	}
	else {
		if (!root->right) {
			Node* leaf = new Node(num);
			root->right = leaf;
			return;
		}
		else {
			add_recursive(num, root->right);
		}
	}
};

void Tree::remove(int target) {
	root = this->root;
	remove_recursive(target, root);
	return;
};

//TODO
void Tree::remove_recursive(int target, Node* root) {

	if (target < root->right->data) {
		remove_recursive(target, root->left);
	}
	else if (target > root->data) {
		remove_recursive(target, root->right);
	}
	else {
		if (!root->left && !root->right) {
			delete(root);
			return;
		}
		else if (root->right) {
			root->left = root->right->left;
			root->right = root->right->right;

		}
	}
};

Node* Tree::find(int target) const {
	Node* root = this->root;
	return binary_search_recursive(target, root);
};

Node* Tree::binary_search_recursive(int target, Node* root) const {
	if (!root) return nullptr;

	if (target == root->data) {
		return root;
	}

	else if (target > root->data) {
		binary_search_recursive(target, root->right);
	}

	else if (target < root->data) {
		binary_search_recursive(target, root->left);
	}
};

void Tree::depth(int target) const{

};

void Tree::depth_from(int target, Node* origin ,int depth=0) const {
	if (target == root->data) {
		cout << "Found at depth: " << depth << endl;

	}
};
