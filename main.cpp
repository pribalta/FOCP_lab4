#include <iostream>
#include <map>
#include <fstream>
#include <string>


int main() {

    // word - counter
    std::map<std::string, int> dictionary;

    std::ifstream input("lorem.txt");
    
    if (input.is_open()) {

        std::string word;

        while (getline(input, word)) {            
            if (dictionary.find(word) == dictionary.end()) { // If reached the end of dict finding a key
                dictionary.insert({word, 1}); // Add word to dictionary with 1 occurence
            } else {
                dictionary[word]++; // Increase number of occurences by 1
            }
        }
    }

    std::string tmp;

    std::cout << "Choose a word: " << std::endl;
    std::cin >> tmp;

    std::cout << "The word " << tmp << " appears " << dictionary[tmp] << " times." << std::endl;

    return 0;
}