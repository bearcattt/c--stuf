#include <iostream>
#include <random>
#include <stdexcept>

// update: im gud :D
class plrInfo
{
private:
  int attempts;
  int difficulty;
  int guess;
public:
  plrInfo() // constructor automatically initializes attempts as 0
  {
    attempts = 0;
  }
  void setDifficulty(int& inputDifficulty) // class defines behavior of setting variables, not the user
  {
  // exception handling for more polished and safe code
    if (inputDifficulty > 3 || inputDifficulty < 1)
      throw "Exception: Invalid input.";
    else {difficulty = inputDifficulty;}
  }
  void setGuess(int& inputGuess)
  {
    if (inputGuess > 10 || inputGuess < 1)
    {
      throw std::invalid_argument("Exception: Invalid input.");
    }
    else {guess = inputGuess;}
  }
};

int main() {
  int inputDifficulty;
  int inputGuess;
  plrInfo player; // class - object
  std::cout << "Enter level difficulty (1-3): ";
  std::cin >> inputDifficulty; // stupid carrots smh
  try
  {
    player.setDifficulty(inputDifficulty);
  }
  catch(const char* exp)
  {
    std::cout << exp << std::endl;
    return 1; // 1 means error
  }
  std::cout << "Type a number 1-10: ";
  std::cin >> inputGuess;
  try
  {
    player.setGuess(inputGuess);
  }
  catch(const char* exp)
  {
    std::cout << exp << std::endl;
    return 1;
  }
  // when i get non lazy ill do this
  return 0;
}
