//Final Project for Discrete Mathematics Class
//Assignment to demonstrate a choice of topic learned in the course in choice of programming language.


#include <iostream>
//#include <vector>
#include <algorithm>
using namespace std;

    // int printA(vector<int>setA, int sizeA) {
    //     for (int i = 0; i < sizeA; i++) {
    //         cout << setA[i] << (",\n");
    //         return 0;
    //     } 
    // }
void printUnion(int setA[], int setB[], int x, int y) {
    int i = 0;
    int j = 0;
    while (i < x && j < y) {
        if (setA[i] < setB[j])
            cout << setA[i++] << " \n";
 
        else if (setB[j] < setA[i])
            cout << setB[j++] << " \n";
 
        else {
            cout << setB[j++] << " \n";
            i++;
        }
    }
        while (i < x)
        cout << setA[i++] << " \n";
 
    while (j < y)
        cout << setB[j++] << " \n";
}

void printIntersecton() {

}

int main() {
    int setA[] = {1, 2, 3}; //first set
    int setB[] = {2, 6, 8, 10}; //second set
    int sizeA = sizeof(setA);
    int sizeB = sizeof(setB);
    int x = sizeof(setA) / sizeof(setA[0]);
    int y = sizeof(setB) / sizeof(setB[0]);

    //call function
    cout <<  ("The union of the two sets is: \n");
    printUnion(setA, setB, x, y);
    cout <<  ("The intersection of the two set is: \n");
    //printIntersection(setA, setB, m, n)
    return 0; // program success
}

