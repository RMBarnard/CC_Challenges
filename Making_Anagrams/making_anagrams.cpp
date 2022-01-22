//Ryan Barnard
//Making Anagrams

//This is my C++ solution to the Making Anagrams problem from hackerrank.com under
//the string manipulation section of the Interview Preparation Kit at:
//https://www.hackerrank.com/challenges/ctci-making-anagrams/problem

#include <string>
#include <iostream>

int makeAnagram(std::string a, std::string b){
    int removals = 0;
    int arr_a[26] = {0};
    int arr_b[26] = {0};
    for(int i = 0; i < a.size(); i++){
        arr_a[a[i]-97]++;
    }
    for(int j = 0; j < b.size(); j++){
        arr_b[b[j]-97]++;
    }
    for(int k = 0; k < 26; k++){
        removals += abs(arr_a[k] - arr_b[k]);
    }
    return removals;
}

int main(){
    std::string a = "fcrxzwscanmligyxyvym";
    std::string b = "jxwtrhvujlmrpdoqbisbwhmgpmeoke";
    if(makeAnagram(a, b) == 30){
        std::cout << "Success" << std::endl;
    }   
    else{
        std::cout << "Failure" << std::endl;
    }
    return 0;
}