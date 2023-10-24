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
int getMin(vector<int> vec){
    int min = 999999999;
    for(int num: vec){
        if(num < min){
            min = num;
        }
    }
    return min;
}

int main(){
    vector<int> myVector = {1, 2, 3, 4 , 5, 6, 7, 8, 9, 10};
    int vectorSum = getSum(myVector);
    int vectorAvg = getAverage(myVector);
    int min = getMin(myVector);

    cout<< "Sum = " << vectorSum << endl;
    cout<< "Average = " << vectorAvg << endl;
    cout<< "Min = " << min << endl;
    return 0;
}
