#include<iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> v;
    std::cin >> n;
//заполняем вектор
    for(int i = 0; i <= n; i++) v.push_back(i);
//обработка
    for(int i = 2; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if(v[j] == 0) continue;
            if(j % i == 0) {
                v[j] = 0;
                continue;
            }
        }
        if(i * i > n) break; 
    }
//вывод на печать
    for(int s : v) {
        if(s != 0) std::cout << s << '\n';
    }
return 0;
}