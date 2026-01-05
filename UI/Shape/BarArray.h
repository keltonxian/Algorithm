//
// Created by kelton on 2026/1/4.
//

#ifndef ALGORITHMDEMO_BARARRAY_H
#define ALGORITHMDEMO_BARARRAY_H

#include <SFML/Graphics.hpp>
#include <vector>

class BarArray
{
public:
    BarArray(const std::vector<int>& Data, sf::Vector2f Size);

    void Swap(int TargetA, int TargetB);
    void Highlight(int TargetA, int TargetB);
    void MarkSorted(int Index);

    void Draw(sf::RenderWindow& Window);

private:
    std::vector<int> Values;
    std::vector<sf::Color> Colors;
    sf::Vector2f DrawSize;
};


#endif //ALGORITHMDEMO_BARARRAY_H