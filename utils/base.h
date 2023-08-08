#ifndef _BASE_H_
#define _BASE_H_

#include <algorithm>
#include <cmath>
#include <list>
#include <map>
#include <numeric>  // std::accumulate
#include <ostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "absl/strings/str_split.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "gtest/gtest.h"

using namespace std;

namespace base {

template <class T>
struct ListNode {
  T val;
  ListNode* next;
  ListNode() : next(NULL) {}
  ListNode(T x) : val(x), next(NULL) {}
  static ListNode* Factory(const std::initializer_list<T> l) {
    if (l.size() == 0) return nullptr;
    auto iter = l.begin();
    ListNode* cur = new ListNode(*iter);
    ListNode* ret = cur;
    ++iter;
    while (iter != l.end()) {
      cur->next = new ListNode(*iter);
      cur = cur->next;
      ++iter;
    }
    return ret;
  }
  static ListNode* Factory(const std::vector<T> l) {
    if (l.size() == 0) return nullptr;
    auto iter = l.begin();
    ListNode* cur = new ListNode(*iter);
    ListNode* ret = cur;
    ++iter;
    while (iter != l.end()) {
      cur->next = new ListNode(*iter);
      cur = cur->next;
      ++iter;
    }
    return ret;
  }
  static vector<T> Dump(ListNode* head) {
    vector<T> ret;
    while (head) {
      ret.push_back(head->val);
      head = head->next;
    }

    return ret;
  }
};


}  // namespace base

#endif