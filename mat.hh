#pragma once

#include <vector>

namespace matrix
{
    class mat
    {
    public:
        int x;
        int y;
        int order;
        std::vector<std::vector<int>> content;
    };

    void swap(std::vector<std::vector<int>> &m, std::pair<int, int> i, std::pair<int, int> j);

    mat transpose(mat m);
} // namespace matrix