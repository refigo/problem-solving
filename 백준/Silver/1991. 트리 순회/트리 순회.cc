#include <bits/stdc++.h>
using namespace std;

struct Node {
	char	name;
	Node*	left;
	Node*	right;
};

int n;
char first, second, third;

Node*	find_node(Node* root, char to_find) {
	Node* ret_found = NULL;

	if (!root) {
		return NULL;
	}
	if (root->name == to_find) {
		return root;
	}

	if (root->left) {
		ret_found = find_node(root->left, to_find);
	}
	if (!ret_found && root->right) {
		ret_found = find_node(root->right, to_find);
	}
	return ret_found;
}

void preorder(Node* root) {
	cout << root->name;
	if (root->left) {
		preorder(root->left);
	}
	if (root->right) {
		preorder(root->right);
	}
}

void inorder(Node* root) {
	if (root->left) {
		inorder(root->left);
	}
	cout << root->name;
	if (root->right) {
		inorder(root->right);
	}
}

void postorder(Node* root) {
	if (root->left) {
		postorder(root->left);
	}
	if (root->right) {
		postorder(root->right);
	}
	cout << root->name;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;

	// init root node
	Node root;
	root.name = 'A';
	root.left = NULL;
	root.right = NULL;

	// setting nodes
	while (n--) {
		cin >> first >> second >> third;
		// cout << "testprint: " << first << second << third << '\n';
		
		// find_node
		Node *found_node = find_node(&root, first);
		if (!found_node) {
			cerr << "found node error\n";
			return 1;
		}
		
		// set info in found node
		if (second != '.') {
			found_node->left = (Node*)malloc(sizeof(Node));
			if (found_node->left != NULL) {
				found_node->left->name = second;
			} else {
				cerr << "malloc failed\n";
				return 1;
			}
		}
		if (third != '.') {
			found_node->right = (Node*)malloc(sizeof(Node));
			if (found_node->right != NULL) {
				found_node->right->name = third;
			} else {
				cerr << "malloc failed\n";
				return 1;
			}
		}
	}

	// preorder
	preorder(&root);
	cout << '\n';

	// inorder
	inorder(&root);
	cout << '\n';

	// postporder
	postorder(&root);
	cout << '\n';	

	return 0;
}