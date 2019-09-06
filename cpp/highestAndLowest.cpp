/*
 * Author: dqiuwq
 * Date: 27/8/2019
 */
#include <string>
#include <set>
#include <sstream>

std::string highAndLow(const std::string& numbers){
    std::set<int> myset;
    std::stringstream ss;
    ss << numbers;
    std::string token = "";
	while (!ss.eof()) {
		getline(ss, token, ' ');
		myset.insert(stoi(token));
	}
	return std::to_string(*myset.rbegin()) 
        + " " + std::to_string(*myset.begin());
}