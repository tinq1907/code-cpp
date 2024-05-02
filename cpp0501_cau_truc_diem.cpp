#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
typedef struct Point{
    double x;
    double y; 
};
void input (Point &c){
    cin >> c.x >> c.y;
}
double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}