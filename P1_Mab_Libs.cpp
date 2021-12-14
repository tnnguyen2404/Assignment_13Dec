
#include <iostream>
using std::cout;
using std::cin;
using std::string;

string askText(string prompt) {
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

int askNumber(string prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(string noun, string verb, string verbing, string bodyPart, string adj, int number) {

    cout << "Shecky is on a mession to have his " << noun << " buddies and needs your help!\n";
    cout << "To prepare for your journey, you will do jumping jacks for " << number << " seconds. \n";
    cout << "Now you are ready to help save his friend.\n";
    cout << "Let's get started! As you are searching and " << verbing << ", you come accoss a " << noun;
    cout << " and the only way to get past it is to stand up and wiggle your " << bodyPart << " " << number << " times.\n";
    cout << "Uh-oh, looks like a " << adj << " path up ahead. ";
    cout << "You will have to yell " << noun << " while you jump and " << verb << " in a circle. \n";
    cout << "That was " << adj << ". ";
    cout << "Shecky thinks you are close to saving his friends, but you still need to walk backward while " << verbing << ". ";
    cout << "Then, don't forget to strike a pose that looks like a " << noun << ". ";
    cout << "Shecky sees his pals, but there is only one more task you must complete. \n";
    cout << verb << " as you can while singing " << noun << ".\n";
    cout << "You did it! You saved Shecky's friends! Shecky is so " << adj << " and you do frog hops to celebrate.";

}

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string noun, string verb, string verbing, string bodyPart, string adj, int number);

int main()
{
    string noun = askText("Give me a proper noun: ");
    int number = askNumber("Give me a number: ");
    string verb = askText("Give me a verb: ");
    string verbing = askText("Give me a verbing: ");
    string bodyPart = askText("Give me a body part: ");
    string adj = askText("Give me an adjective: ");

    tellStory(noun, verb, verbing, bodyPart, adj, number);

}


