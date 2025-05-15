#ifndef COMPILER_H
#define COMPILER_H

#define TEST_COMPILER    // uncomment to run the compiler autograder

#include "symbols.h"
#include "parser.h"


extern SymbolTable ProgramScope;
extern Stack SymbolStack; // Stack for symbol table scopes
extern IdentifierStack IdStack; // Stack for identifiers
extern SpecialIdStack SpIdStack; // Stack for special identifiers

int InitCompiler ();
ParserInfo compile (char* dir_name);
int StopCompiler();

#endif
