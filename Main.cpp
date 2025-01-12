#include <iostream>
#include "Window.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

int main() {
    Ant2D::window w;

    // Get desktop resolution
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window{ sf::VideoMode(desktop.width, desktop.height), "Ant Engine 2D" };

    // Initialize ImGui
    if (ImGui::SFML::Init(window))
    {
        std::cout << "ImGui initialized succsessfully\n";
   }
    auto& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;

    // Load font
    auto fancyFont = io.Fonts->AddFontFromFileTTF("./libraries/include/Fonts/MainFont.ttf", 20.0f);

    if (fancyFont)
    {
        std::cout << "font loaded  succsessfully\n";
    }

    if (!ImGui::SFML::UpdateFontTexture()) {
        std::cerr << "No luck\n";
    }

    // Set up ImGui style
    w.SetUpImGuiStyle();

    // Main loop
    sf::Clock deltaClock{};
    while (window.isOpen()) {
        // Process events
        sf::Event event{};
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(window, event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Update ImGui
        ImGui::SFML::Update(window, deltaClock.restart());

        // Push custom font and create dock space
        ImGui::PushFont(fancyFont);
        ImGui::DockSpaceOverViewport();

        // Render Explorer window
        if (ImGui::Begin("Explorer")) {
            // Content for Explorer window
        }
        ImGui::End();

        // Render ToolBar window
        if (ImGui::Begin("ToolBar")) {
            // Content for ToolBar window
        }
        ImGui::End();

        ImGui::PopFont();

        // Clear window and render ImGui content
        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    // Shutdown ImGui
    ImGui::SFML::Shutdown();

    return 0;
}
