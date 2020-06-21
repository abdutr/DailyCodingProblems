#include <iostream>
#define RIGHT 1
#define LEFT -1
#define DOWN 1
#define UP -1
#define ROW 4
#define COLUMN 5

void spiral_print(int arr[ROW][COLUMN])

{
    int x_direction = RIGHT;
    int y_direction = DOWN;
    bool hold_x = false;
    bool hold_y = true;
    int x_end = COLUMN - 1;
    int y_end = ROW - 1;
    int x_start = 0;
    int y_start = 0;
    unsigned int printed_counter = 0;
    int i = 0, j = 0;
    while (printed_counter < ROW*COLUMN) {
        std::cout << arr[i][j] << std::endl;;
        printed_counter++;
        if (x_direction == RIGHT && !hold_x) {
            if (j >= x_end) {
                hold_x = true;
                hold_y = false;
                i += y_direction;
                x_direction = -x_direction;
                y_start++;
            }
            else {
                j+=x_direction;
            }
        }



        else if (y_direction == DOWN && !hold_y) {

            if (i >= y_end) {
                hold_x = false;
                hold_y = true;
                j += x_direction;
                y_direction = -y_direction;
                x_end--;
            }
            else {
                i+=y_direction;
            }
        }

        else if (x_direction == LEFT && !hold_x) {
            if (j <= x_start) {
                hold_x = true;
                hold_y = false;
                i += y_direction;
                x_direction = -x_direction;
                y_end--;
            }
            else {
                j+=x_direction;
            }
        }

        else if (y_direction == UP && !hold_y) {

            if (i <= y_start) {
                hold_x = false;
                hold_y = true;
                j += x_direction;
                y_direction = -y_direction;
                x_start++;
            }
            else {
                i += y_direction;
            }
        }
        //else if (i == ROW - 1 && !hold_x) {
        //    j++
        //}
    }

}

int main() {
    int a[4][5] = { {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20} };
    spiral_print(a);



}