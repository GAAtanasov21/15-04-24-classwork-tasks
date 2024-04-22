#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Differ
{
private:
    vector<int>lineOfNums;

public:
    Differ(vector<int>newLineOfNums)
    {
        lineOfNums = newLineOfNums;
    }

    void areRepeating()
    {
        bool repeated = false;
        string repeatingNumbers = "";
        int temp;
        int size = lineOfNums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (j != size - 1)
                {
                    if (lineOfNums[i] == lineOfNums[j] && i != j)
                    {
                        repeatingNumbers += to_string(lineOfNums[i]) + ", ";
                        repeated = true;
                        break;
                    }
                }
                else
                {
                    if (lineOfNums[size - 1] == lineOfNums[0] && i != j)
                    {
                        repeatingNumbers += to_string(lineOfNums[i]) + ", ";
                        repeated = true;
                        break;
                    }
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
    vector<int> lineOfNums;
    cout << "Enter maximum 20 numbers. To cancel enter 0:";
    for (int i = 0; i < 21; i++)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            break;
        }
        lineOfNums.push_back(num);
    }
    cout << endl;
    Differ firstLineOfNumbers(lineOfNums);
    firstLineOfNumbers.areRepeating();
}

