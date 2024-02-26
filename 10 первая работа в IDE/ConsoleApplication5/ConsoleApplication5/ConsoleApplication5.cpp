#include <iostream>
using namespace std;
bool CheckCorrectIpOnlyNum(char index, char startSize, char finishSize){
    if (index == '.' || (index >= startSize && index <= finishSize)) {
        return true;
    }
    return false;
}
bool checkCorrectLengthNumber(string str, int count) {
    int correctPatern = 1;
    if (count == 2) {
        if (str[0] >= '1') {
            correctPatern++;
        }
    }
    else if (count == 3) {
        correctPatern = 0;
        for (int i = 0; i < count; i++) {
            if (i == 0 && (str[i] >= '1' && str[i] <= '2')) {
                correctPatern++;
            }
            else if (((i == 1 && str[0] == '2') || (i == 2 && str[1] == '5')) 
                && (str[i] >= '0' && str[i] <= '5')) {
                correctPatern++;
            }
            else if ((i == 1 && str[0] != '2') || (i == 2 && str[1] != '5')
                && (str[i] >= '0' && str[i] <= '9')) {
                correctPatern++;
            }
        }
    }

    if(correctPatern == count){
        return true;
    }
    else {
        return false;
    }
  
}

bool SeparatingNumbers(string str, int position) {
    int countNumber = 0;
    string oneNumber = "";

    for (int i = position; i < str.length(); i++) {
        if (str[i] == '.') break;
        oneNumber += str[i];
        if (str[i] != '.') countNumber++;
    }

    if (countNumber <= 3) {
        return checkCorrectLengthNumber(oneNumber, countNumber);
    }
    else return false;
}

void CheckIpChar(string str) {
    int dothTracer = 0;
    int dothTracerERROR = 0;
    bool Error = true;

    for (int i = 0; i < str.length(); i++) {
        dothTracerERROR += str[i] == '.' && str[i + 1] == '.' ? 1 : 0;
        dothTracer += str[i] == '.' ? 1 : 0;
        if (!CheckCorrectIpOnlyNum(str[i], '0', '9')) {
            Error = false;
            break;
        }
        if (( (str[i] != '.' && i > 0 && str[i - 1] == '.') || i == 0) && !SeparatingNumbers(str, i)) {
            Error = false;
            break;
        }

    }
    if (dothTracerERROR > 0 || dothTracer > 3) {
        Error = false;
    }
    if (Error) {
        cout << "valid";
    }
    else cout << "invalid";;
}

int main()
{
    string IP;
    cout << "Enter IP: ";
    cin >> IP;
    CheckIpChar(IP);
}
