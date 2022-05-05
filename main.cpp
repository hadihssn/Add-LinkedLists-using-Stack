#include "LinkedList.h"
#include "Stack.h"
int main()
{
	cout << "\nLinked List # 1\n";
	LinkedList* head = NULL;
	
	head->insertNode(head, 1);
	head->insertNode(head, 2);
	head->insertNode(head, 3);

	head->display(head);

	cout << "\n\nLinked List # 2\n";
	LinkedList* head2 = NULL;

	head2->insertNode(head2, 4);
	head2->insertNode(head2, 5);
	head2->insertNode(head2, 6);

	head2->display(head2);

	cout << "\n\nStack # 1\n";
	Stack one(3);
	one.display();

	cout << "\n\nSum of linked lists through stack\n";
	one.sum(head, head2);
	
	cout << "\n\nElements of stack are: \n";
	one.display();


	cout << "\n\n";
	system("pause");
	return 0;
}
