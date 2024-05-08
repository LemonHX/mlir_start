// Copyright (C) 2020-2024 Jonathan Müller and lexy contributors
// SPDX-License-Identifier: BSL-1.0

#ifndef LEXY_DSL_HPP_INCLUDED
#define LEXY_DSL_HPP_INCLUDED

#include "lib/lexy/dsl/any.hpp"
#include "lib/lexy/dsl/ascii.hpp"
#include "lib/lexy/dsl/bits.hpp"
#include "lib/lexy/dsl/bom.hpp"
#include "lib/lexy/dsl/brackets.hpp"
#include "lib/lexy/dsl/branch.hpp"
#include "lib/lexy/dsl/byte.hpp"
#include "lib/lexy/dsl/capture.hpp"
#include "lib/lexy/dsl/case_folding.hpp"
#include "lib/lexy/dsl/char_class.hpp"
#include "lib/lexy/dsl/choice.hpp"
#include "lib/lexy/dsl/code_point.hpp"
#include "lib/lexy/dsl/combination.hpp"
#include "lib/lexy/dsl/context_counter.hpp"
#include "lib/lexy/dsl/context_flag.hpp"
#include "lib/lexy/dsl/context_identifier.hpp"
#include "lib/lexy/dsl/delimited.hpp"
#include "lib/lexy/dsl/digit.hpp"
#include "lib/lexy/dsl/effect.hpp"
#include "lib/lexy/dsl/eof.hpp"
#include "lib/lexy/dsl/error.hpp"
#include "lib/lexy/dsl/expression.hpp"
#include "lib/lexy/dsl/flags.hpp"
#include "lib/lexy/dsl/follow.hpp"
#include "lib/lexy/dsl/identifier.hpp"
#include "lib/lexy/dsl/if.hpp"
#include "lib/lexy/dsl/integer.hpp"
#include "lib/lexy/dsl/list.hpp"
#include "lib/lexy/dsl/literal.hpp"
#include "lib/lexy/dsl/lookahead.hpp"
#include "lib/lexy/dsl/loop.hpp"
#include "lib/lexy/dsl/member.hpp"
#include "lib/lexy/dsl/newline.hpp"
#include "lib/lexy/dsl/operator.hpp"
#include "lib/lexy/dsl/option.hpp"
#include "lib/lexy/dsl/parse_as.hpp"
#include "lib/lexy/dsl/peek.hpp"
#include "lib/lexy/dsl/position.hpp"
#include "lib/lexy/dsl/production.hpp"
#include "lib/lexy/dsl/punctuator.hpp"
#include "lib/lexy/dsl/recover.hpp"
#include "lib/lexy/dsl/repeat.hpp"
#include "lib/lexy/dsl/return.hpp"
#include "lib/lexy/dsl/scan.hpp"
#include "lib/lexy/dsl/separator.hpp"
#include "lib/lexy/dsl/sequence.hpp"
#include "lib/lexy/dsl/sign.hpp"
#include "lib/lexy/dsl/subgrammar.hpp"
#include "lib/lexy/dsl/symbol.hpp"
#include "lib/lexy/dsl/terminator.hpp"
#include "lib/lexy/dsl/times.hpp"
#include "lib/lexy/dsl/token.hpp"
#include "lib/lexy/dsl/unicode.hpp"
#include "lib/lexy/dsl/until.hpp"
#include "lib/lexy/dsl/whitespace.hpp"

#if LEXY_EXPERIMENTAL
#include "lib/lexy/dsl/parse_tree_node.hpp"
#endif

#endif // LEXY_DSL_HPP_INCLUDED