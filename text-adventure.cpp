#include <iostream>

int main() {
    std::cout << "===============================================\n";
    std::cout << "Welcome to the adventures of Shane and Georgina\n";
    std::cout << "===============================================\n";

    int like_to_play, where_to_go, ireland_choice, canada_choice, name;
    

    std::cout << "Would you like to play?\n";
    std::cout << "  1) yes\n";
    std::cout << "  2) no\n";
    std::cin >> like_to_play;
    std::cout << "===============================================\n";

    while (like_to_play != 1 && like_to_play != 2)
    {
        std::cout << "Please enter 1 or 2\n";
        std::cout << "Would you like to play?\n";
        std::cout << "  1) yes\n";
        std::cout << "  2) no\n";
        std::cin >> like_to_play;
        std::cout << "===============================================\n";
    }
    
    
    //exits program is do not like to play
    if (like_to_play == 2) 
    { 
        std::cout << "===============================================\n";
        std::cout << "You selected no\n";
        std::cout << "Bye :(\n";
        std::cout << "===============================================\n";
        return -1;
    }
    //std::cout << "===============================================\n";
    std::cout << "Shane and Georgina need your help to figure out what they are going to do for the  summmer.\n";
    std::cout << "They have 3 options...pick one!\n";
    std::cout << "  1) Stay in Ireland and travel the country.\n";
    std::cout << "  2) Move to Canada.\n";
    std::cout << "  3) Have a child.\n";
    std::cin >> where_to_go;
    std::cout << "===============================================\n";

    // keeps asking for input until a valid option is selected
    while (where_to_go != 1 && where_to_go != 2 && where_to_go != 3)
    {
        std::cout << "Please enter 1, 2 or 3\n";
        std::cout << "  1) Stay in Ireland.\n";
        std::cout << "  2) Move to Canada.\n";
        std::cout << "  3) Have a child.\n";
        std::cin >> where_to_go;
    }
    //ireland story
    if (where_to_go == 1)
    {
        std::cout << "How should they spend their time in Ireland?\n";
        std::cout << "  1) Work full time and save all their money.\n";
        std::cout << "  2) Scrape together what money they have and travel around the country.\n";
        std::cin >> ireland_choice;
        std::cout << "===============================================\n";
    

        while (ireland_choice != 1 && ireland_choice != 2)
        {
            std::cout << "Please enter either 1 or 2\n";
            std::cout << "How should they spend their time in Ireland?\n";
            std::cout << "  1) Work full time and save all their money.\n";  
            std::cout << "  2) Scrape together what money they have and travel around the country.\n";
            std::cin >> ireland_choice;
            std::cout << "===============================================\n";
        }

        if (ireland_choice == 1) 
        {
            std::cout << "Summer passes, Shane and Georgina both worked full time and can now afford their dream holiday to Bali.\n";
            std::cout <<"Not a bad ending! We got worried for a second when you chose to stay in Ireland!\n";
            std::cout << "Thanks for playing ❤️\n";
            std::cout << "===============================================\n";
        } else
        {
            std::cout << "Shane and Georgina used up whatever money they could scrape together.\n";
            std::cout << "Unfortunately, they broke down half way through their trip in county Sligo.\n";
            std::cout << "We knew it was never going to end well when you chose to stay in Ireland.\n";
            std::cout << "===============================================\n";
        }
    }



    //canada story
    if (where_to_go == 2) 
    {
        std::cout << "You selected move to Canada\n";
        std::cout << "What airline should they fly with?\n";
        std::cout << "P.S...Choose wisely.\n\n";
        std::cout << "  1) Westjet\n";
        std::cout << "  2) RyanAir\n";
        std::cin >> canada_choice;
        std::cout << "===============================================\n";
    
        while (canada_choice != 1 && canada_choice != 2)
        {
            std::cout << "Please enter either 1 or 2\n";
            std::cout << "What airline should they fly with?\n";
            std::cout << "P.S...Choose wisely.\n\n";
            std::cout << "  1) Westjet\n";
            std::cout << "  2) RyanAir\n";
            std::cin >> canada_choice;
            std::cout << "===============================================\n";            
        }

        if (canada_choice == 1)
        {
            std::cout << "Shane and Georgina get upgraded to business class. Ohh fancy!!\n";
            std::cout << "They spend the summer travelling all over Canada.\n";
            std::cout << "They also end up winning the Canadian lottery and live happily ever after.\n";
            std::cout << "Good job user and thanks for playing!\n";
            std::cout << "===============================================\n";
        } else 
        {
            std::cout << "You slected RyanAir.\n";
            std::cout << "The plane ends up having the make an emergency landing in the Atlantic ocean. Oh boy this isn't looking good!\n";
            std::cout << "Everybody gets rescued but you just ruined Shane and Georginas summer. Thanks user!\nGRRRRRR!!!!\n";
            std::cout << "===============================================\n";
        }
        
    }

    // have a child 
    if (where_to_go == 3) 
    {
        std::cout << "You selected have a child.\n";
        std::cout << "Wow you really don't want them to have fun at all..\n";
        std::cout << "Ehh...ok..Pick a name then I guess.\n";
        std::cout << "  1) Dragon\n";
        std::cout << "  2) Knighthawk\n";
        std::cout << "  3) Splinter\n";
        std::cin >> name;
        std::cout << "===============================================\n";

        while (name != 1 && name != 2 && name !=3)
        {
            std::cout << "Please pick a valid option.\n";
            std::cout << "  1) Dragon\n";
            std::cout << "  2) Knighthawk\n";
            std::cout << "  3) Splinter\n";
            std::cin >> name;
            std::cout << "===============================================\n";
        }

        std::cout << "I can't believe you really went ahead with that.\n";
        std::cout << "The poor kid.\n";
        std::cout << "All fun and games.. Thanks for playing!!\n";
        std::cout << "===============================================\n";
        
    }
    return 0;
}
    


