#pragma once
#ifndef ROTATE_H
#define ROTATE_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


using namespace std;


class Rotate
{
public:
	Rotate(int r, int c, int random) : rows(r), cols(c), random_num(random), v(r, vector<int>(cols)) {
		for (auto& row : v)
		{
			for (auto& col : row) {
				col = rand() % random;

			}

		}

	};
	void Rotate90()
	{
		vector<vector<int>> rotate(cols, vector<int>(rows));

		for (size_t i = 0; i < rows; i++)
		{
			for (size_t j = 0; j < cols; j++)
			{
				rotate[j][rows - 1 - i] = v[i][j];
			}
		}
		v = rotate;
		swap(rows, cols);
	}
	void Rotate180()
	{
		Rotate90();
		Rotate90();

	}

	void PrintDisplay() const
	{

		for (const auto& row : v)
		{
			for (const auto& col : row)
			{
				cout << col << " ";
			}
			cout << '\n';
		}
	};

private:
	int rows = 0, cols = 0;
	int random_num = 0;
	vector<vector<int>> v;

};
#endif // ROTATE_H
