#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>

int main() {

    // word - list with lines where word occurs
    std::map<std::string, std::vector<int>> dictionary;

    std::ifstream input("lorem.txt");
    
    if (input.is_open()) {

        std::string word;
        int line_number = 0;

        while (getline(input, word)) {            
            if (dictionary.find(word) == dictionary.end()) { // If reached the end of dict without finding a key
                dictionary.insert({word, {line_number}}); // Add word to dictionary and line where it appears
            } else {
                dictionary[word].push_back(line_number); // Add the line number to the index
            }
            ++line_number;
        }
    }

    std::string tmp;

    std::cout << "Choose a word: " << std::endl;
    std::cin >> tmp;

    std::cout << "The word " << tmp << " appears in lines:" << std::endl;

    for (int i = 0; i < dictionary[tmp].size(); i++) {
        std::cout << dictionary[tmp][i] << std::endl;
    }

    return 0;
}