#ifndef WALK_H_
#define WALK_H_

#include <string>
#include <map>
#include <vector>
#include "cobra/token/token.h"
#include "cobra/ast/scope.h"
#include "cobra/ast/ast.h"
#include "cobra/error/error.h"
#include "cobra/types/func.h"

namespace Cobra {
namespace internal{

	struct WalkPair {
		std::string name;
		ASTLiterary* value;
	};

	class Walk
	{
	private:
		Scope* scope;
		std::map<std::string, ASTLiterary*> stack;

		void WalkScope();
		WalkPair* WalkNode(ASTNode* node);
		WalkPair* WalkVar(ASTVar* var);
		ASTLiterary* WalkStmt(ASTNode* stmt);
		ASTLiterary* WalkBinary(ASTBinaryExpr* bin);
		ASTLiterary* WalkUnary(ASTUnaryExpr* unary);
		ASTLiterary* WalkIdent(ASTIdent* ident);
		ASTLiterary* WalkFuncCall(ASTFuncCallExpr* call);
		Type* ParseType(ASTExpr* node);
		
		ASTLiterary* AddMinus(ASTExpr* left, ASTExpr* right, TOKEN op);
	public:
		Walk(){scope = NULL;}
		~Walk();
		void WalkFunc(ASTFunc* func);
		ASTLiterary* GetValue();	
	};
} // namespace internal
}

#endif // WALK_H_