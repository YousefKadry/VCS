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

int getAverage(vector<int> vec){
    int sum = getSum(vec);
    int avg = sum / vec.size();
    return avg;
}
int main(){
    vector<int> myVector(10, 5);
    int vectorSum = getSum(myVector);
    int vectorAvg = getAverage(myVector);
    cout<< "Sum = " << vectorSum << endl;
    cout<< "Average = " << vectorAvg << endl;
    return 0;
}
