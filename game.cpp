#include <iostream>

using namespace std;

class GameMessages
{
    public:
        GameMessages()
        {
            cout << "Math Game! By shab#1753" << endl;
        }
        void startMessage()
        {
            cout << "Welcome to the math game! To play please guess my random numbers!" << endl;
        }

        void skipMessage()
        {
            cout << "To skip messages, type: '00'. This reveal the answer" << endl;
        }

        void winMessage()
        {
            cout << "Congratulations! You have won the game!" << endl;
        }
        void failMessage()
        {
            cout << "Error has occurred please re-run" << endl;
        }
        void lostMessage()
        {
            cout << "Mission Failed! You lost!" << endl;
        }
        void questionMessage()
        {
            cout << "I am thinking of a number, can you guess what it is?" << endl;
        }
};

int main()
{
    GameMessages msgs;
    msgs.questionMessage();
    msgs.skipMessage();

    int answer = 69;
    int yourAns;
    cin >> yourAns;
    while (yourAns != answer)
    {
        msgs.lostMessage();
        msgs.questionMessage();
        cin >> yourAns;
        if (yourAns == answer)
        {
            msgs.winMessage();
            break;
        }
        if (yourAns == 00)
        {
            cout << "Answer was: " << answer << endl;
            msgs.lostMessage() ;
            break;
        }
    }
}
