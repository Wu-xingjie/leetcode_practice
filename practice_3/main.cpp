#include "del_link.h"

int main() {
  Link test;
  test.insert("wxj");
  test.insert("cx");
  test.insert("zwj");
  test.insert("cjq");
  test.insert("zwt");
  std::cout << "**********display*********" << std::endl;
  test.display();
  std::cout << "**********erase value*********" << std::endl;
  test.erase("zwt");
  test.erase("zwj");
  test.display();
  std::cout << "**********erase position*********" << std::endl;
  test.erase(1);
  test.display();
  return 0;
}