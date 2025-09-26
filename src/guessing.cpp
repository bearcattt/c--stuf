#include <string>
#include <iostream>

// update: im gud :D
class plrInfo {
 public: 
 int attempts;
 int difficulty;
};

int main() {
 plrInfo player; // class - object
 player.attempts = 0;
 std::cout << "Enter level difficulty (1-3): ";
 std::cin >> player.difficulty; // stupid carrots smh
 
 if (player.difficulty > 3 || player.difficulty < 1) {
   std::cout << "The number you entered is not 1-3, stop being stubborn bro.\n";
   return 0;
 }
 // when i get non lazy ill do this
 return 0;
}
