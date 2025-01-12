#include <iostream>
#include "Window.hpp"
#include "GameObject.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

int main() {
    Ant2D::window w;
    Ant2D::GameObject GO;

    GO.AddRectangle(sf::Color::Red,100.0f,100.0f);

    // Get desktop resolution
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::RenderWindow Rwindow{ sf::VideoMode(desktop.width, desktop.height), "Ant Engine 2D" };

        // Initialize ImGui;
        if (ImGui::SFML::Init(Rwindow))
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
    while (Rwindow.isOpen()) {
        // Process events
        sf::Event event{};
        while (Rwindow.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(Rwindow, event);

            if (event.type == sf::Event::Closed) {
                Rwindow.close();
            }
        }

        // Update ImGui
        ImGui::SFML::Update(Rwindow, deltaClock.restart());

        // Push custom font and create dock space
        ImGui::PushFont(fancyFont);
        ImGui::DockSpaceOverViewport();

        // Render Explorer window
        if (ImGui::Begin("Explorer")) {
            // Content for Explorer window
        }
        ImGui::End();

        if (ImGui::Begin("Viewport")) {
            // Content for Viewport
            
        }
        ImGui::End();


        // Render ToolBar window
        if (ImGui::Begin("ToolBar")) {
            // Content for ToolBar window
        }
        ImGui::End();

        ImGui::PopFont();

        // Clear window and render ImGui content
        Rwindow.clear();
        ImGui::SFML::Render(Rwindow);
        GO.RenderRectangle(&Rwindow);
        Rwindow.display();
    }

    // Shutdown ImGui
    ImGui::SFML::Shutdown();

    return 0;
}
