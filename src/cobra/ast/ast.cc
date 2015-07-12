#include "ast.h"

namespace Cobra {

	ASTFile::~ASTFile(){
		delete scope;
	}
	ASTFor::~ASTFor(){
		delete var;
		delete conditions;
		delete iterator;
		delete block;
	}
	ASTBlock::~ASTBlock(){
		delete scope;
	}
	ASTFunc::~ASTFunc(){
		delete body;
		for (std::map<std::string, ASTNode*>::iterator it = args.begin(); it != args.end(); ++it){
			delete it->second;
		}
		for (int i = 0; i < ordered.size(); i++){
			delete ordered[i];
		}
	}
	ASTIdent::~ASTIdent(){
		delete value;
	}
	ASTExpr::~ASTExpr(){
		delete value;
	}
	ASTUnaryExpr::~ASTUnaryExpr(){
		delete value;
		delete op;
	}
	ASTBinaryExpr::~ASTBinaryExpr(){
		delete Left;
		delete Right;
		delete op;
	}
	ASTFuncCallExpr::~ASTFuncCallExpr(){
		delete func;
		delete scope;
		for (int i = 0; i < params.size(); i++){
			delete params[i];
		}
	}
	ASTArrayMemberExpr::~ASTArrayMemberExpr(){
		delete member;
		delete value;
	}
	ASTArray::~ASTArray(){
		for (int i = 0; i < value.size(); i++){
			delete value[i];
		}
	}
	ASTObject::~ASTObject(){
		for (std::map<std::string, ASTNode*>::iterator it = members.begin(); it != members.end(); ++it){
			delete it->second;
		}
	}
	ASTObjectMemberChainExpr::~ASTObjectMemberChainExpr(){
		delete member;
		delete object;
		delete value;
	}
	ASTVar::~ASTVar(){
		delete stmt;
		delete varClass;
	}
	ASTIf::~ASTIf(){
		delete conditions;
		delete block;
	}
	ASTElse::~ASTElse(){
		delete conditions;
		delete block;
		delete ifStmt;
	}
	ASTWhile::~ASTWhile(){
		delete conditions;
		delete block;
	}
} // namespace Cobra