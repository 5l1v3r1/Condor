#include "type.h"

namespace Cobra{

	ASTLiterary* Type::ToASTLiterary(Type* type){
		int t = (int) type->typeof;
		switch (t){
			case INT: {
				Int* in = (Int*) type;
				ASTLiterary* lit = new ASTLiterary;
				lit->kind = INT;
				lit->value = std::to_string(in->value);
				return lit;
			}
		}
		return NULL;
	}

	void Int::SetAST(ASTLiterary* lit){
		if (lit->kind == INT){
			value = std::stoi(lit->value);
		}
	}

} // namespace Cobra