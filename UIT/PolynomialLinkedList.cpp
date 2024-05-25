#include <bits/stdc++.h>
using namespace std;


struct DONTHUC {
    int somu;
    double heso;

    DONTHUC(double _heso = 0, int _somu = 0) {
        heso = _heso;
        somu = _somu;
    }

    DONTHUC& operator=(const DONTHUC& rhs) {
        if (this == &rhs) return *this;
        this->heso = rhs.heso;
        this->somu = rhs.somu;
        return *this;
    }
};


struct Node {
    DONTHUC* data;
    Node* next;

    Node(DONTHUC* _data = nullptr) {
        this->data = _data;
        this->next = nullptr;
    }

};

struct DATHUC {
    Node* head;
    Node* tail;
    DATHUC() {
        this->head = nullptr;
        this->tail = nullptr;
    }
};

// void Nhap(DATHUC& B, double H, int E) {
//     DONTHUC* D = new DONTHUC(H, E);
//     Node* n = new Node(D);

//     if (!B.head) { B.head = n; }
//     else { B.tail->next = n; }

//     B.tail = n;
// }

// void Xuat(const DATHUC& B) {
//     string s = "";
//     Node* cur = B.head;
//     while (cur) {
//         if (cur->data->heso != 0) {
//             if (cur->data->heso == 1 or cur->data->heso == -1) {
//                 if (cur->data->somu == 0) {
//                     cout << 1 * (cur->data->heso == 1) - 1 * (cur->data->heso == -1);
//                     s += to_string(1 * (cur->data->heso == 1) - 1 * (cur->data->heso == -1));
//                 }
//                 else if (cur->data->somu == 1) {
//                     cout << (cur->data->heso == -1) ? "-x" : "x";
//                     s += (cur->data->heso == -1) ? "-x" : "x";
//                 }
//                 else {
//                     cout << (cur->data->heso == -1 ? "-x^" : "x^") << cur->data->somu;
//                     s += "-x^" + to_string(cur->data->somu);
//                 }
//             }
//             else if (cur->data->heso < 0) {
//                 if (cur->data->somu == 0) {
//                     cout << cur->data->heso;
//                     s += to_string(cur->data->heso);
//                 }
//                 else if (cur->data->somu == 1) {
//                     cout << cur->data->heso << "x";
//                     s += to_string(cur->data->heso) + "x";
//                 }
//                 else {
//                     cout << cur->data->heso << "x^" << cur->data->somu;
//                     s += to_string(cur->data->heso) + "x^" + to_string(cur->data->somu);
//                 }
//             }
//             else {
//                 cout << cur->data->heso << "x^" << cur->data->somu;
//                 s += to_string(cur->data->heso) + "x^" + to_string(cur->data->somu);
//             }
//         }
//         if (cur->next and cur->next->data->heso > 0) {
//             cout << "+";
//             s += "+";
//         }

//         cur = cur->next;
//     }

//     if (s.empty()) cout << 0;

// }

// double TinhDaThuc(DATHUC& B, double x) {
//     double res = 0.0;
//     Node* cur = B.head;
//     while (cur) {
//         res += cur->data->heso * pow(x, cur->data->somu);
//         cur = cur->next;
//     }
//     return res;
// }

void Nhap(DATHUC& B, double heso, int somu) {
    DONTHUC* p = new DONTHUC(heso, somu);
    Node* node = new Node(p);
    if (B.head == nullptr) {
        B.head = node;
        B.tail = node;
    }
    else {
        B.tail->next = node;
        B.tail = node;
    }
}

void Xuat(DATHUC& B) {
    bool first = true;
    for (Node* p = B.head; p != nullptr; p = p->next) {
        if (p->data->heso == 0) continue;
        if (!first && p->data->heso > 0) cout << "+";
        first = false;
        if (p->data->somu == 0) {
            cout << p->data->heso;
        }
        else if (p->data->somu == 1) {
            if (p->data->heso == -1) cout << "-x";
            else if (p->data->heso == 1) cout << "x";
            else cout << p->data->heso << "x";
        }
        else {
            if (p->data->heso == -1) cout << "-x^" << p->data->somu;
            else if (p->data->heso == 1) cout << "x^" << p->data->somu;
            else cout << p->data->heso << "x^" << p->data->somu;
        }
    }
    if (first) cout << "0";
}

double TinhDaThuc(DATHUC& B, double x) {
    double sum = 0;
    for (Node* p = B.head; p != nullptr; p = p->next) {
        sum += p->data->heso * pow(x, p->data->somu);
    }
    return sum;
}

int main() {
    DATHUC B;
    int N;

    cin >> N;
    for (int test = 0; test < N; test++) {
        double heso; int somu;
        cin >> heso >> somu;
        Nhap(B, heso, somu);
    }


    cout << "Da thuc vua nhap la: "; Xuat(B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
        << setprecision(2) << fixed << TinhDaThuc(B, x);
    return 0;
}
