#include "lib/cpp-effects/cpp-effects.hh"

namespace eff = cpp_effects;

template <typename S> defeffect(Put) {
  S newState;
  static void put(S s) { eff::invoke_command(Put<S>{{}, s}); }
};

template <typename S> defeffect(Print) {
  std::string message;

  void __print() { fmt::println("{}", message); }
  static void print(std::string message) {
    eff::invoke_command(Print<S>{{}, message});
  }
};

template <typename S>
defeffect(Get, S){static S get(){return eff::invoke_command(Get<S>{});
}
}
;

template <typename Answer, typename S>
defhandler(Stateful, Answer, Answer, Put<S>, Get<S>, Print<S>) {
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
  Answer handle_command(Print<S> p, eff::resumption<Answer()> r) override {
    p.__print();
    return std::move(r).tail_resume();
  }
  Answer handle_return(Answer a) override { return a; }
};

int inc() {
  auto i = Get<int>::get();
  auto message = fmt::format("Incrementing {} to {}...", i, i + 1);
  Print<int>::print(message);
  Put<int>::put(i + 1);
  Print<int>::print("Incremented!");
  return Get<int>::get();
}

int main() {
  auto res = eff::handle<Stateful<int, int>>(inc, 100);
  fmt::println("res: {}", res);
}