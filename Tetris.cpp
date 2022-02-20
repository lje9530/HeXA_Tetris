#include <iostream>

//1. Map 클래스를 만들고 NxN 그리드를 필드로 가지도록 설계하세요. 

//2. 블록 추상 클래스를 만들고 자식 클래스로 각 모양을 구현하세요 (블록 추상 클래스의 size는 4x4, 자식 클래스에서 4x4 이내의 크기 지정, 회전 상태 필요)

//3. Map 클래스에서 grid 정보를 가져올 수 있는 getter와 블록을 특정 위치에 위치시킬 수 있는 setter를 구현하세요
class Map {
    private:
    int* grid; //그리드 정보
    int x, y;
    public:
    int getter();
    Map(int N); // N*N 크기의 그리드 생성.
    ~Map();

    void setter(int position_x, int position_y);

};

int Map::getter() { };
void Map::setter(int position_x, int position_y) {};

Map::Map(int N) {
    grid = 
};
Map::~Map() { delete[] grid; };

class Block {
    private:
        int spin; // 0~3 값을 가지는 회전 상태.
        
    public:

};


int main() {
    return 0;
}