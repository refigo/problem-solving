#include <bits/stdc++.h>
using namespace std;

/*
* 선분 그룹 문제 해결
* - 선분 교차 확인을 위한 CCW 알고리즘
* - 연결 요소 분석을 위한 Union-Find 자료구조
*/

// 점 정의
struct Point {
    long long x, y;
    Point() {}
    Point(long long _x, long long _y) : x(_x), y(_y) {}
};

// 선분 정의
struct Line {
    Point p1, p2;
    Line() {}
    Line(Point _p1, Point _p2) : p1(_p1), p2(_p2) {}
};

// CCW(나선 방향) 연산: 세 점의 방향성 확인
int ccw(Point a, Point b, Point c) {
    long long result = (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);
    if (result > 0) return 1;  // 반시계 방향
    else if (result < 0) return -1;  // 시계 방향
    else return 0;  // 일직선
}

// 두 선분의 교차 여부 확인
bool isIntersect(Line l1, Line l2) {
    int abc = ccw(l1.p1, l1.p2, l2.p1);
    int abd = ccw(l1.p1, l1.p2, l2.p2);
    int cda = ccw(l2.p1, l2.p2, l1.p1);
    int cdb = ccw(l2.p1, l2.p2, l1.p2);
    
    // 두 선분이 일직선인 경우의 교차 체크
    if (abc == 0 && abd == 0) {
        // 좌표를 비교하여 선분들이 겨치는지 확인
        if (l1.p1.x > l1.p2.x || (l1.p1.x == l1.p2.x && l1.p1.y > l1.p2.y)) swap(l1.p1, l1.p2);
        if (l2.p1.x > l2.p2.x || (l2.p1.x == l2.p2.x && l2.p1.y > l2.p2.y)) swap(l2.p1, l2.p2);
        
        return (l2.p1.x <= l1.p2.x && l1.p1.x <= l2.p2.x &&
                l2.p1.y <= l1.p2.y && l1.p1.y <= l2.p2.y);
    }
    
    // 선분들이 교차하는 경우
    return (abc * abd <= 0 && cda * cdb <= 0);
}

// Union-Find 자료구조
class UnionFind {
private:
    vector<int> parent, rank, size;
    int count; // 그룹 수
    
public:
    UnionFind(int n) : parent(n), rank(n, 0), size(n, 1), count(n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    // 루트 클래스 찾기 (경로 압축 최적화 적용)
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    // 두 요소 합치기
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        
        if (rootX == rootY) return;
        
        // 두 집합 합치기 (랭크에 따라 규혐적으로)
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
            size[rootY] += size[rootX];
        } else {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
            if (rank[rootX] == rank[rootY]) {
                rank[rootX]++;
            }
        }
        
        // 그룹 수 감소
        count--;
    }
    
    // 그룹 수 반환
    int getCount() const {
        return count;
    }
    
    // 특정 그룹의 크기 반환
    int getSize(int x) {
        return size[find(x)];
    }
    
    // 최대 그룹 크기 반환
    int getMaxSize() {
        int maxSize = 0;
        for (int i = 0; i < parent.size(); i++) {
            if (parent[i] == i) { // 그룹의 루트인 경우만 확인
                maxSize = max(maxSize, size[i]);
            }
        }
        return maxSize;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<Line> lines(n);
    
    for (int i = 0; i < n; i++) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        lines[i] = Line(Point(x1, y1), Point(x2, y2));
    }
    
    // Union-Find 초기화
    UnionFind uf(n);
    
    // 모든 선분 쌍에 대해 교차 여부 확인
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isIntersect(lines[i], lines[j])) {
                // 교차하는 선분들은 같은 그룹으로 합치기
                uf.unite(i, j);
            }
        }
    }
    
    // 결과 출력: 그룹 수와 최대 그룹 크기
    cout << uf.getCount() << '\n';
    cout << uf.getMaxSize() << '\n';
    
    return 0;
}