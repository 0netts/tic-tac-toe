#include <iostream>
#include <string>

int  main() {
  system("clear");
  int x,y;
   char board[3][3] {
      {'.', '.', '.'},
      {'.', '.', '.'},
      {'.', '.', '.'},
    };
  bool PlayerVictory = false;

  while (!PlayerVictory) {
      for (int y = 0; y < 3; y++) {
          for (int x = 0; x < 3; x++) {
              std::cout << board[y][x] << " ";
          }
          std::cout << std::endl;
      }


      std::cout << "Player 1 please Enter your possition: ";
      std::cin >> x >> y;
      if (board[y-1][x-1] != '.') {
          std::cout << "busy!! \n";
          continue;
      }

      board[y-1][x-1] = 'x';
      if ((board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x') ||
          (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x') ||
          (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x') ||
          (board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x') ||
          (board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x') ||
          (board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x') ||
          (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') ||
          (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x')) {
              PlayerVictory = true;
              std::cout << "Player 1 is win!!\n";
              break;
          }

     std::cout << "PLayer 2 please ENter your possition: ";
      std::cin >> x >> y;
      if (board[y-1][x-1] != '.') {

          std::cout << "busy!! \n";
          continue;
      }
      board[y-1][x-1] = 'o';
      if ((board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o') ||
          (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o') ||
          (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o') ||
          (board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o') ||
          (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o') ||
          (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o') ||
          (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') ||
          (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o')) {
              PlayerVictory = true;
              std::cout << "Player 2 is win!!\n";
              break;
          }

  }

 return 0;
}
