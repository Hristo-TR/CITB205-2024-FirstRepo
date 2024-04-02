#include<iostream>
using std::string;

class Asker{
public:
    string ask(string question);
};

string Asker::ask(string question)
{
    std::cout << question << std::endl;
    string answer;
    std::cin >> answer;
    return answer;
}
