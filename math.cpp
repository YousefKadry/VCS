#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> vec){
    int sum = 0;
    for(int num: vec){
        sum += num;
    }
    return sum;
}

int main(){
    vector<int> myVector(10, 5);
    int vectorSum = getSum(myVector);
    cout<< "rsults = " << vectorSum << endl;
    return 0;
}
