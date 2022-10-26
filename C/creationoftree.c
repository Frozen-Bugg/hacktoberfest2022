#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *left_child, *right_child;
};

struct node *new_node(int value)
{
	struct node *tmp = (struct node *)malloc(sizeof(struct node));
	tmp->value = value;
	tmp->left_child = tmp->right_child = NULL;
	return tmp;
}

void print(struct node *root_node) // displaying the nodes!
{
	if (root_node != NULL)
	{
		print(root_node->left_child);
		printf("%d \n", root_node->value);
		print(root_node->right_child);
	}
}

struct node* insert_node(struct node* node, int value) // inserting nodes!
{

	if (node == NULL) 
		return new_node(value);
	if (value < node->value)
	{
		node->left_child = insert_node(node->left_child, value);
	}
	else if (value > node->value)
	{
		node->right_child = insert_node(node->right_child, value);
	}
	return node;
}



int main()
{
	struct node *root_node = NULL;
	int choice;
	do 
	{	
		printf("1.Insert \n");
		printf("2.Delete \n");
		printf("3.Display \n");
		printf("4.Postorder traversal\n");
		printf("5.Preorder traversal\n");
		printf("6.Inorder traversal\n");
		printf("7.Quit \n");
		scanf("%d", &choice);
		int n;


		switch (choice) 
		{
			case 1:
				scanf("%d", &n);
				root_node = insert_node(root_node, n);
				// insert_node(root_node, n);
				break;
			case 2:
				// delete();
				break;
			case 3:
				print(root_node);
				break;
			case 4:
				// postorder();
				break;
			case 5:
				// preorder();
				break;
			case 6:
				// inorder();
				break;
			case 7:
				break;
				
			default:
				printf("Wrong choice \n");

		}
	}while(choice != 7);
}
//7 node bst
//inorder display


