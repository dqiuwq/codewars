/*
 * Author: dqiuwq
 * Date: 30/8/2019
 */
#include <sstream>
#include <string>
using namespace std;

class PrimeDecomp {
public:
    static string factors(int lst);
private:
    static int get1stPrime(int n);
};

int PrimeDecomp::get1stPrime(int n) {
	// assuming n > 1
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			return i;
			break;
		}
	}
	return 0;
}

string PrimeDecomp::factors(int n) {
    ostringstream os;
	while(n > 0) {
		int p = get1stPrime(n);
		if (p == 0) {
			os << "(" + to_string(n) + ")";
			break;
		} else {
			int k = 0;
			while (n % p == 0) {
				n = n / p;
				k++;
			}
			if (k == 1) 
                os << "(" + to_string(p) + ")";
			else 
                os << "(" + to_string(p) + "**" 
                    + to_string(k) + ")";
		}	
	}
	return os.str();
}