#include <iostream>
#include <string>


int countFrequency(int index, const std::string &text) {
    int freq = 0;
    for (int i = index; i < text.length(); ++i) {
        if (index != i && text[index] != text[i - 1]) {
            break;
        }
        if (text[index] == text[i]) {
            freq++;
        }
    }
    return freq;
}


std::string recurringString(std::string text) {
    std::string originalText = text;
    std::string resultText;

    for (int i = 0; i < text.length(); ++i) {
        int frequency = countFrequency(i, originalText);
        if (i != 0 && text[i] == text[i - 1]) {
            continue;
        }
        resultText += text[i];
        if (frequency > 1)
            resultText += std::to_string(frequency);
    }
    return resultText;
}

int main() {
    std::string text;
    getline(std::cin, text);
    std::cout << recurringString(text) << std::endl;
    return 0;
}
