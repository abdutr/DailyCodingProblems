#include <iostream>
#include <vector>

int search_directions(int x, int y,int current_dir,int N,int M) {
	int dir = 0;

	if (x == N - 1 && y == M - 1) return 1;

	if (x + 1 <= N - 1) {
		dir+=search_directions(x + 1, y, current_dir, N, M);
	}

	if (y + 1 <= M - 1) {
		dir += search_directions(x , y+1, current_dir, N, M);
	}

	return dir;

}

int main() {
	int N, M;
	N = 5;
	M = 5;
	std::cout<<search_directions(0, 0, 0, N, M);


}