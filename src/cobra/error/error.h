#ifndef ERROR_H_
#define ERROR_H_

#include <string>
#include "cobra/token/token.h"

namespace Cobra {
	namespace internal{
	namespace Error {
		enum ERROR {
			INVALID_MODE,
			EXPECTED,
			EXPECTED_MODE,
			MODE_UNKNOWN,
			EXPECTED_VARIABLE_TYPE,
			INVALID_STMT,
			VAR_NOT_ALLOWED_IN_STRICT_MODE,
			EXPECTED_VAR,
			EXPECTED_OPERATOR,
			INVALID_FUNCTION_CALL,
			MISSING_EXPR,
			INVALID_EXPR,
			INVALID_LEFT_EXPR,
			UNDEFINED_VARIABLE,
			UNDEFINED_FUNC,
			UNDEFINED,
			INVALID_OBJECT_MEMBER,
			SCANNER,
			INVALID_CHAR_VALUE,
			EXPECTED_PARAMETER,
			UNEXPECTED_RETURN,
			EXPECTED_ARG_NAME,
			MISSING_FUNC_BODY,
			INTERNAL_SCOPE_ERROR,
			INVALID_ARGUMENT_TYPE,
			CANT_HAVE_NULL_FUNC_ARG,
			CANNOT_CONCAT_TYPE,
			CANNOT_SUBTRACT,
			CANNOT_MINUS_UNLIKE_VALUES,
			CANNOT_ADD_UNLIKE_VALUES,
			PARSE_VAR_ERR,
			UNKNOWN_CAST_TYPE,
			UNIDENTIFIED_OBJECT_MEMBER,
			INVALID_FUNC_CALL,
			UNDEFINED_OBJECT,
			UNABLE_TO_ACCESS_PRIVATE_MEMBER,
			DIFFERENT_TYPE_ALREADY_DEFINED_IN_SCOPE,
			COMPILATION_ERROR,
			MULTIPLE_DECL_OF_OBJECT,
			CANNOT_ADD_TO_ARRAY,
			INVALID_ADD_EXPR,
			CANNOT_SUB_CHAR_FROM_TYPE,
			CANNOT_SUB_STRING_FROM_TYPE,
			INVALID_SUB_EXPR,
			CANNOT_SUB_FROM_ARRAY,
			CANNOT_DIV_CHAR_FROM_TYPE,
			CANNOT_DIV_STRING_FROM_TYPE,
			CANNOT_DIV_FROM_ARRAY,
			CANNOT_MULT_CHAR_FROM_TYPE,
			CANNOT_MULT_STRING_FROM_TYPE,
			CANNOT_MULT_FROM_ARRAY,
			CANNOT_MOD_CHAR_FROM_TYPE,
			CANNOT_MOD_STRING_FROM_TYPE,
			CANNOT_MOD_FROM_ARRAY,
			CANNOT_DIV_INT_FROM_TYPE,
			CANNOT_DIV_DOUBLE_FROM_TYPE,
			CANNOT_DIV_FLOAT_FROM_TYPE,
			CANNOT_MULT_INT_FROM_TYPE,
			CANNOT_MULT_DOUBLE_FROM_TYPE,
			CANNOT_MULT_FLOAT_FROM_TYPE,
			CANNOT_MOD_INT_FROM_TYPE,
			CANNOT_MOD_FLOAT_FROM_TYPE,
			CANNOT_MOD_DOUBLE_FROM_TYPE,
			INVALID_MOD_EXPR,
			INVALID_DIV_EXPR,
			INVALID_MULT_EXPR,
			INVALID_ASSIGNMENT_TO_TYPE,
			INVALID_ARRAY_TYPE,
			INVALID_BOOLEAN_COMPARISON,
			INVALID_CONDITION_FOR_IF_STMT,
			UNEXPECTED_TICK,
			UNEXPECTED_OPERATOR,
			TOO_MANY_OBJECT_DEFINITIONS,
			EXPECTED_OBJECT,
			OBJECT_CONSTRUCTOR_INVALID,
			UNABLE_TO_ACCESS_NON_STATIC_FUNCTION,
			INVALID_CATCH,
			INVALID_THROW,
			EMPTY_FILE,
			EMPTY_FILE_PARSER,
			UNIDENTIFIED_BOOLEAN_OPERATOR,
			INVALID_OBJECT_EXTENSION,
			INVALID_OPERATOR,
			UNABLE_TO_ACCESS_STATIC_MEMBER,
			EXPECTED_IDENTIFIER,
			EXPECTED_ARRAY_TYPE,
			CORRUPT_OBJECT,
			EXPECTED_OBJECT_MEMBER_NAME,
			UNMATCHED_FUNCTION_PARAMETERS,
			INVALID_IMPORT,
			UNDEFINED_VARIABLE_TYPE,
			CHECK_IMPORTS,
			UNEXPECTED_CHARACTER,
			INVALID_ARRAY_MEMBER,
			INVALID_INCLUDE_IMPORT,
			UNEXPECTED_END_OF_FILE,
			INVALID_USE_OF_EXPORT,
			INVALID_CASE_STMT,
			NOT_IMPLEMENTED,
			MULTIPLE_RETURNS_NOT_ALLOWED,
			INVALID_ACCESS_TO_ARRAY,
			NO_RETURN_STMTS_IN_CONSTRUCTOR,
			INVALID_USAGE_OF_THIS,
			RESERVED_KEYWORD,
			INVALID_SCRIPT,
			UNKNWON_ESCAPE_SEQUENCE,
			INVALID_CAST,
			INTERNAL_BREAK,
			INVALID_USE_OF_BREAK,
			INVALID_DEFAULT_STMT
		};

		std::string String(ERROR e, Token* tok);
	}
} // namespace internal{
}

#endif // ERROR_H_
