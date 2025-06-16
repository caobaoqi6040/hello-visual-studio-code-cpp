#include "../include/hello_cpp.h"
using namespace std;

void say_hello(const std::string& username) {
    cout << "Hello, " << username << "!" << endl;
}

int main() {
    say_hello("cmake");
    return 0;
} 