#include <iostream>
#include <filesystem>

int main()
{
    std::cout << "=======================================" << "\n";
    std::cout << "- Subliminal_Console application" << "\n";
    std::cout << "- Console Application Version: 1.0" << "\n";
    std::cout << "- Created By: Anthony-T-N." << "\n";
    std::cout << "- Current location of executable: " << std::filesystem::current_path() << "\n";
    std::cout << "=======================================" << "\n\n";
}


/*
Project Plan and Design

Brief : Annoy users with rapid and colour changing text on a console.

[Version 1]
=== Minimum Functions ===
[-] Display text on console application and change to different text within half a second.
[-] Different text are displayed in different colours
[-] Clear console after every text change.
[-]

=== TODO ===
*/
