// Compiled/versions/mobile/src/MobileManager.cpp
#include "MobileManager.h"
#include "MobileUI.h"

MobileManager::MobileManager() {
    // Initial setup can be performed here
    std::cout << "Mobile Manager initialized." << std::endl;
}

void MobileManager::runApp() {
    MobileUI ui;
    ui.displayMainScreen();
    // Add additional logic to manage the mobile application lifecycle
    std::cout << "Mobile application is running." << std::endl;
}
