#include <iostream>
#define ARR_SIZE 5

/*
Look at this link for solution without division
https://github.com/vineetjohn/daily-coding-problem/blob/master/solutions/problem_002.py
->Requires 3 traversel with multiplication instead of 2 traversel with division,so
solution at the link seems inefficient.
*/
int* find_solution_with_division(int* arr,int size) {
    int* solution_arr = new int[5];

    int product = 1;
    
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    
    for (int i = 0; i < size; i++) {
        solution_arr[i] = product / arr[i];
    }
    return solution_arr;
}
int main() {
    int arr[ARR_SIZE] = { 1,2,3,4,5 };

    int* solution = find_solution_with_division(arr, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++) {
        std::cout << solution[i] << std::endl;
    }

    std::cout <<  std::endl;
    delete[] solution;
    
    return 1;
}