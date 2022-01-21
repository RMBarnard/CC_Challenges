//Ryan Barnard
//Alternating Characters

//This is my c++ solution to the alternating characters challenge from HackerRank.com 
//which can be found at this link:
//https://www.hackerrank.com/challenges/alternating-characters


#include <iostream>
#include <string>
#include <vector>

int alternatingCharacters(std::string s) {
    int removals = 0;
    char reference = s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == reference){
            removals++;
        }
        else{
            reference = s[i];
        }
    }
    return removals;
}

int main(){
    std::vector<std::string> inputs = {"AAAA", "BBBBB", "ABABABAB", "BABABABA","AAABBB"};
    std::vector<int> expected = {3, 4, 0, 0, 4};
    bool success = true;
    for(int i = 0; i < inputs.size(); i ++){
        if(alternatingCharacters(inputs[i]) != expected[i])
        {
            success = false;
        }
    }
    if(success){
        std::cout << "Success" << std::endl;
    }
    else{
        std::cout << "Failure" << std::endl;
    }
    return 0;
}