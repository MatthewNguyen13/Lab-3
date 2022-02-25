#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<char, int> myMap;
    std::string input;
    std::cout << "The quick brown fox jumped over the lazy dog.";
    std::getline(std::cin, input);
    for(int i = 0;i < input.size();i++) {
        if (myMap[input[i]])
        myMap[input[i]] += 1;
        else
        myMap[input[i]] = 1;
    }
    std::string stat;

    while(1){
        std::cout << "What character do you want stats on? ";
        std::cin >> stat;
        if(stat == "quit"){
            std::cout << "Goodbye!" << std::endl;
            return 0;
        }
        std::cout << "The character " << stat[0] << " appears " << myMap[stat[0]] << " times. \n";
    }
}