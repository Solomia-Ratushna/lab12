#include <iostream>
using namespace std;
typedef int Info;
struct Node
{
	Node* left,
		* right;
	Info info;
};
Node* CreateTree(int nodeCount);
int main()
{
	int N;
	cout << "Enter nodes count: "; cin >> N;
	Node* root = CreateTree(N);
	cout << "Kilkist " << N;
	return 0;
}
int Count(Node* root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + Count(root->left) + Count(root->right);
}
Node* CreateTree(int nodeCount)
{
	if (nodeCount == 0)
		return NULL;
	
	else
	{
		Node* newNode = new Node;

		cout << " Enter node value: ";
		cin >> newNode->info;

		int leftCount = nodeCount / 2;
		int rightCount = nodeCount - leftCount - 1;
		newNode->left = CreateTree(leftCount);
		newNode->right = CreateTree(rightCount);
		return newNode;
	}
}



