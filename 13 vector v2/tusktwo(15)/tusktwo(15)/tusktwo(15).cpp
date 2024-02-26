#include <iostream>
using namespace std;
char check_who_won(char field[3][3]) {
    int count_x_vertical(0), count_o_vertical(0), 
        count_x_diagonal_plus(0), count_o_diagonal_plus(0),
        count_x_diagonal_minus(0), count_o_diagonal_minus(0),
        count_x_line(0), count_o_line(0);
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            count_x_line += field[j][i] == 'X' ? 1 : 0;
            count_o_line += field[j][i] == 'O' ? 1 : 0;

            count_x_vertical += field[i][j] == 'X' ? 1 : 0;
            count_o_vertical += field[i][j] == 'O' ? 1 : 0;
            if (i == j) {
                count_x_diagonal_plus += field[i][i] == 'X' ? 1 : 0;
                count_o_diagonal_plus += field[i][i] == 'O' ? 1 : 0;
            }
            if (i + j == 2) {
                count_x_diagonal_plus += field[j][i] == 'X' ? 1 : 0;
                count_o_diagonal_plus += field[j][i] == 'O' ? 1 : 0;
            }
        }
        if (count_x_vertical == 3 || count_x_line == 3) {
            return 'X';
        }
        else if (count_o_vertical == 3 || count_o_line == 3) {
            return 'O';
        }
        count_x_vertical = 0;
        count_x_line = 0;
        count_o_vertical = 0;
        count_o_line = 0;
    }
    if (count_x_diagonal_plus == 3 || count_x_diagonal_minus == 3) {
        return 'X';
    }
    else if (count_o_diagonal_plus == 3 || count_o_diagonal_minus == 3) {
        return 'O';
    }
    else return 'N';

}
void cout_Field(char field[3][3]) {
    cout << "-__x__-\n";
    for (int i = 0; i < 3; i++) {
        cout << "__";
    }
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << "y |";
        for (int j = 0; j < 3; j++) {
            cout << field[j][i];
        }
        cout << "\n";
    }
}
int main()
{
    char whoWon = 'N';
    int x, y;
    char gamer_name = 'X';
    char game[3][3] = { {'N','N','N'},
                        {'N','N','N'},
                        {'N','N','N'} };
    for (int i = 0; i < 3 * 3; i++) {
        cout << "Enter your move (x)(y)\n";
        cin >> x >> y;
        x--;
        y--;

        if (game[x][y] == 'N') {
            game[x][y] = gamer_name;
            if (gamer_name == 'X') {
                gamer_name = 'O';
            }
            else {
                gamer_name = 'X';
            }
        }
        else {
            i--;
            cout << "Enter correct move\n";
        }

        if (i >= 4) {
            whoWon = check_who_won(game);
            if (whoWon == 'X') {
                cout << "\nX WON!!!";
                cout_Field(game);
                break;
            }
            else if (whoWon == 'O') {
                cout << "\nO WON!!!";
                cout_Field(game);
                break;
            }
            
        }

        cout_Field(game);
        cout << "\n";
        cout << gamer_name << "<-- move \n";
    }
    if (whoWon == 'N')
        cout << "draw";
}