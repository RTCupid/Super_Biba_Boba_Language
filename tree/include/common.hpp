#ifndef TREE_INCLUDE_COMMON_HPP
#define TREE_INCLUDE_COMMON_HPP

namespace language {

using number_type = int;

number_type nil = 0;

enum class Type {
    type_zero,
    type_number,
    type_operation,
    type_variable,
    number_of_types
};

enum class Binary_operations {
    operation_zero,              
    operation_add,              
    operation_sub,            
    operation_mul,            
    operation_div,              
    operation_pow,              
    number_of_operations
};

enum class Unary_operation {
    operation_zero,              
    operation_unary_minus,     
    number_of_operations
};

} // namespace language

#endif // TREE_INCLUDE_COMMON_HPP