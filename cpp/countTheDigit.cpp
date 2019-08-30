/*
 * Author: dqiuwq
 * Date: 29/8/2019
 */
#include <algorithm>
#include <string>
using namespace std;

class CountDig {
public:
    static int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d) {
    int digit = 0;
    char c = d + '0';
    for (int i = 0; i <= n; i++) {
        int num = i * i;
        string str = to_string(num);
        digit += count(str.begin(), str.end(), c);
    }
    return digit;
}