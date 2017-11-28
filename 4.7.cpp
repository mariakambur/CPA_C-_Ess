#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
void removeWhitespaces(std::string input)
{
    
    bool prev_is_space = true;
    input.erase(std::remove_if(input.begin(), input.end(), [&prev_is_space](char curr) {
        bool r = std::isspace(curr) && prev_is_space;
        prev_is_space = std::isspace(curr);
        return r;}), input.end());
        std::cout << input << "\n";
}
int main()
{
    std::cout << "Input sentence with more whitespaces"<< std::endl;
    std::string input;
    std::getline(std::cin, input); 
    removeWhitespaces(input);
   
}