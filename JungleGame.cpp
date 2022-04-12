#include <bits/stdc++.h>
#include "Game.h"

using namespace std;


int main(int argcount, char* argvector[])
{
    char* filename = nullptr;

    if (argcount > 1) {
        filename = argvector[1];
    }

    int mode;
    cin >> mode;
    Game game((MODES)mode, filename);
    game.Run_Game();
    return 0;
}

