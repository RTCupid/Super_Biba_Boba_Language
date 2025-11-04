#ifndef TREE_INCLUDE_TOKEN_HPP
#define TREE_INCLUDE_TOKEN_HPP

#include "common.hpp"
#include <string>

namespace language {

struct Token {
    Type type_{Type::type_zero};
};

struct Token_binary_operation : public Token {
    Binary_operations binary_operation_{Binary_operations::operation_zero};
};

struct Token_unary_operation : public Token {
    Unary_operation unary_operation_{Unary_operation::operation_zero};
};

struct Token_number : public Token {
    number_type number_{nil};
};

struct Token_variable : public Token {
    std::string variable_name{};
    number_type variable_value{nil};
};









} // namespace language


#endif // TREE_INCLUDE_TOKEN_HPP