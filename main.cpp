// Created by Afriyie Gerson

#include <iostream>
#include <vector>
#include <utility>    //using swap() function
using namespace std;

void MySort(vector<int>& vect) {
    //selection sort
    for (int i = 0; i < int(vect.size()) - 1; ++i) {
        int* min = &vect[i];                                //point to the initial element of subarray
        for (int j = i + 1; j < int(vect.size()); ++j) {
            //attempt to find out the minimum int in subarray and let pointer points to it
            if (vect[j] < *min)
                min = &vect[j];
        }
        if (*min != vect[i])
            swap(*min, vect[i]);        //place the smallest int at the initial position of the subarray
    }
}

int main() {
    vector<int> ar;
    int temp;
    cout << "Enter a sequence of ints (q to quit): \n";
    while (cin >> temp)     //conditional expression returns false if the recent input unsuccessfully
        ar.push_back(temp);
    MySort(ar);
    for (int i = 0; i < int(ar.size()); ++i)
        cout << ar[i] << " ";
    cout << endl;
    return 0;
}
