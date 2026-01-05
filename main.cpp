#include <iostream>
#include <SFML/Graphics.hpp>
#include <fmt/Core.h>
#include "Sort/BubbleSort/BubbleSort.h"
#include "UI/Shape/BarArray.h"
#include "UI/Animator.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
        std::cout << "i = " << i << std::endl;
    }

    fmt::print("Hello World!\n");

    /*
    sf::RenderWindow window(
        sf::VideoMode({800, 600}),
        "SFML 3 Test"
    );

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.display();
    }
    */

    sf::RenderWindow window(
        sf::VideoMode(sf::Vector2u(800, 600)),
        "Bubble Sort Visualization"
    );

    std::vector<int> data = { 100, 300, 200, 400, 150, 350, 250 };

    BubbleSort algorithm;
    auto steps = algorithm.GenerateSteps(data);

    BarArray bars(data, {800.f, 600.f});
    Animator animator(bars, steps);

    sf::Clock clock;
    while (window.isOpen())
    {
        while (auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        float delta = clock.restart().asSeconds();
        animator.Update(delta);

        window.clear(sf::Color::Black);
        bars.Draw(window);
        window.display();
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}