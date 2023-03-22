#include <iostream>
using namespace std;

int main(void) {

    std::string brain = "HI THIS IS BRAIN";
    std::string *strPTR = &brain;
    std::string &strREF = brain;

    cout << "brain address: " << &brain << endl;
    cout << "strPTR address: " << &strPTR << endl;
    cout << "strREF address: " << &strREF << endl;

    cout << "brain value: " << brain << endl;
    cout << "strPTR value: " << *strPTR << endl;
    cout << "strREF value: " << strREF << endl;
}