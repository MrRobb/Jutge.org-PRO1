#include <iostream>

using namespace std;

struct Rectangle {
  int x_left, x_right, y_down, y_up;
};

void read(Rectangle& r){
  // reads x_left, x_right, y_down and y_up
  cin >> r.x_left >> r.x_right >> r.y_down >> r.y_up;
}

int relationship(const Rectangle& r1, const Rectangle& r2){
  /* Returns:
   * 1: r1 < r2
   * 2: r2 < r1
   * 3: intersect
   * 4: identical
   * 0: other
  */
  if (r2.x_left == r1.x_left and r1.x_right == r2.x_right and r1.y_up == r2.y_up and r2.y_down == r1.y_down){
    return 4;
  } else if (r2.x_left <= r1.x_left and r1.x_right <= r2.x_right and r1.y_up <= r2.y_up and r2.y_down <= r1.y_down){
    return 1;
  } else if (r1.x_left <= r2.x_left and r2.x_right <= r1.x_right and r2.y_up <= r1.y_up and r1.y_down <= r2.y_down) {
    return 2;
  } else if ((r1.y_down > r2.y_up) or (r2.y_down > r1.y_up) or (r1.x_left > r2.x_right) or (r2.x_left > r1.x_right)){
    return 0;
  } else {
    return 3;
  }
}

int main(){
  int n, related;
  cin >> n;
  for(int i = 0; i < n; ++i){
    Rectangle r1;
    Rectangle r2;
    read(r1);
    read(r2);

    related = relationship(r1,r2);

    if (related == 1) cout << "the first rectangle is inside the second one" << endl;
    else if (related == 2) cout << "the second rectangle is inside the first one" << endl;
    else if (related == 3) cout << "rectangles intersect" << endl;
    else if (related == 4) cout << "rectangles are identical" << endl;
    else cout << "rectangles do not intersect" << endl;
  }
}