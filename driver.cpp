//Author: Ashley Eubanks
//

#include <fstream>
#include <iostream>
using namespace std;

void displayMenuOption();

int getMenuOption() {
  int userChoice;
  cout << "1. Add Patron" << endl;
  cout << "2. Remove Patron" << endl;
  cout << "3. Modify Patron" << endl;
  cout << "4. View Patron" << endl;
  cout << "0. Exit" << endl;
  cin >> userChoice;

  /*if (userChoice =! 1 || 2 || 3 || 4 || 0) {
    cout << "Invalid" << endl;
  }*/
  return userChoice;
}

void printFileNotFound();

void displayModOptions();

void displayRideMenu();

int getModOption();


int main(){

  int menuChoice = getMenuOption();
  switch (menuChoice) {
    case 1: getMenuOption();//calls to add patron function
      break;
    case 2: getMenuOption();//calls to remove patron function
      break;
    case 3: getMenuOption();//calls to modify patron function
      break;
    case 4: getMenuOption();//calls to view patron function
      break;
    /*case 0: //exits funtction
      break;*/
    default:
      break;
  }
}

/*int getMenuOption() {
  int userChoice;
  cout << "1. Add Patron" << endl;
  cout << "2. Remove Patron" << endl;
  cout << "3. Modify Patron" << endl;
  cout << "4. View Patron" << endl;
  cout << "0. Exit" << endl;
  cin >> userChoice;

  if (userChoice =! 1 || 2 || 3 || 4 || 0) {
    cout << "Invalid" << endl;
  }
  return userChoice;
}*/

void displayModOptions(){

}

void displayMenuOption(){

}

void displayRideMenu(){

}

int getModOption(){

}

int getMenuOption(){

}

void printFileNotFound(){

}


