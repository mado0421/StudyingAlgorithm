#include <iostream>
#include <iostream>

using namespace std;

enum class Commend {
	PUSH,
	POP,
	SIZE,
	EMPTY,
	FRONT,
	BACK,
};
Commend SortOut(const char* str) {
	if (0 == strcmp(str, "push")) return Commend::PUSH;
	else if (0 == strcmp(str, "pop")) return Commend::POP;
	else if (0 == strcmp(str, "size")) return Commend::SIZE;
	else if (0 == strcmp(str, "empty")) return Commend::EMPTY;
	else if (0 == strcmp(str, "front")) return Commend::FRONT;
	else return Commend::BACK;
}

struct Node {
	Node(int v) :value(v), prev(nullptr), next(nullptr) {}

	int value;

	Node* prev;
	Node* next;
};

/*		back	 front
* push ⊥ head	  tail ⊥ pop
*		 ⊿		  ⊿
*		 忙式成式成式成式成式忖
*		 戌式扛式扛式扛式扛式戎
*		  ∠      ⊥
*	    prev    next
*/

int main() {
	int nCommend, size = 0;
	char str[6];
	Node* head = nullptr;
	Node* tail = nullptr;

	cin >> nCommend;

	while (nCommend--) {
		cin >> str;

		switch (SortOut(str))
		{
		case Commend::PUSH:
		{

			int value;
			cin >> value;
			Node* n = new Node(value);
			if (0 == size) {
				head = n;
				tail = n;
			}
			else if (1 == size) {
				head = n;
				head->next = tail;
				tail->prev = head;
			}
			else {
				n->next = head;
				head->prev = n;
				head = n;
			}
			size++;
		}
		break;
		case Commend::POP:
			if (0 == size) {
				cout << "-1\n";
			}
			else if (1 == size) {
				cout << tail->value << "\n";

				delete tail;


				head = nullptr;
				tail = nullptr;

				size--;
			}
			else {
				cout << tail->value << "\n";

				tail = tail->prev;
				delete tail->next;
				tail->next = nullptr;

				size--;
			}
			break;
		case Commend::SIZE:
			cout << size << "\n";
			break;
		case Commend::EMPTY:
			if (size) cout << "0\n";
			else cout << "1\n";
			break;
		case Commend::FRONT:
			if (tail) cout << tail->value << "\n";
			else cout << "-1\n";
			break;
		case Commend::BACK:
			if (head) cout << head->value << "\n";
			else cout << "-1\n";
			break;
		}
	}

	return 0;
}