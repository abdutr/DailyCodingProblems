#include <iostream>
#include <string>


#define ROW 4

bool hor_search_in2dchar(std::string arr, std::string searched, int idx_y) {
    if (idx_y + searched.length() - 1 > arr.length()) return 0;
    else if (searched.length() == 1) {

        return 1;
    }
    else {
        int found = 0;
        for (int i = 0; i < searched.length() - 1; i++) {
            if (searched[i + 1] != arr[idx_y+i ]) {
                return 0;
            }
        }
    
    }
    return 1;
}
bool ver_search_in2dchar(std::string arr[], std::string searched, int idx_x, int idx_y) {
    if (idx_x + searched.length() - 1 > ROW) return 0;
    else if (searched.length() == 1) {

        return 1;
    }
    else {
        int found = 0;
        for (int i = 0; i < searched.length() - 1; i++) {
            if (searched[i + 1] != arr[idx_x + i][idx_y]) {
                return 0;
            }
        }

    }
    return 1;
}
bool search_in2dchar(std::string arr[],std::string searched) {
    bool found = 0;
    for (int i = 0; i < ROW &&  found!=1; i++) {
        for (int j = 0; j < arr[i].length() && found!=1; j++) {
            std::cout << arr[i][j]<<"\t";
            if (arr[i][j] == searched[0]) {
                found = hor_search_in2dchar(arr[i], searched, j + 1);
            }
            if (found == 0) {
                found = ver_search_in2dchar(arr, searched, i+1, j);
            }

        }
        std::cout << std::endl;
    }
    return found;
}


int main() {
    std::string s[] = { "FACI" ,
        "OBQP",
        "ANOB",
        "MASS" };
    std::string searched = "FOAM";
    std::cout << search_in2dchar(s,  searched);




}   