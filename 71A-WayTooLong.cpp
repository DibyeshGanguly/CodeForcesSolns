#include <iostream>
#include <string>

int main() {
    int threshold;
    std::cin >> threshold;

    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.length() > 10) {
            char first = line[0];
            char last = line[line.length() - 1];
            std::cout << first << line.length() - 2 << last << std::endl;
        } else {
            std::cout << line << std::endl;
        }
    }

    return 0;
}
