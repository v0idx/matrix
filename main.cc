#include <iostream>
#include "mat.hh"

int main()
{
    matrix::mat matA;
    matA.x = 2;
    matA.y = 2;
    matA.order = 2;

    std::vector<std::vector<int>> content;

    content.push_back(std::vector<int>());
    content.at(0).push_back(1);
    content.at(0).push_back(2);
    content.push_back(std::vector<int>());
    content.at(1).push_back(3);
    content.at(1).push_back(4);

    matA.content = content;

    matrix::mat matB = matrix::transpose(matA);

    for (auto i : matA.content)
    {
        for (auto c : i)
        {
            std::cout << c;
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    for (auto i : matB.content)
    {
        for (auto c : i)
        {
            std::cout << c;
        }
        std::cout << '\n';
    }
}