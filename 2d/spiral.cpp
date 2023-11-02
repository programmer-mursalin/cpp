#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty())
        {
            return ans; // Handle empty matrix
        }

        int n = matrix.size();
        int m = matrix[0].size();
        int total_size = n * m;
        int startingRow = 0;
        int ending_column = m - 1;
        int ending_row = n - 1;
        int startingcolumn = 0;
        int count = 0;

        while (count < total_size)
        {
            // Traverse from left to right
            for (int i = startingcolumn; i <= ending_column && count < total_size; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Traverse from top to bottom
            for (int i = startingRow; i <= ending_row && count < total_size; i++)
            {
                ans.push_back(matrix[i][ending_column]);
                count++;
            }
            ending_column--;

            // Traverse from right to left
            for (int i = ending_column; i >= startingcolumn && count < total_size; i--)
            {
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            // Traverse from bottom to top
            for (int i = ending_row; i >= startingRow && count < total_size; i--)
            {
                ans.push_back(matrix[i][startingcolumn]);
                count++;
            }
            startingcolumn++;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    Solution solution;
    vector<int> result = solution.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
