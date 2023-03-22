# 題目9. 計算正整數被3整除之數值之總和
### 問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

### 輸入說明：
輸入一正整數。
### 輸出說明：
輸出總和。

### 範例：
#### 輸入範例:
100

150
#### 輸出範例:
1683

3825

### 解答
```
#include <iostream>
using namespace std;
int main()
{
    int x;

    cin >> x;

    switch (x)
    {
    case 3:
    case 4:
    case 5:
        cout << "Spring" << endl;
        break;

    case 6:
    case 7:
    case 8:
        cout << "Summer" << endl;
        break;

    case 9:
    case 10:
    case 11:
        cout << "Autumn" << endl;
        break;

    case 12:
    case 1:
    case 2:
        cout << "Winter" << endl;
        break;
    }

    return 0;
}
```
