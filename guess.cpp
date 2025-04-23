#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num, guess, nguess = 0;

    srand(time(0));
    num = rand() % 100;  // generates a number from 0 to 99

    // Uncomment the next line to see the generated number for debugging
    // cout << "The number is: " << num << endl;

    do {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess > num) {
            cout << "Lower number please\n\n";
        } else if (guess < num) {
            cout << "Higher number please\n\n";
        } else {
            cout << "You guessed it right in " << nguess + 1 << " attempts\n";
        }

        nguess++;
    } while (guess != num);

    return 0;
}
