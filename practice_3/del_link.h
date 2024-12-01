#pragma once

#include <iostream>
#include <string>

struct Node {
  Node(std::string val) : _val(val), _before(nullptr), _next(nullptr) {}
  Node() : _before(nullptr), _next(nullptr) {}
  std::string _val;
  Node* _next;
  Node* _before;
};

class Link {
 public:
  Link() : _size(0) { _root = new Node(); }
  ~Link();
  void insert(const std::string& val);
  void erase(const std::string& val);
  void erase(const int& pos);
  void display();

 protected:
  Node* FindLastNode();
  Node* FindNode(const std::string& val);

 private:
  Node* _root;
  int _size;
};
