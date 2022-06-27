#include <iostream>
#include <string>

using namespace std;
/*
* Adam Ciuris
* if an interviewer looks at this ill never get this problem
* it's long because i chose to mess around with the iterator a bit and learn
* a one line solution is:
* *max_element(begin(n), end(n) - '0');
*/

class MinDeciBinary {
public:
    int minPartitions(string n) {
        short max = 0; 
        for (string::const_iterator it = n.cbegin(); it != n.cend(); it++) {
            if (max < (*it - '0')) { // *it is a char, subtract char value for zero to get int val
                max = *it - '0';
                if (max == 9) { return 9; }
            }
        }
        return max;
    }
};

int main() {
    MinDeciBinary* yes = new MinDeciBinary();
    cout << yes->minPartitions("120129150") << endl;
    delete yes;

}