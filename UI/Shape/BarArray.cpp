//
// Created by kelton on 2026/1/4.
//

#include "BarArray.h"

BarArray::BarArray(const std::vector<int>& Data, sf::Vector2f Size)
    : Values(Data), DrawSize(Size)
{
    Colors.resize(Values.size(), sf::Color::White);
}

void BarArray::Swap(int TargetA, int TargetB)
{
    std::swap(Values[TargetA], Values[TargetB]);
}


void BarArray::Highlight(int TargetA, int TargetB)
{
    std::fill(Colors.begin(), Colors.end(), sf::Color::White);
    Colors[TargetA] = Colors[TargetB] = sf::Color::Red;
}

void BarArray::MarkSorted(int Index)
{
    Colors[Index] = sf::Color::Green;
}

void BarArray::Draw(sf::RenderWindow& Window)
{
    float barWidth = DrawSize.x / Values.size();


    for (size_t i = 0; i < Values.size(); ++i)
    {
        sf::RectangleShape bar;
        bar.setSize({barWidth - 2, static_cast<float>(Values[i])});
        bar.setPosition(sf::Vector2f(i * barWidth, DrawSize.y - Values[i]));
        bar.setFillColor(Colors[i]);
        Window.draw(bar);
    }
}