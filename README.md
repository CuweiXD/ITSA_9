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
    int x, i, ans = 0;

    cin >> x;

    for (i = 1; i <= x; i++) {

        if (i % 3 == 0) {
            ans = ans + i;
        }
    }

    cout << ans << endl;

}
```
