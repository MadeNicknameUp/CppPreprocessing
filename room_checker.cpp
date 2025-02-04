#include <iostream>
#include <vector>

// Macro to initialize a variable to 0
#define new(name) name(0)

// Vectors to store room numbers with too many or too few people
std::vector<int> too_much;
std::vector<int> free_room;

// Variable to store the total number of people
int summa = 0;

// Function to output rooms with too many people
int too_much_output(int i = 0)
{
    std::cout << too_much[i] << std::endl;

    if (i + 1 == too_much.size())
        return 0;
    
    return too_much_output(i + 1);
}

// Function to output rooms with too few people
int too_free_room(int i = 0)
{
    std::cout << free_room[i] << std::endl;

    if (i + 1 == free_room.size())
        return 0;
    
    return too_free_room(i + 1);
}

// Function to check the number of people in each room
int check(int i = 0)
{
    int people_counter;

    std::cin >> people_counter;
    summa += people_counter;

    if (people_counter > 20)
        too_much.push_back(i+1);
    else if (people_counter < 20)
        free_room.push_back(i+1);
    if (i + 1 == 10){
        new(too_much_output);
        new(too_free_room);
        return 0;
    }
    return check(i + 1);
}

int main()
{
    new(check);

    return 0;
}