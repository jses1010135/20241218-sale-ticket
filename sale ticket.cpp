// sale ticket.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
float age;
using namespace std;
int main()
{
	//讓使用者輸入年齡，存入age
	cout << "Please enter your age: ";
	cin >> age;
	cout << "your age is: " << age << endl;
	//判斷年齡，並輸出票種
	if (age <= 0)
	{
		//如果年齡小於0，則結束程式
		return -1;
	}
	
	else if (age >= 0 && age < 6)//&&是and的意思，||是or的意思
	{
		cout << "不用錢";//如果年齡在0~5歲之間，則輸出不用錢並結束程式
		return 0;
	}
	else if (age >= 6 && age <= 11)
	{
		cout << "half";//如果年齡在6~11歲之間，則輸出half
		return 0;
	}
	else if (age >= 12 && age <= 17)
	{
		cout << "student";//如果年齡在12~17歲之間，則輸出student
		return 0;
	}
	else if (age >= 18)
	{
		cout << "full";//如果年齡在18歲以上，則輸出full
		return 0;
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
