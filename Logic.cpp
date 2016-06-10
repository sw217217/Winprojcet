#include <iostream>
using namespace std;

void main()
{
  char menu;
  int result;
  int data1;
  int data2;

  cout << "하고싶은것 입력 : ";
  cin >> menu;
  switch (menu)
  {
    case 'A': 
    cout << "첫번째 값 입력 : ";
    cin >> data1;
    cout << "두번째 값 입력 : ";
    cin >> data2;
    if(data1 == 1 && data2 == 1)
    {
      result = 1;
    }
    else
    {
      result = 0;
    }
    cout << "결과는 : " <<result;
    break;
    
    case 'O':
    cout << "첫번째 값 입력 : ";
    cin >> data1;
    cout << "두번째 값 입력 : ";
    cin >> data2;
    if(data1 == 1 || data2 == 1)
    {
      result = 1;
    }
    else
    {
      result = 0;
    }
    cout << "결과는 : "<<result;
    break;

    case 'N':
    cout << "NOT 연산을 할 값 입력 : ";
    cin >> data1;
    result = !data1;
    cout << "결과는 : "<< result;
    break;

    case 'X' :
    cout << "첫번째 값 입력 : ";
    cin >> data1;
    cout << "두번째 값 입력 : ";
    cin >> data2;
    if(data1 = !data2)
    {
      result = 1;
    }
    else
    {
      result = 0;
    }
    cout << "결과는 : " <<result;
    break;



  }

  return;
}