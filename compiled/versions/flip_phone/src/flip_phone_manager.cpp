// Compiled/versions/flip_phone/src/flip_phone_manager.cpp
#include "flip_phone_manager.h"
#include "UI.h"
#include "Settings.h"
#include "Security.h"

FlipPhoneManager::FlipPhoneManager() {
    // Initial setup could go here
    std::cout << "Flip Phone Manager initialized." << std::endl;
}

void FlipPhoneManager::runApp() {
    UI ui;
    Settings settings;
    Security security;

    ui.displayMainMenu();
    settings.adjustVolume(5);
    security.activateSecurityMode();

    std::cout << "Flip phone application is running with all features initialized." << std::endl;
}
