#include<iostream>
using namespace std;

//global variables
string inventory[10];

//function declarations
void MonsterGen();
void itemDropper();

int main() {
	//initialize it with all empty spaces
	for (int i = 0; i < 10; i++)
		inventory[i] = " ";

	cout << "Welcome to the text based game!" << endl;

	//local variables
	int room = 1;
	char input;

	while (1) { //game loop

		cout << "your inventory:" << endl;
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " ";
		cout << endl;
		switch (room) {
		case 1:
			MonsterGen();
			cout << "you're in room 1, you can go (s)outh." << endl;
			if (inventory[0] != "key")
				cout << "On the ground there is an old (k)ey." << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			else
				
			if (input == 'k') {
				cout << "you got an old key!" << endl;
				inventory[0] = "key";
			}
			break;
		case 2:
			MonsterGen();//function call
			cout << "you're in room 2, you can go (n)orth or (e)ast." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 'n')
				room = 1;
			else if (input == 'e')
				room = 3;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 3:
			MonsterGen();
			cout << "a dragon appears!" << endl;
			cout << "you're in room 3, you can go (w)est or (s)outh." << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			else if (input == 's')
				room = 4;
			else
				
			break;
		case 4:
			MonsterGen();
			cout << "you're in room 4, you can go (n)orth or (s)outh." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 's')
				room = 5;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 5:
			MonsterGen();
			cout << "you're in room 5, you can go (n)orth or (e)ast." << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			else if (input == 'e')
				room = 6;
			else
				
			break;
		case 6:
			MonsterGen();
			cout << "you're in room 6, you can go (w)est or (e)ast." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 'w')
				room = 5;
			else if (input == 'e')
				room = 7;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 7:
			MonsterGen();
			cout << "you're in room 7, you can go (w)est or (n)orth." << endl;
			cin >> input;
			if (input == 'w')
				room = 6;
			else if (input == 'n')
				room = 8;
			else
				
			break;
		case 8:
			MonsterGen();
			cout << "you're in room 8, you can go (s)outh or (e)ast." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 's')
				room = 7;
			else if (input == 'e')
				room = 9;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 9:
			MonsterGen();
			cout << "you're in room 9, you can go (w)est or (n)orth." << endl;
			cin >> input;
			if (input == 'w')
				room = 8;
			else if (input == 'n')
				room = 10;
			else
				
			break;
		case 10:
			MonsterGen();
			cout << "you're in room 10, you can go (s)outh or (n)orth." << endl;
			cin >> input;
			if (input == 's')
				room = 9;
			else if (input == 'n')
				room = 11;
			else
				
			break;
		case 11:
			MonsterGen();
			cout << "you're in room 11, you can go (w)est or (e)ast." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 's')
				room = 10;
			else if (input == 'e')
				room = 12;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 12:
			MonsterGen();
			cout << "you're in room 12, you can go (w)est or (n)orth." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 'w')
				room = 11;
			else if (input == 'n')
				room = 13;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 13:
			MonsterGen();
			cout << "you're in room 13, you can go (s)outh or (n)orth." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 's')
				room = 12;
			else if (input == 'n')
				room = 14;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		case 14:
			MonsterGen();
			cout << "you're in room 14, you can go (s)outh or (e)ast." << endl;
			cin >> input;
			if (input == 's')
				room = 13;
			else if (input == 'e')
				room = 15;
			else
				
			break;
		case 15:
			MonsterGen();
			cout << "you're in room 15, you can return and go (w)est." << endl;
			cout << "theres a rusty (b)ox in the room" << endl;
			cin >> input;
			if (input == 'w')
				room = 14;
			if (input == 'b')
				itemDropper();
			else
				
			break;
		}
	}
}


void MonsterGen() {
	int num = rand() % 200; //creates a random num b/t 0-99
	if (num < 20)
		cout << "a skeleton spawned!" << endl;
	else if (num < 50)
		cout << "a spider appears!" << endl;
	else if (num < 70)
		cout << "a zombie attacks you!" << endl;
	else
		cout << "nothing spawned" << endl;
}

void itemDropper() {
	int num = rand() % 100; // b/t 0-99
	if (num < 25) {
		cout << "you got a dirty sock!" << endl;
		inventory[1] = "sock";
	}
	else if (num < 50) {
		cout << "you got a handful of legos!" << endl; \
			inventory[2] = "legos";
	}
	else if (num < 60) {
		cout << "you got a CHICKEN" << endl;

	}
	else {
		cout << "tough luck buddy, this one's empty" << endl;
	}
}
