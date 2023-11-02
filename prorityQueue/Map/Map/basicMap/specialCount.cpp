#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        map<int, int> frequency;
        int maxCount = 0;
        int mostFrequentValue = A[0]; // Initialize with the first element

        for (int i = 0; i < N; i++)
        {
            frequency[A[i]]++;
            if (frequency[A[i]] >= maxCount)
            {
                maxCount = frequency[A[i]];
                mostFrequentValue = A[i];
            }
            else if (frequency[A[i]] == maxCount && A[i] > mostFrequentValue)
            {
                mostFrequentValue = A[i];
            }
        }

        cout << mostFrequentValue << " " << maxCount << endl;
    }

    return 0;
}
