#include <stdio.h>

template <typename Type>

Type Min(int a, float b)
{

    /// 関数テンプレート
    if (a > b) {
        return static_cast<float>(b);
    } else {
        return static_cast<int>(a);
    }
}

int main()
{

    // 計算と結果出力
    printf("%d\n", Min<int>(128, 256));
    printf("%f\n", Min<float>(52.5f, 55.0f));
    printf("%lf\n", Min<double>(3.14159265, 2.7182818281));

    return 0;
}
