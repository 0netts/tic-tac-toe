include<iostream>


bool isVictory = false; 

bool isWon(char board[3][3], char res) {
   for (int i  = 0; i < 3;i++) {
       if (board[0][i] == res && board[1][i] == res && board[2][i] == res) { return true;}
   }
   for (int x = 0; x < 3;x++) {
       if (board[x][0] == res && board[x][1] == res && board[x][2] == res) {return true;}
   }
   
   if (board[0][0] == res && board[1][1] == res && board[2][2] == res) {
        return true;
   }
   if (board[0][2] == res && board[1][1] == res && board[2][0] == res) { return true;}
   
    return false;
}

void DrawMenu(char board[3][3], int posY, int posX, char res) {
     if (posY < 1 || posY > 3 || posX < 1 || posX > 3) {std::cout << "  You have crossed the border" << std::endl; return;}
     if (board[posY - 1][posX - 1] != '.') { std::cout << "Busy!!" << std::endl; return ; }
     
     board[posY- 1][posX - 1] = res;
     if (isWon(board, res)) {
       std::cout << "player " << res << " is won" << std::endl;
       isVictory = true;
     }
     for (int xc = 0; xc < 3;xc++) {
        for (int xy = 0; xy < 3; xy++) {
            std::cout << " " << board[xc][xy] ;
        }
        std::cout << std::endl;
     }
     
}


int main()
{
    char matrix[3][3] = {
       {'.','.','.'},
       {'.','.','.'},
       {'.','.','.'},
    
    };
    int x,y;
    while (!isVictory) {
      std::cout << "player X: ";
      std::cin  >> x >> y;
      DrawMenu(matrix,y,x,'x');
      std::cout << "Player O: ";
      std::cin >> x >> y;
      DrawMenu(matrix,y,x,'o');
    }
    return 0;
}