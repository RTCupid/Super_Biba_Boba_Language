#ifndef TREE_INCLUDE_NODE_HPP
#define TREE_INCLUDE_NODE_HPP

#include "common.hpp"
#include "token.hpp"
#include <string>

namespace language {

class Node {
    Node* parent_{nullptr};
};

class Binary_operation_node : public Node, public Token_binary_operation {
    Node* left_{nullptr};
    Node* right_{nullptr};
};

class Unary_operation_node : public Node, public Token_unary_operation {
    Node* left_{nullptr};
};

class Number_node : public Node, public Token_number {
};

class Variable_node : public Node, public Token_variable {
};


} // namespace language

#endif // TREE_INCLUDE_NODE_HPP