#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head = NULL;

class LinkList {
public:
	void tail(int d) {
		Node* node = new Node;
		node->data = d;
		node->next = NULL;
		if (head == NULL) {
			head = node;
		}
		else {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = node;
		}
	}
	void del(int target) {
		
		if (head == NULL)
			return;
		Node* temp= head;
		Node* prev=NULL;
		
		if (temp != NULL && temp->data == target) {
			head = temp->next;
			delete temp;
			cout << "\nNode with value " << target << " has been deleted " << endl;
			return;
		}

		while (temp != NULL && temp->data != target) {
			prev = temp;
			temp = temp->next; 
		}
		
		if (temp == NULL) {
			cout << "Value not found in list " << endl;
			return;
			}

				prev->next = temp->next;
				delete temp;

				cout << "Node with value " << target << " has been deleted " << endl;
		
		
	}

	
	void display() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;

	}
};

int main() {
	LinkList l;
	int d, b;
	char choice, ch, c;
	do {
		cout << "Enter A to insert value in link list\n"
			<< "Enter B to display values of link list\n"
			<< "Enter C to delete a value of link list" << endl;
		cin >> ch;
		switch (ch) {
		case 'A':

			do {
				cout << "\nEnter a Number you want to enter in the linklist : ";
				cin >> d;
				l.tail(d);
				cout << "\nDo you want Enter anthoer Number in the linklist(Enter 'y'/'n') : ";
				cin >> choice;


			} while (choice == 'y' || choice == 'Y');
			break;
		case 'B':
			l.display();
			break;
		case 'C':
			cout << "Existing Linklist :";
			l.display();
			cout << "\nEnter a Number you want to delete from linklist : ";
			cin >> b;
			l.del(b);
			cout << "\nUpdated Linklist :";
			l.display();
			break;
		default:
			cout << "Invalid command " << endl;
			break;
		}
		cout << "\nDo you want to continue (Enter 'y'/'n'):";
		cin >> c;
		system("cls");
	} while (c == 'y' || c == 'Y');

	return 0;
}