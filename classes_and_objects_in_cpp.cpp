#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student{
    private:
        int _score1;
        int _score2;
        int _score3;
        int _score4;
        int _score5;
    public:
        void input(){
            cin >> _score1 >> _score2 >> _score3 >> _score4 >>_score5;
        };
        int calculateTotalScore(){
            int sum = _score1 + _score2 + _score3 + _score4 +_score5;
            return sum;
        };
};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
