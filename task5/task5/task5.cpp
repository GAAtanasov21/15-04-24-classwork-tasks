#include <iostream>
#include <string>
using namespace std;

class Differ
{
private:
    int* arrOfNums;
    int size;

public:
    Differ(int newArrOfNums[], int newSize)
    {
        arrOfNums = newArrOfNums;
        size = newSize;
    }
    
    void areRepeating()
    {
        bool repeated = false;
        string repeatingNumbers = "";
        for (int i = 0; i < size; i++)
        {
            if (i != size - 1)
            {
                if (arrOfNums[i] == arrOfNums[i + 1])
                {
                    repeatingNumbers += to_string(arrOfNums[i]) + ", ";
                    repeated = true;
                }
            }
            else
            {
                if (arrOfNums[size - 1] == arrOfNums[0])
                {
                    repeatingNumbers += to_string(arrOfNums[i]) + ", ";
                    repeated = true;
                }
            }
        }
        if (repeated == true)
            cout << "There are repeating numbers. The repeating numbers are: " << repeatingNumbers << endl;
        else
            cout << "There are no repeating numbers" << endl;
    }
};

int main()
{
    int size;
    int arrOfNumbers[100];
    cout << "Enter the amount of numbers:";
    cin >> size;
    cout << endl << "Enter the numbers:";
    for (int i = 0; i < size; i++)
    {
        cin >> arrOfNumbers[i];
    }
    cout << endl;
    Differ firstLineOfNumbers(arrOfNumbers, size);
    firstLineOfNumbers.areRepeating();
}

