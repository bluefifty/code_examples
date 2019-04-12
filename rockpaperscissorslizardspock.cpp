#include <iostream>
#include <stdlib.h>

int main() {
  
srand (time(NULL));

int computer = rand() % 5 + 1;
  
int user = 0;
  
std::cout << "===============================\n";
std::cout << "rock paper scissors lizard spock!\n";
std::cout << "===============================\n";

std::cout << "1 ✊\n";
std::cout << "2 ✋\n";
std::cout << "3 ✌️\n";
std::cout << "4 🦎\n";
std::cout << "5 🖖\n";

std::cout << "shoot! ";

std::cin >> user;
  
if (user == 1 & computer == 1){
  
  std::cout << "✊✊\ntie, rock against rock\n";
  
}

else if (user == 1 & computer == 2){
  
  std::cout << "✊✋\ncomputer wins, paper beats rock\n";
  
}
  
else if (user == 1 & computer == 3){
  
  std::cout << "✊✌️\nyou win! rock beats scissors\n";
  
}

else if (user == 1 & computer == 4){
  
  std::cout << "✊🦎\nyou win! rock crushes lizard\n";
  
}  
  
else if (user == 1 & computer == 5){
  
  std::cout << "✊🖖\ncomputer wins, Spock vaporizes rock\n";
  
}
  
else if (user == 2 & computer == 1){
  
  std::cout << "✋✊\nYou win! paper covers rock\n";
  
}

else if (user == 2 & computer == 2){
  
  std::cout << "✋✋\ntie, paper against paper\n";
  
}
  
else if (user == 2 & computer == 3){
  
  std::cout << "✋✌️\ncomputer wins, scissors cut paper\n";
  
}

else if (user == 2 & computer == 4){
  
  std::cout << "✋🦎\ncomputer wins, lizard eats paper\n";
  
}  
  
else if (user == 2 & computer == 5){
  
  std::cout << "✋🖖\nyou win! paper disproves Spock\n";
  
}  

else if (user == 3 & computer == 1){
  
  std::cout << "✌️✊\ncomputer wins, rock smashes scissors\n";
  
}

else if (user == 3 & computer == 2){
  
  std::cout << "✌️✋\nYou win! scissors cuts paper\n";
  
}
  
else if (user == 3 & computer == 3){
  
  std::cout << "✌️✌️\ntie, scissors against scissors\n";
  
}

else if (user == 3 & computer == 4){
  
  std::cout << "✌️🦎\nYou win! scissors decapitate lizard\n";
  
}  
  
else if (user == 3 & computer == 5){
  
  std::cout << "✌️🖖\ncomputer wins, Spock smashes scissors\n";
  
}
  
else if (user == 4 & computer == 1){
  
  std::cout << "🦎✊\ncomputer wins, rock crushes lizard\n";
  
}

else if (user == 4 & computer == 2){
  
  std::cout << "🦎✋\nYou win! lizard eats paper\n";
  
}
  
else if (user == 4 & computer == 3){
  
  std::cout << "🦎✌️\ncomputer wins, scissors decapitate lizard\n";
  
}

else if (user == 4 & computer == 4){
  
  std::cout << "🦎🦎\ntie, lizard against lizard\n";
  
}  
  
else if (user == 4 & computer == 5){
  
  std::cout << "🦎🖖\nYou win! lizard poisons Spock\n";
  
}  
  
else if (user == 5 & computer == 1){
  
  std::cout << "🖖✊\nYou win! Spock vaporizes rock\n";
  
}

else if (user == 5 & computer == 2){
  
  std::cout << "🖖✋\ncomputer wins, paper disproves Spock\n";
  
}
  
else if (user == 5 & computer == 3){
  
  std::cout << "🖖✌️\nYou win! Spock smashes scissors\n";
  
}

else if (user == 5 & computer == 4){
  
  std::cout << "🖖🦎\ncomputer wins, lizard poisons Spock\n";
  
}  
  
else if (user == 5 & computer == 5){
  
  std::cout << "🖖🖖\ntie, Spock Prime helps young Spock\n";
  
}
  
else {
  
  std::cout << "invalid input";
  
}
  
}
