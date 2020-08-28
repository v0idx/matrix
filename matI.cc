#include "mat.hh"

using std::pair;
using std::vector;

namespace matrix
{
    void swap(vector<vector<int>> &m, pair<int, int> i, pair<int, int> j)
    {
        int temp = m.at(i.first).at(i.second);
        m.at(i.first).at(i.second) = m.at(j.first).at(j.second);
        m.at(j.first).at(j.second) = temp;
    }

    mat transpose(mat m)
    {
        if (m.order % 2 == 0)
        {
            for (int i = 0; i < m.x - 1; i++)
            {
                for (int j = i + 1; j < m.x; j++)
                {
                    swap(m.content, std::make_pair(i, j), std::make_pair(j, i));
                }
            }
        }
        else
        {
            mat mT;
            mT.content = vector<vector<int>>();
            for (int i = 0; i < m.x; i++)
            {
                mT.content.push_back(vector<int>());
                for (int j = 0; j < m.y; j++)
                {
                }
            }
        }

        return m;
    }

    mat mult(mat a, mat b)
    {
    }
} // namespace matrix