/*
 * Author: dqiuwq
 * Date: 28/8/2019
 */
#include<vector>

bool isValidWalk(std::vector<char> walk) {
    int n = walk.size();
    if (n != 10) return false;
    else {
        int x = 0, y = 0;
        for (unsigned i = 0; i < n; i++) {
            switch (walk.at(i)) {
                case 'n':
                    x += 1;
                    break;
                case 's':
                    x -= 1;
                    break;
                case 'e':
                    y += 1;
                    break;
                case 'w':
                    y -= 1;
                    break;
            }
        }
        if (x == 0 && y == 0) return true;
        else return false;
    }
}