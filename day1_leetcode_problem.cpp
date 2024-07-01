// // # 2037 Minimum Number of Moves to Seat Everyone

// There are n availabe seats and n students standing in a room. You are given an array seats of length n, where seats[i] is the position of the ith seat. You are also given the array students of length n, where students[j] is the position of the jth student.

// You may perform the following move any number of times:

// Increase or decrease the position of the ith student by 1 (i.e., moving the ith student from position x to x + 1 or x - 1)
// Return the minimum number of moves required to move each student to a seat such that no two students are in the same seat.


class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        int n = seats.size();

        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int result = 0;

        for(int i=0;i<n;i++){

            result += abs(seats[i]-students[i]);
            
        }

        return result;
    }
};