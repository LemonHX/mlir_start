#include "lib/cpp-effects/cpp-effects.hh"
#include <iostream>
#include <ostream>


namespace eff = cpp_effects;
template <typename S> struct Put : eff::command<> {
  S newState;
};
template <typename S> struct Get : eff::command<S> {};
template <typename S> struct Print : eff::command<S> {
  std::string message;
};

template <typename S> void put(S s) { eff::invoke_command(Put<S>{{}, s}); }
template <typename S> S get() { return eff::invoke_command(Get<S>{}); }
template <typename S> void print(std::string message) {
  eff::invoke_command(Print<S>{{}, message});
}

template <typename Answer, typename S>
class Stateful : public eff::handler<Answer, Answer, Put<S>, Get<S>, Print<S>> {
public:
  Stateful(S initialState) : state(initialState) {}

private:
  S state;
  Answer handle_command(Put<S> p, eff::resumption<Answer()> r) override {
    state = p.newState;
    return std::move(r).tail_resume();
  }
  Answer handle_command(Get<S>, eff::resumption<Answer(S)> r) override {
    return std::move(r).tail_resume(state);
  }
  Answer handle_command(Print<S> p, eff::resumption<Answer(S)> r) override {
    std::cout << p.message << std::endl;
    return std::move(r).tail_resume(0);
  }
  Answer handle_return(Answer a) override { return a; }
};

int inc() {
  auto i = get<int>();
  print<int>("Incrementing " + std::to_string(i) + " to " + std::to_string(i + 1) + "...");
  put(i + 1);
  return get<int>();
}

int main() {
  std::cout << eff::handle<Stateful<int, int>>(inc, 100) << std::endl; // Output: 101
}