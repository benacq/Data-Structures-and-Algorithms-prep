#include <iostream>
#include <vector>
#include <algorithm>
#include <regex>


bool checkPangram(std::string text) {
    const std::regex pattern("([^\\w])");
    text = std::regex_replace(text, pattern, "");
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::vector<bool> check(26, false);

    for (char i : text) {
        int index = i - 65;
        check[index] = true;
    }
    return none_of(cbegin(check), cend(check), std::logical_not<>());
}


int main() {
    std::string text = "The, quick brown fox jumps over the lazy dog!";
    if (checkPangram(text)) {
        printf(" %s is a pangram", text.c_str());
    } else {
        printf(" %s is not a pangram", text.c_str());
    }
    return 0;
}
