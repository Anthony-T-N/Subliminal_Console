#include <iostream>
#include <filesystem>

// Vector containing words to display here:
std::vector<std::string> vector_test = {"HELLO", "FRIEND", "ABC", "123"};

// Vector with all colour codes here:
std::vector<std::string> vector_colour_codes = {"\033[31m", "\033[32m", "\033[36m"}; 
// Sample to test: "\033[31m", "\033[32m" 

// Function to take text and change colour:
std::string text_colour_change(std::string para)
{
    // Use global vector containing colour codes.

    // TEST
    std::string build_text = para + "Sample_Text" + "\033[0m";
    std::string word_test = "\033[31mSample_Text123\033[0m";
    return word_test;
}

// Select a random text to display on console.
void select_text()
{
    int text_number = rand() % vector_test.size();
    return test[text_number];
}

int main()
{
    std::cout << "=======================================" << "\n";
    std::cout << "- Subliminal_Console application" << "\n";
    std::cout << "- Console Application Version: 1.0" << "\n";
    std::cout << "- Created By: Anthony-T-N." << "\n";
    std::cout << "- Current location of executable: " << std::filesystem::current_path() << "\n";
    std::cout << "=======================================" << "\n\n";

    // STEP 1) Remove instructions.
    system("cls");
    
    // STEP 2) Display text.
    std::cout << text_colour_change("\033[31m") << "\n";
    
    select_text();

    // STEP 3) Take text, change colour.

    // STEP 4) Display text.

    // STEP 5) Change text.

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
