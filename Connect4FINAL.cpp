#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void welcome(int& selecter) {
   cout << "              Welcome to Connect4            " << endl;
   cout << "      The goal of Connect4 is to be first     " << endl;
   cout << " player to place four checkers in a row, either" << endl;
   cout << "    horizontally, vertically or diagonally.    " << endl << endl;
   int playerSelection = rand() % 2;
       if (playerSelection == 0) {
            selecter = 1;
       }
       else {
           selecter = 0;
    
       }
}

void initGrid(char grid[][7], int row) {
   for (int i = 0; i < row; i++) {
       for (int j = 0; j < 7; j++) {
           grid[i][j] = ' ';
       }
   }
}

void displayGrid(char grid[][7],int row) {
    cout << "        " ;
   for (int i = 0; i < 7; i++) {
       cout << "  " << (i + 1)<<" ";
   }
   cout << endl;
   for (int i = 0; i < row; i++) {
       cout << "        " ;
       for (int j = 0; j < 7; j++) {
           cout << "| " << grid[i][j] << " ";
       }
       cout <<"|"<< endl;
       cout << "        " ;
       for (int j = 0; j < 7; j++) {
           cout << "+---";
       }
       cout << "+" << endl;
   }
}
void fillGrid(char grid[][7], int row, char sym,int col) {
   for (int i = row - 1; i >= 0; i--) {
       if (grid[i][col - 1] == ' ') {
           grid[i][col - 1] = sym;
           return;
       }
   }
}
//bool gameOver(char grid[][7], int row);
bool gameOver(char grid[][7], int rowCnt) {
   //This is Horizontal check
   for (int row = 0; row <rowCnt; row++) {
       for (int col = 0; col < 4; col++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row][col + 1] && grid[row][col] == grid[row][col + 2] && grid[row][col] == grid[row][col + 3]) {
               return true;
           }
       }
   }
   //Here we have Vertical check
   for (int col = 0; col <rowCnt; col++) {
       for (int row = 0; row <4; row++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row + 1][col] && grid[row][col] == grid[row + 2][col] && grid[row][col] == grid[row + 3][col]) {
               return true;
           }
       }
   }
 //Here we have Diagonal start check
   for (int row = 0; row < rowCnt-3; row++) {
       for (int col = 0; col <4; col++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row + 1][col + 1] && grid[row][col] == grid[row + 2][col + 2] && grid[row][col] == grid[row + 3][col + 3]) {
               return true;
           }
       }
   }
   // Here we have Diagonal end check
   for (int row = 0; row < rowCnt- 3; row++) {
       for (int col = 3; col < 7; col++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row + 1][col - 1] && grid[row][col] == grid[row + 2][col - 2] && grid[row][col] == grid[row + 3][col - 3]) {
               return true;
           }
       }
   }
   return false;
}

