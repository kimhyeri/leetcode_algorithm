class Solution {
public:
	vector<vector<int>> matrixs;
	void setZeroes(vector<vector<int>>& matrix) {
		queue<int> izero;
		queue<int> jzero;
		int i, j;
		for (i = 0; i < matrix.size(); i++)
		{
			for (j = 0; j < matrix[i].size(); j++)
			{
				if (matrix[i][j] == 0)
				{
					izero.push(i);
					jzero.push(j);
				}
			}
		}
		while (!izero.empty())
		{
			i = izero.front();
			izero.pop();
			for (j = 0; j < matrix[i].size(); j++)
			{
				matrix[i][j] = 0;
			}
		}
		while (!jzero.empty())
		{
			j = jzero.front();
			jzero.pop();
			for (i = 0; i < matrix.size(); i++)
			{
				matrix[i][j] = 0;
			}
		}
		matrixs = matrix;
	}
};

/*
Runtime: 28 ms, faster than 76.60% of C++ online submissions for Set Matrix Zeroes.
Memory Usage: 14.2 MB, less than 5.04% of C++ online submissions for Set Matrix Zeroes.
*/
