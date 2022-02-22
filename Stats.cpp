using namespace std;
#include "Stats.h"

double Stats::average(int arr[], double arrSize) {
    double sum = 0;
    for(int i = 0; i < arrSize; ++i) {
        sum += arr[i];
    }
    return sum/arrSize;
}

int Stats::min(int arr[], int arrSize) {
    int min = arr[0];

    for(int i = 0; i < arrSize; ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int Stats::max(int arr[], int arrSize) {
    int max = arr[0];

    for(int i = 0; i < arrSize; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int Stats::mode(int arr[], const int arrSize) {

    int counts[arrSize];
    int tempCount = 0;

    for(int i = 0; i < arrSize; ++i) {
        tempCount = 0; 
        for(int j = 0; j < arrSize; ++j) {
            if(arr[i] == arr[j]) {
                ++tempCount;
            }
        }
        counts[i] = tempCount;
    }

    int max = counts[0];
    int maxIndex = 0; 
    // 3 1 3 1 3
    for(int i = 0; i < arrSize; ++i) {
        if(counts[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    return arr[maxIndex];
}



