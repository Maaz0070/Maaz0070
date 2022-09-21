#include "Node.hpp"
#include "../scanner/scanner.hpp"

class Parser {
  private:
    Scanner scanner;
    Node *curNode;
  public:
    Parser();
    Parser(std::string filename="masterTestCase.txt");
    ~Parser();
    bool accept(std::string label);
    bool expect(std::string label);
    Node *parseProgram();
    Node *parseIdentifier();
    Node *parseConstantIdentifier();
    Node *parseBlock();
    Node *parseLabel();
    Node *parseUnsignedNumber();
    Node *parseUnsignedInteger();
    Node *parseSign();
    Node *parseStatement();
    Node *parseStatementList();
    Node *parseAssignmentStatement();
    Node *parseString();
    Node *parseCompoundStatement();
    Node *parseWriteStatement();
    Node *parseWritelnStatement();
    Node *parseExpression();
    Node *parseSimpleExpression();
    Node *parseTerm();
    Node *parseFactor();
    Node *parseVariable();
    Node *parseIntegerConstant();
    Node *parseRealConstant();
    Node *parseTypeDefinitionPart();
    Node *parseTypeDefinition();
    Node *parseType();
    Node *parseSimpleType();
    Node *parseScalarType();
    Node *parseSubrangeType();
    Node *parseTypeIdentifier();
    Node *parseStructuredType();
    Node *parseArrayType();
    Node *parseIndexType();
    Node *parseComponentType();
    Node *parseRecordType();
    Node *parseFieldList();
    Node *parseFixedPart();
    Node *parseRecordSection();
    Node *parseVariantType();
    Node *parseTagField();
    Node *parseVariant();
    Node *parseCaseLabel();
    Node *parseSetType();
    Node *parseBaseType();
    Node *parseFileType();
    Node *parsePointerType();
    Node *parseParameterGroup();
    Node *parseResultType();
    Node *parseStatementPart();
    Node *parseUnlabelledStatement();
    Node *parseSimpleStatement();
    Node *parseEntireVariable();
    Node *parseVariableIdentifier();
    Node *parseComponentVariable();
    Node *parseIndexedVariable();
    Node *parseArrayVariable();
    Node *parseRecordVariable();
    Node *parseFieldIdentifier();
    Node *parseFileBuffer();
    Node *parseFileVariable();
    Node *parseReferencedVariable();
    Node *parsePointerVariable();
    Node *parseRelationalOperator();
    Node *parseAddingOperator();
    Node *parseMultiplyingOperator();
    Node *parseStringConstant();
    Node *parseUnsignedConstant();
    Node *parseSet();
    Node *parseElementList();
    Node *parseElement();
    Node *parseActualParameter();
    Node *parseGoToStatement();
    Node *parseEmptyStatement();
    Node *parseEmpty();
    Node *parseStructuredStatement();
    Node *parseConditionalStatement();
    Node *parseIfStatement();
    Node *parseCaseStatement();
    Node *parseCaseListElement();
    Node *parseCaseLabelList();
    Node *parseRepetitiveStatement();
    Node *parseWhileStatement();
    Node *parseRepeatStatement();
    Node *parseForStatement();
    Node *parseControlVariable();
    Node *parseForList();
    Node *parseInitialValue();
    Node *parseFinalValue();
    Node *parseWithStatement();
    Node *parseRecordVariableList();

    void outputTree(Node *node, int indentLevel=0); 
};