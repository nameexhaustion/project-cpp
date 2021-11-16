#include <cstdlib>

namespace lib {
namespace dsa {
namespace slist {
template <class T>
class Node {
 public:
  T data;
  Node* next = nullptr;

  Node(T d, Node* n) {
    this->data = d;
    this->next = n;
  }
};

template <class T>
class List {
 public:
  Node<T>* head = nullptr;

  void push(T data) {
    auto n = new Node<T>(data, this->head);
    this->head = n;
  }

  T pop() {
    if (this->head == nullptr) {
      return nullptr;
    }
    auto d = this->head->data;
    this->head = this->head->next;
    return d;
  }
};
}  // namespace slist

}  // namespace dsa
}  // namespace lib