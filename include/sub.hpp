#pragma once

#include <string>

#include "astnode.hpp"

class Sub : public ASTNode{
  public:
    Sub(ASTNode *lhs, ASTNode *rhs): ASTNode("-", rhs, lhs)
    {

    }
};