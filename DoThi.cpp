#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

#define MAX 20

int A[MAX][MAX]; // ma tran trong so
int n;           // so dinh

// Ham Nhap: doc ma tran trong so tu file vao ma tran A
bool Nhap(const char *tenFile) {
    ifstream f(tenFile);
    if (!f.is_open()) {
        cout << "Khong mo duoc file " << tenFile << endl;
        return false;
    }
    f >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            f >> A[i][j];
    f.close();
    return true;
}

// Ham Hien Thi: in ma tran trong so ra man hinh
void HienThi() {
    cout << "So dinh: " << n << endl;
    cout << "   ";
    for (int j = 0; j < n; j++)
        cout << setw(4) << (char)('A' + j);
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(3) << (char)('A' + i);
        for (int j = 0; j < n; j++)
            cout << setw(4) << A[i][j];
        cout << endl;
    }
}

int main() {
    if (Nhap("Grap.txt"))
        HienThi();
    return 0;
}
