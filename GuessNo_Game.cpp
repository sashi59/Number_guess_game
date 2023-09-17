#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(std ::time(nullptr));
    int range = 100;
    int num = rand() % range;
    cout << "************** Number Guessing Game **************\n";
    cout << "The number which I am thinking is between 0 to 100\n";
    int attempts = 0;

    while (1)
    {
        attempts++;
        int n;
        cout << "Take a guess :";
        cin >> n;
        if (n == num)
        {
            cout << "Congratulation! You have guessed the number in " << attempts << " attempts" << endl;
            break;
        }
        else if (n < num)
        {
            cout << "Too low, Try to guess a higher number" << endl;
        }
        else
        {
            cout << "Too high, Try to guess a lower number" << endl;
        }
    }
    return 0;
}