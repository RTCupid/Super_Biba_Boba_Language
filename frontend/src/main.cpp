#include <iostream>
#include <FlexLexer.h>

int yyFlexLexer::yywrap() { return 1; }

int main() {
  FlexLexer *lexer = new yyFlexLexer;
  while (lexer->yylex() != 0) {
    // do nothing for now, all is in rules
  }

  delete lexer;
}
