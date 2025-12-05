#include <iostream>
#include <cmath>

int main(){

    // --- Part 1 ---
    int potions_bought = 5;
    int arrows_bought = 100;
    int potion_price = 10;
    int arrow_price = 1;

    int total_cost = (potions_bought * potion_price) + (arrows_bought * arrow_price);
    total_cost--;
    int change = 1000 - total_cost;

    std::cout << "Your change is " << change << " gold conins." << '\n';

    // --- Part 2 ---
    int swings = 10;
    int hits = 7;

    double accuracy = hits/(double)swings;
    std::cout << "Your accuracy is " << accuracy * 100 << "%" << '\n';

    // --- Part 3 ---
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Welcome " << name << ", " << "age " << age << '\n';

    // --- Part 4 ---
    int damage = pow(3, 4);
    int x = 25;
    int distance = sqrt(x);
    int health = round(45.7);

    std::cout << health << '\n';

    // --- Final Part ---
    std::string monster_name;
    int damage_dealt;
    int damage_taken;

    std::cout << "Enter the Monster's Name: ";
    std::getline(std::cin >> std::ws, monster_name);
    
    std::cout << "Enter the Damage Dealt: ";
    std::cin >> damage_dealt;
    
    std::cout << "Enter the Damage Taken: ";
    std::cin >> damage_taken;

    int net_score  = damage_dealt - damage_taken;
    double taxed_score = 0.9 * net_score;
    taxed_score = floor(taxed_score);

    std::cout << "Battle with " << monster_name << " complete." << '\n';
    std::cout << "Final Score: " << taxed_score;
}