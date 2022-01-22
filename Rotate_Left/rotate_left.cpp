#include <vector>
#include <iostream>

using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    vector<int> rotated;
    for(int i = 0; i < a.size(); i++){
        rotated.push_back(a[(i + d) % a.size()]);
    }
    return rotated;
}

int main(){
    vector<int> test = {1,2,3,4,5,6,7,8,9,10};
    vector<int> expected = {5,6,7,8,9,10,1,2,3,4};
    if(rotLeft(test, 4) == expected){
        cout << "Success" << endl;
    }
    return 0;
}