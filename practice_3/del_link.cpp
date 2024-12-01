#include "del_link.h"

Link::~Link() {
  Node* p = _root->_next;
  while (p) {
    _root->_next = p->_next;
    delete p;
    p = _root->_next;
  }
}

Node* Link::FindLastNode() {
  Node* p = _root;
  while (p->_next) {
    p = p->_next;
  }
  return p;
}

Node* Link::FindNode(const std::string& val) {
  Node* p = _root->_next;
  while (p) {
    if (p->_val == val) {
      return p;
    }
    p = p->_next;
  }
  throw "no node value is " + val;
}

void Link::insert(const std::string& val) {
  Node* p = FindLastNode();
  Node* new_node = new Node(val);
  p->_next = new_node;
  new_node->_before = p;
  _size++;
}

void Link::erase(const std::string& val) {
  Node* p = FindNode(val);
  if (p != FindLastNode()) {
    p->_before->_next = p->_next;
    p->_next->_before = p->_before;
  } else {
    p->_before->_next = nullptr;
  }
  delete p;
  _size--;
}

void Link::display() {
  Node* p = _root->_next;
  while (p) {
    std::cout << p->_val;
    if (p->_next) {
      std::cout << "->";
    } else {
      std::cout << ";" << std::endl;
    }
    p = p->_next;
  }
}

void Link::erase(const int& pos) {
  if (pos > _size) {
    std::cout << "out of range" << std::endl;
    return;
  }
  Node* p = _root->_next;
  for (int i = 0; i < _size - pos; i++) {
    p = p->_next;
  }

  if (p != FindLastNode()) {
    p->_before->_next = p->_next;
    p->_next->_before = p->_before;
  } else {
    p->_before->_next = nullptr;
  }
  delete p;
  _size--;
}