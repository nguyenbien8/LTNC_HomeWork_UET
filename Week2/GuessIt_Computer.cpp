#include <bits/stdc++.h>
using namespace std;

int selectNumber(int left, int right){
    return (left + right) / 2;
}
char getHostAnswer(int mid){
    char answer;
    cout << "Host: Your number is " << mid << endl;
    cout << "NVB: Your answer is ";
    cin >> answer;
    return answer;
}

int main()
{
    int mid; char answer;
    int left = 1, right = 100;
    do{
        mid = selectNumber(left, right);
        answer = getHostAnswer(mid);
        if(answer == '<') left = mid + 1;
        else if(answer == '>') right = mid - 1;
    }while (answer != '=');
    if(answer == '=') cout << "Congratulate! ";

    return 0;
}
