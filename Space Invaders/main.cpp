// SpaceInvaders.cpp : Defines the entry point for the console application.
//
//vieta programos vardui
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <ctime>

using namespace std;

static char Map[15][15] = {
	"##############",
	"#            #",
	"# x x x x x x#",
	"#  x x x x x #",
	"#            #",
	"#            #",
	"#            #",
	"#            #",
	"#            #",
	"#            #",
	"#            #",
	"#            #",
	"#            #",
	"#      U     #",
	"##############"
};

static bool running = true;
static int speed = 1000/12;
static int health = 3;
static int maxhealth = health;
static int enemyCount = 11;

int main()
{
    COORD coord;
    coord.X = 0;
    coord.Y = 0;

	while (running) {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		for (int i = 0; i < 15; i++) {
			cout << Map[i] << endl;
		}
        cout << "Health: " << health << "/" << maxhealth << endl;

		for (int i = 0; i < 15; i++){
            for (int j = 0; j < 15; j++){
                switch (Map[i][j]){
                    case 'U':{
                        if (GetAsyncKeyState(VK_LEFT) != 0){
                            int nextj = j - 1;
                            switch (Map[i][nextj]){
                                case ' ':
                                    Map[i][j] = ' ';
                                    j--;
                                    Map[i][nextj] = 'U';
                                break;
                            }
                        } else if (GetAsyncKeyState(VK_RIGHT) != 0) {
                            int nextj  = j + 1;
                            switch (Map[i][nextj]){
                                case ' ':
                                    Map[i][j] = ' ';
                                    j++;
                                    Map[i][nextj] = 'U';
                                break;
                            }
                        } else if (GetAsyncKeyState(VK_UP) != 0){
                            int nexti = i - 1;
                            Map[nexti][j] = 'o';
                        }
                    }
                    break;
                    case 'x': {
                        int chance = rand() % 50 + 1;
                        int nexti = i + 1;
                        if (chance == 1 && Map[nexti][j] == ' '){
                            Map[nexti][j] = '*';
                        }
                    }
                    break;
                    case 'o': {
                        int nexti = i - 1;
                        switch (Map[nexti][j]){
                            case ' ':
                                Map[i][j] = ' ';
                                Map[nexti][j] = 'o';
                            break;
                            case '#':
                                Map[i][j] = ' ';
                                //Map[nexti][j] = '#';
                            break;
                            case 'x':
                                Map[i][j] = ' ';
                                Map[nexti][j] = ' ';
                                enemyCount--;
                            break;
                            case '*':
                                Map[i][j] = ' ';
                                Map[nexti][j] = ' ';
                            break;
                        }
                    }
                    break;
                }
            }
		}

		for (int i = 14; i > 0; i--){
            for (int j = 15; j > 0; j--){
                int nexti = i + 1;
                if (Map[i][j] == '*' && Map[nexti][j] != '#' && Map[nexti][j] != 'U'){
                    Map[i][j] = ' ';
                    Map[i + 1][j] = '*';
                } else if (Map[i][j] == '*' && Map[nexti][j] == 'U'){
                    Map[i][j] = ' ';
                    health--;
                } else if (Map[i][j] == '*' && Map[nexti][j] == '#'){
                    Map[i][j] = ' ';
                }
            }
		}

		if (health == 0){
            running = false;
            system("cls");
            cout << "You lost" << endl;
            system("pause");
		} else if (enemyCount <= 0){
            running = false;
            system("cls");
            cout << "You Won" << endl;
            system("pause");
		}

        Sleep(speed);
	}

    return 0;
}

