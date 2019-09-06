/*
 * Author: dqiuwq
 * Date: 28/8/2019
 */
#include <cmath>

bool is_square(int n) {
    if (n < 0) return false;
    else {
        typedef long double lb;	
        lb root = std::sqrt(n);
        root -= floor(root);
        return (root == 0);
    }
}