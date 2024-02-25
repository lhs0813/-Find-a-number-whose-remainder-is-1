#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 2;


    for (x = 2; x < 1000000; x++) {
        if (n % x == 1) {
            answer = x;
            break;
        }
    }

    return answer;
}

int main() {
    solution(10);
}