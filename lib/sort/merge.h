#include <vector>

namespace lib {
namespace sort {
template <class T, class A>
void merge(std::vector<T, A> *l, std::vector<T, A> *r, std::vector<T, A> *a) {
  auto i_l = 0;
  auto i_r = 0;

  for (auto i = 0; i < a->size(); i++) {
    auto v_l = l->at(i_l);
    auto v_r = r->at(i_r);

    if (v_l <= v_r) {
      a->at(i) = v_l;
      i_l++;
    } else {
      a->at(i) = v_r;
      i_r++;
    }

    if (i_l == l->size()) {
      i++;
      for (auto it = r->begin() + i_r; it < r->end(); it++) {
        a->at(i) = *it;
        i++;
      }
      break;
    }

    if (i_r == r->size()) {
      i++;
      for (auto it = l->begin() + i_l; it < l->end(); it++) {
        a->at(i) = *it;
        i++;
      }
      break;
    }
  }
}

template <class T, class A>
std::vector<T, A> *mergesort(std::vector<T, A> *a) {
  if (a->size() <= 1) {
    return a;
  }

  std::vector<T, A> l =
      std::vector<T, A>(a->begin(), a->begin() + a->size() / 2);
  std::vector<T, A> r = std::vector<T, A>(a->begin() + a->size() / 2, a->end());
  merge(mergesort(&l), mergesort(&r), a);
  return a;
}
}  // namespace sort
}  // namespace lib