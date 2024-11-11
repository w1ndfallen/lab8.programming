#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;

    std::cout << "Enter sentence: ";
    std::getline(std::cin, input);

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    std::cout << "Sentence in lower case: " << input << std::endl;

    return 0;
}
