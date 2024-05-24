#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
int kh = 1;
int mh = 1;
int dh = 1;
class KhachHang;
class MatHang;
class HoaDon;
map <string, KhachHang> mp1;
map<string, MatHang> mp2;

class KhachHang{
    public:
        friend class HoaDon;
        string id1, name1, gen, dob, add;
        friend istream &operator >> (istream &mycin, KhachHang &a){
            if (kh < 10) a.id1 = "KH00" + to_string(kh++);
            else if (kh >= 10) a.id1 = "KH0" + to_string(kh++);
            getline(cin >> ws, a.name1);
            getline(cin >> ws, a. gen);
            getline(cin >> ws, a.dob);
            getline(cin >> ws, a.add);
            mp1[a.id1] = a;
            return mycin;
        }
};
class MatHang{
    public:
        friend class HoaDon;
        string id2, name2, type;
        int bprice, sprice;
        friend istream &operator >> (istream &mycin, MatHang &a){
            if (mh < 10) a.id2 = "MH00" + to_string(mh++);
            else if (mh >= 10) a.id2 = "MH0" + to_string(mh++);
            getline(cin >> ws, a.name2);
            getline(cin >> ws, a.type);
            cin >> a.bprice >> a.sprice; 
            mp2[a.id2] = a;
            return mycin;
        }
        
};

class HoaDon{
    public:
        string id3;
        string mkh, mdh;   
        int num; 
        friend istream &operator >> (istream &mycin, HoaDon &a){
            if (dh < 10) a.id3 = "HD00" + to_string(dh++);
            else if (dh >= 10) a.id3 = "HD0" + to_string(dh++);
            mycin >> a.mkh >> a.mdh >> a.num;
            return mycin;
        }
        friend ostream &operator << (ostream &mycout, HoaDon a){
            cout << a.id3 << " ";
            cout << mp1[a.mkh].name1 << " " << mp1[a.mkh].add << " ";
            cout << mp2[a.mdh].name2 << " " << mp2[a.mdh].type << " ";
            cout << mp2[a.mdh].bprice << " " << mp2[a.mdh].sprice << " " << a.num << " " << a.num * mp2[a.mdh].sprice;
            cout << endl;
            return mycout;
        }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}