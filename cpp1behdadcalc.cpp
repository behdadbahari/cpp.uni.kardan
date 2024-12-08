
#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    int floor(double number) {
        double u = number;
        int j = (int)u;
        return j;
    }

    int add(int x, int y) {
        return x + y;
    }

    double max1(double x, double y) {
        return (x > y) ? x : y;
    }

    bool find1(string str, char ch) {
        for (char c : str) {
            if (c == ch) {
                return true;
            }
        }
        return false;
    }

    int max2(int arr[], int size) {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};


