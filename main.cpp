#include <iostream>
#include <filesystem>
#include <windows.h>

// Vector containing words to display here:
std::vector<std::string> vector_word_list = { "HELLO", "FRIEND", "ABC", "123", "Monarch" };

// Vector with all colour codes here:
std::vector<std::string> vector_colour_codes = { "\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m", "\033[37m" };

int generate_rand_number()
{
    return rand() % vector_word_list.size();
}

// Function to take text and change colour:
std::string text_colour_change(std::string colour_code)
{
    // Use global vector containing colour codes.
    std::string build_text = colour_code + vector_word_list[generate_rand_number()] + "\033[0m";
    return build_text;
}

int main()
{
    std::cout << "=======================================" << "\n";
    std::cout << "- Subliminal_Console application" << "\n";
    std::cout << "- Console Application Version: 1.0" << "\n";
    std::cout << "- Created By: Anthony-T-N." << "\n";
    std::cout << "- Current location of executable: " << std::filesystem::current_path() << "\n";
    std::cout << "=======================================" << "\n\n";

    while (true)
    {
        system("cls");
        std::cout << text_colour_change(vector_colour_codes[rand() % vector_colour_codes.size()]) << "\n";
        Sleep(150);
    }
}

/*
Project Plan and Design
Brief : Annoy users with rapid and colour changing text on a console.
[Version 1]
=== Minimum Functions ===
[+] Display text on console application and change to different text within half a second.
[+] Different text are displayed in different colours
[+] Clear console after every text change.
[-]
=== TODO ===
*/
