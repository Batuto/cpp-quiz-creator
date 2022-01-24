#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


struct Question {
  unsigned short int id;
  string question;
  string answers[3];
  unsigned int points;
  bool correct;
};

Question question[3];

int main() {
  unsigned int points = 0;

  question[0] = {1,
                 "Which instrument does a pianist play?",
                 {"A piano", "A saxophone", "A piccolo"},
                 10};
  question[1] = {2,
                 "A portrait is a picture of what?",
                 {"A person", "A portal", "A vial of musk"},
                 10};
  question[2] = {3,
                 "Which mammal lives the longest?",
                 {"The bowhead whale", "The garden dormouse", "Chabelo"},
                 10};
  
  for(unsigned short int i = 0; i < 3; i++){
    cout << question[i].question << endl;
    for(unsigned short int j = 0; j < 3; j++)
      cout << question[i].answers[j] << endl;

    unsigned short int choosen_answer;
    cout << "Choose your answer (1-3): ";
    cin >> choosen_answer;
    if(choosen_answer == 1)
    points += question[i].points;
    cout << endl;
  }
  cout << points;
  
  return 0;
}