int main(){
   //Displaying welcome message
   bool checkPlayer1 = false, checkPlayer2 = false;
   int check = 0;
   bool balance = 1;
   while(balance == 1){
       //int selecter;
    bool selecter = welcome(check);
        if(selecter == 1){
    cout << "              Player #1 selected" << endl;
        checkPlayer1 = true;
        balance = 0;
        }else{
            cout << "              Player #2 selected" << endl;
            checkPlayer2 = true;
        balance = 0;
    }
   }
    //Creating a grid to play
;   char grid[6][7];
   //Playing game until user wishes to stop
   while (true) {
       //Variable for play
       char player1 = 'x', player2 = 'o', choice;
       int col;
       
       //Declaration of empty grid
       initGrid(grid, 6);
       //Displaying grid
       displayGrid(grid, 6);
       //Choose game starter randomly
       //int playerSelection = rand() % 2;
       //According to display
      /* if (playerSelection == 0) {
           cout << "              Player #1 selected" << endl;
           checkPlayer1 = true;
       }
       else {
           cout << "              Player #2 selected" << endl;
           checkPlayer2 = true;
       }
       */
       //Loop until a game over
       while (!gameOver(grid, 6)) {
           //This is the Player1 game
           if (checkPlayer1 == true) {
               //Get player choice
               cout << "     Player #1 Turn (o): Enter your mover: ";
               cin >> col;
               //Error check
               while (col < 1 || col>7) {
                   cout << "     Invalid choice!1Plaese enter 1-7" << endl;
                   cout << "     Player #1 Turn (o): Enter your mover: ";
                   cin >> col;
               }
               //Fill play rsymbol
               fillGrid(grid, 6, player1, col);
               cout << endl;
               //Condition to check winner
               displayGrid(grid, 6);
               checkPlayer1 = false;
               checkPlayer2 = true;
               if (gameOver(grid, 6)) {
                   cout << endl << "             Player #1 win" << endl;
                   break;
               }
           }
//Player2 game
           else if (checkPlayer2 == true) {
               //Promoting for player2
               cout << "     Player #2 Turn (o): Enter your mover: ";
               cin >> col;
               //This is Error check
               while (col < 1 || col>7) {
                   cout << "     Invalid choice!1Plaese enter 1-7" << endl;
                   cout << "     Player #2 Turn (o): Enter your mover: ";
                   cin >> col;
               }
               //Fill symbol
               fillGrid(grid, 6, player2, col);
               checkPlayer2 = false;
               checkPlayer1 = true;
               cout << endl;
               //Check winn case
               displayGrid(grid, 6);
               if (gameOver(grid, 6)) {
                   cout << endl << "             Player #2 win" << endl;
                   break;
               }
           }
       }
       //Repetirion for next game
       cout << "     Do you want to play again(y/n)? ";
       cin >> choice;
       if (choice == 'n'){
           break;
       }
   }
   return 0;
}
//Function for displaying message
/*void welcomeMsg() {
   cout << "\t\tWelcome to Connect4\n\tThe goal of Connect4 is to be first\n"
       << "player to place four checkers in a row, either\n\t horizontally, vertically or diagonally.\n\n";
}
*/
//Function filling array with empty
/*void initGrid(char grid[][7], int row) {
   for (int i = 0; i < row; i++) {
       for (int j = 0; j < 7; j++) {
           grid[i][j] = ' ';
       }
   }
}
*/
//Displaying formatted grid
/*void displayGrid(char grid[][7],int row) {
   for (int i = 0; i < 7; i++) {
       cout << " " << (i + 1)<<" ";
   }
   cout << endl;
   for (int i = 0; i < row; i++) {
       for (int j = 0; j < 7; j++) {
           cout << "| " << grid[i][j] << " ";
       }
       cout <<"|"<< endl;
       for (int j = 0; j < 7; j++) {
           cout << "+---";
       }
       cout << "+" << endl;
   }
}
*/
//Here we are checking game over if any winner is there
/*bool gameOver(char grid[][7], int rowCnt) {
   //This is Horizontal check
   for (int row = 0; row <rowCnt; row++) {
       for (int col = 0; col < 4; col++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row][col + 1] && grid[row][col] == grid[row][col + 2] && grid[row][col] == grid[row][col + 3]) {
               return true;
           }
       }
   }
   //Here we have Vertical check
   for (int col = 0; col <rowCnt; col++) {
       for (int row = 0; row <4; row++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row + 1][col] && grid[row][col] == grid[row + 2][col] && grid[row][col] == grid[row + 3][col]) {
               return true;
           }
       }
   }
 //Here we have Diagonal start check
   for (int row = 0; row < rowCnt-3; row++) {
       for (int col = 0; col <4; col++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row + 1][col + 1] && grid[row][col] == grid[row + 2][col + 2] && grid[row][col] == grid[row + 3][col + 3]) {
               return true;
           }
       }
   }
   // Here we have Diagonal end check
   for (int row = 0; row < rowCnt- 3; row++) {
       for (int col = 3; col < 7; col++) {
           if (grid[row][col] != ' '&& grid[row][col] == grid[row + 1][col - 1] && grid[row][col] == grid[row + 2][col - 2] && grid[row][col] == grid[row + 3][col - 3]) {
               return true;
           }
       }
   }
   return false;
}
*/
//Filling a grid with passed symbol
/*void fillGrid(char grid[][7], int row, char sym,int col) {
   for (int i = row - 1; i >= 0; i--) {
       if (grid[i][col - 1] == ' ') {
           grid[i][col - 1] = sym;
           return;
       }
   }
}
*/
