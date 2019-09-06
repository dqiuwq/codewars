/*
 * Author: dqiuwq
 * Date: 27/8/2019
 */
#include <vector>

int findOdd(const std::vector<int>& numbers) {
    // initialise a counter
    int count = 0;
    // for each int in vector
    for (int n : numbers) {
        // use stl vector count function
        // count the total number of n in vector
        count = std::count(numbers.begin(), numbers.end(), n);
        // if count == odd
        // return n
        if (count % 2 != 0) return n;
    }
}