#include <random>
#include <iostream>

// update: im gud :D
class plrInfo {
 public: 
 int attempts;
 int difficulty;
 int guess;
};

int main() {
 plrInfo player; // class - object
 player.attempts = 0;
 std::cout << "Enter level difficulty (1-3): ";
 std::cin >> player.difficulty; // stupid carrots smh
 // TODO: add checking for letters or blank
 if (player.difficulty > 3 || player.difficulty < 1) {
   std::cout << "The number you entered is not 1-3, stop being stubborn bro.\n";
   return 0;
 }
 std::cout << "Type a number 1-10: ";
 std::cin >> player.guess;
 // when i get non lazy ill do this
 return 0;
}
