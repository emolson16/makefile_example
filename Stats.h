#ifndef _STATS_H
#define _STATS_H

using namespace std;

class Stats {
    private: 

    public: 
        // returns the average value of an array
        double average(int arr[], double arrSize);

        // returns the minimum value of an array
        int min(int arr[], int arrSize);

        // returns the maximum value of an array
        int max(int arr[], int arrSize);

        // returns the mode of an array
        int mode(int arr[], int arrSize);

};


#endif