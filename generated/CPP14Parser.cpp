
// Generated from CPP14Parser.g4 by ANTLR 4.8


#include "CPP14ParserListener.h"
#include "CPP14ParserVisitor.h"

#include "CPP14Parser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

CPP14Parser::CPP14Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CPP14Parser::~CPP14Parser() {
  delete _interpreter;
}

std::string CPP14Parser::getGrammarFileName() const {
  return "CPP14Parser.g4";
}

const std::vector<std::string>& CPP14Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CPP14Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationUnitContext ------------------------------------------------------------------

CPP14Parser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TranslationUnitContext::EOF() {
  return getToken(CPP14Parser::EOF, 0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::TranslationUnitContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}


size_t CPP14Parser::TranslationUnitContext::getRuleIndex() const {
  return CPP14Parser::RuleTranslationUnit;
}

void CPP14Parser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void CPP14Parser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}


antlrcpp::Any CPP14Parser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TranslationUnitContext* CPP14Parser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, CPP14Parser::RuleTranslationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 4) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
      | (1ULL << (CPP14Parser::Asm - 4))
      | (1ULL << (CPP14Parser::Auto - 4))
      | (1ULL << (CPP14Parser::Bool - 4))
      | (1ULL << (CPP14Parser::Char - 4))
      | (1ULL << (CPP14Parser::Char16 - 4))
      | (1ULL << (CPP14Parser::Char32 - 4))
      | (1ULL << (CPP14Parser::Class - 4))
      | (1ULL << (CPP14Parser::Const - 4))
      | (1ULL << (CPP14Parser::Constexpr - 4))
      | (1ULL << (CPP14Parser::Decltype - 4))
      | (1ULL << (CPP14Parser::Double - 4))
      | (1ULL << (CPP14Parser::Enum - 4))
      | (1ULL << (CPP14Parser::Explicit - 4))
      | (1ULL << (CPP14Parser::Extern - 4))
      | (1ULL << (CPP14Parser::Float - 4))
      | (1ULL << (CPP14Parser::Friend - 4))
      | (1ULL << (CPP14Parser::Inline - 4))
      | (1ULL << (CPP14Parser::Int - 4))
      | (1ULL << (CPP14Parser::Long - 4))
      | (1ULL << (CPP14Parser::Mutable - 4))
      | (1ULL << (CPP14Parser::Namespace - 4))
      | (1ULL << (CPP14Parser::Operator - 4))
      | (1ULL << (CPP14Parser::Register - 4))
      | (1ULL << (CPP14Parser::Short - 4))
      | (1ULL << (CPP14Parser::Signed - 4))
      | (1ULL << (CPP14Parser::Static - 4))
      | (1ULL << (CPP14Parser::Static_assert - 4))
      | (1ULL << (CPP14Parser::Struct - 4))
      | (1ULL << (CPP14Parser::Template - 4))
      | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
      | (1ULL << (CPP14Parser::Typename_ - 68))
      | (1ULL << (CPP14Parser::Union - 68))
      | (1ULL << (CPP14Parser::Unsigned - 68))
      | (1ULL << (CPP14Parser::Using - 68))
      | (1ULL << (CPP14Parser::Virtual - 68))
      | (1ULL << (CPP14Parser::Void - 68))
      | (1ULL << (CPP14Parser::Volatile - 68))
      | (1ULL << (CPP14Parser::Wchar - 68))
      | (1ULL << (CPP14Parser::LeftParen - 68))
      | (1ULL << (CPP14Parser::LeftBracket - 68))
      | (1ULL << (CPP14Parser::Star - 68))
      | (1ULL << (CPP14Parser::And - 68))
      | (1ULL << (CPP14Parser::Tilde - 68))
      | (1ULL << (CPP14Parser::AndAnd - 68))
      | (1ULL << (CPP14Parser::Doublecolon - 68))
      | (1ULL << (CPP14Parser::Semi - 68))
      | (1ULL << (CPP14Parser::Ellipsis - 68))
      | (1ULL << (CPP14Parser::Identifier - 68)))) != 0)) {
      setState(376);
      declarationseq();
    }
    setState(379);
    match(CPP14Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CPP14Parser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPP14Parser::PrimaryExpressionContext::Literal() {
  return getTokens(CPP14Parser::Literal);
}

tree::TerminalNode* CPP14Parser::PrimaryExpressionContext::Literal(size_t i) {
  return getToken(CPP14Parser::Literal, i);
}

tree::TerminalNode* CPP14Parser::PrimaryExpressionContext::This() {
  return getToken(CPP14Parser::This, 0);
}

tree::TerminalNode* CPP14Parser::PrimaryExpressionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::PrimaryExpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::PrimaryExpressionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::IdExpressionContext* CPP14Parser::PrimaryExpressionContext::idExpression() {
  return getRuleContext<CPP14Parser::IdExpressionContext>(0);
}

CPP14Parser::LambdaExpressionContext* CPP14Parser::PrimaryExpressionContext::lambdaExpression() {
  return getRuleContext<CPP14Parser::LambdaExpressionContext>(0);
}


size_t CPP14Parser::PrimaryExpressionContext::getRuleIndex() const {
  return CPP14Parser::RulePrimaryExpression;
}

void CPP14Parser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void CPP14Parser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any CPP14Parser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PrimaryExpressionContext* CPP14Parser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, CPP14Parser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(393);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Literal: {
        enterOuterAlt(_localctx, 1);
        setState(382); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(381);
                  match(CPP14Parser::Literal);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(384); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case CPP14Parser::This: {
        enterOuterAlt(_localctx, 2);
        setState(386);
        match(CPP14Parser::This);
        break;
      }

      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(387);
        match(CPP14Parser::LeftParen);
        setState(388);
        expression();
        setState(389);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Operator:
      case CPP14Parser::Tilde:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(391);
        idExpression();
        break;
      }

      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(392);
        lambdaExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdExpressionContext ------------------------------------------------------------------

CPP14Parser::IdExpressionContext::IdExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::UnqualifiedIdContext* CPP14Parser::IdExpressionContext::unqualifiedId() {
  return getRuleContext<CPP14Parser::UnqualifiedIdContext>(0);
}

CPP14Parser::QualifiedIdContext* CPP14Parser::IdExpressionContext::qualifiedId() {
  return getRuleContext<CPP14Parser::QualifiedIdContext>(0);
}


size_t CPP14Parser::IdExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleIdExpression;
}

void CPP14Parser::IdExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExpression(this);
}

void CPP14Parser::IdExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExpression(this);
}


antlrcpp::Any CPP14Parser::IdExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitIdExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::IdExpressionContext* CPP14Parser::idExpression() {
  IdExpressionContext *_localctx = _tracker.createInstance<IdExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, CPP14Parser::RuleIdExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(397);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(395);
      unqualifiedId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(396);
      qualifiedId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedIdContext ------------------------------------------------------------------

CPP14Parser::UnqualifiedIdContext::UnqualifiedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UnqualifiedIdContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::OperatorFunctionIdContext* CPP14Parser::UnqualifiedIdContext::operatorFunctionId() {
  return getRuleContext<CPP14Parser::OperatorFunctionIdContext>(0);
}

CPP14Parser::ConversionFunctionIdContext* CPP14Parser::UnqualifiedIdContext::conversionFunctionId() {
  return getRuleContext<CPP14Parser::ConversionFunctionIdContext>(0);
}

CPP14Parser::LiteralOperatorIdContext* CPP14Parser::UnqualifiedIdContext::literalOperatorId() {
  return getRuleContext<CPP14Parser::LiteralOperatorIdContext>(0);
}

tree::TerminalNode* CPP14Parser::UnqualifiedIdContext::Tilde() {
  return getToken(CPP14Parser::Tilde, 0);
}

CPP14Parser::ClassNameContext* CPP14Parser::UnqualifiedIdContext::className() {
  return getRuleContext<CPP14Parser::ClassNameContext>(0);
}

CPP14Parser::DecltypeSpecifierContext* CPP14Parser::UnqualifiedIdContext::decltypeSpecifier() {
  return getRuleContext<CPP14Parser::DecltypeSpecifierContext>(0);
}

CPP14Parser::TemplateIdContext* CPP14Parser::UnqualifiedIdContext::templateId() {
  return getRuleContext<CPP14Parser::TemplateIdContext>(0);
}


size_t CPP14Parser::UnqualifiedIdContext::getRuleIndex() const {
  return CPP14Parser::RuleUnqualifiedId;
}

void CPP14Parser::UnqualifiedIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedId(this);
}

void CPP14Parser::UnqualifiedIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedId(this);
}


antlrcpp::Any CPP14Parser::UnqualifiedIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitUnqualifiedId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnqualifiedIdContext* CPP14Parser::unqualifiedId() {
  UnqualifiedIdContext *_localctx = _tracker.createInstance<UnqualifiedIdContext>(_ctx, getState());
  enterRule(_localctx, 6, CPP14Parser::RuleUnqualifiedId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(409);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(399);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(400);
      operatorFunctionId();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(401);
      conversionFunctionId();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(402);
      literalOperatorId();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(403);
      match(CPP14Parser::Tilde);
      setState(406);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::Identifier: {
          setState(404);
          className();
          break;
        }

        case CPP14Parser::Decltype: {
          setState(405);
          decltypeSpecifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(408);
      templateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedIdContext ------------------------------------------------------------------

CPP14Parser::QualifiedIdContext::QualifiedIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::QualifiedIdContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

CPP14Parser::UnqualifiedIdContext* CPP14Parser::QualifiedIdContext::unqualifiedId() {
  return getRuleContext<CPP14Parser::UnqualifiedIdContext>(0);
}

tree::TerminalNode* CPP14Parser::QualifiedIdContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::QualifiedIdContext::getRuleIndex() const {
  return CPP14Parser::RuleQualifiedId;
}

void CPP14Parser::QualifiedIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedId(this);
}

void CPP14Parser::QualifiedIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedId(this);
}


antlrcpp::Any CPP14Parser::QualifiedIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::QualifiedIdContext* CPP14Parser::qualifiedId() {
  QualifiedIdContext *_localctx = _tracker.createInstance<QualifiedIdContext>(_ctx, getState());
  enterRule(_localctx, 8, CPP14Parser::RuleQualifiedId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    nestedNameSpecifier(0);
    setState(413);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Template) {
      setState(412);
      match(CPP14Parser::Template);
    }
    setState(415);
    unqualifiedId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedNameSpecifierContext ------------------------------------------------------------------

CPP14Parser::NestedNameSpecifierContext::NestedNameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NestedNameSpecifierContext::Doublecolon() {
  return getToken(CPP14Parser::Doublecolon, 0);
}

CPP14Parser::TheTypeNameContext* CPP14Parser::NestedNameSpecifierContext::theTypeName() {
  return getRuleContext<CPP14Parser::TheTypeNameContext>(0);
}

CPP14Parser::NamespaceNameContext* CPP14Parser::NestedNameSpecifierContext::namespaceName() {
  return getRuleContext<CPP14Parser::NamespaceNameContext>(0);
}

CPP14Parser::DecltypeSpecifierContext* CPP14Parser::NestedNameSpecifierContext::decltypeSpecifier() {
  return getRuleContext<CPP14Parser::DecltypeSpecifierContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::NestedNameSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::NestedNameSpecifierContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::NestedNameSpecifierContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* CPP14Parser::NestedNameSpecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::NestedNameSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleNestedNameSpecifier;
}

void CPP14Parser::NestedNameSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedNameSpecifier(this);
}

void CPP14Parser::NestedNameSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedNameSpecifier(this);
}


antlrcpp::Any CPP14Parser::NestedNameSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNestedNameSpecifier(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NestedNameSpecifierContext* CPP14Parser::nestedNameSpecifier() {
   return nestedNameSpecifier(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::nestedNameSpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NestedNameSpecifierContext *_localctx = _tracker.createInstance<NestedNameSpecifierContext>(_ctx, parentState);
  CPP14Parser::NestedNameSpecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CPP14Parser::RuleNestedNameSpecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(421);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(418);
      theTypeName();
      break;
    }

    case 2: {
      setState(419);
      namespaceName();
      break;
    }

    case 3: {
      setState(420);
      decltypeSpecifier();
      break;
    }

    }
    setState(423);
    match(CPP14Parser::Doublecolon);
    _ctx->stop = _input->LT(-1);
    setState(436);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NestedNameSpecifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNestedNameSpecifier);
        setState(425);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(431);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(426);
          match(CPP14Parser::Identifier);
          break;
        }

        case 2: {
          setState(428);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Template) {
            setState(427);
            match(CPP14Parser::Template);
          }
          setState(430);
          simpleTemplateId();
          break;
        }

        }
        setState(433);
        match(CPP14Parser::Doublecolon); 
      }
      setState(438);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

CPP14Parser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LambdaIntroducerContext* CPP14Parser::LambdaExpressionContext::lambdaIntroducer() {
  return getRuleContext<CPP14Parser::LambdaIntroducerContext>(0);
}

CPP14Parser::CompoundStatementContext* CPP14Parser::LambdaExpressionContext::compoundStatement() {
  return getRuleContext<CPP14Parser::CompoundStatementContext>(0);
}

CPP14Parser::LambdaDeclaratorContext* CPP14Parser::LambdaExpressionContext::lambdaDeclarator() {
  return getRuleContext<CPP14Parser::LambdaDeclaratorContext>(0);
}


size_t CPP14Parser::LambdaExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdaExpression;
}

void CPP14Parser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void CPP14Parser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
}


antlrcpp::Any CPP14Parser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdaExpressionContext* CPP14Parser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, CPP14Parser::RuleLambdaExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    lambdaIntroducer();
    setState(441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::LeftParen) {
      setState(440);
      lambdaDeclarator();
    }
    setState(443);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaIntroducerContext ------------------------------------------------------------------

CPP14Parser::LambdaIntroducerContext::LambdaIntroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LambdaIntroducerContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::LambdaIntroducerContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::LambdaCaptureContext* CPP14Parser::LambdaIntroducerContext::lambdaCapture() {
  return getRuleContext<CPP14Parser::LambdaCaptureContext>(0);
}


size_t CPP14Parser::LambdaIntroducerContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdaIntroducer;
}

void CPP14Parser::LambdaIntroducerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaIntroducer(this);
}

void CPP14Parser::LambdaIntroducerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaIntroducer(this);
}


antlrcpp::Any CPP14Parser::LambdaIntroducerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaIntroducer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdaIntroducerContext* CPP14Parser::lambdaIntroducer() {
  LambdaIntroducerContext *_localctx = _tracker.createInstance<LambdaIntroducerContext>(_ctx, getState());
  enterRule(_localctx, 14, CPP14Parser::RuleLambdaIntroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(CPP14Parser::LeftBracket);
    setState(447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 63) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 63)) & ((1ULL << (CPP14Parser::This - 63))
      | (1ULL << (CPP14Parser::And - 63))
      | (1ULL << (CPP14Parser::Equal - 63)))) != 0) || _la == CPP14Parser::Identifier) {
      setState(446);
      lambdaCapture();
    }
    setState(449);
    match(CPP14Parser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaCaptureContext ------------------------------------------------------------------

CPP14Parser::LambdaCaptureContext::LambdaCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CaptureListContext* CPP14Parser::LambdaCaptureContext::captureList() {
  return getRuleContext<CPP14Parser::CaptureListContext>(0);
}

CPP14Parser::CaptureDefaultContext* CPP14Parser::LambdaCaptureContext::captureDefault() {
  return getRuleContext<CPP14Parser::CaptureDefaultContext>(0);
}

tree::TerminalNode* CPP14Parser::LambdaCaptureContext::Comma() {
  return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::LambdaCaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdaCapture;
}

void CPP14Parser::LambdaCaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaCapture(this);
}

void CPP14Parser::LambdaCaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaCapture(this);
}


antlrcpp::Any CPP14Parser::LambdaCaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaCapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdaCaptureContext* CPP14Parser::lambdaCapture() {
  LambdaCaptureContext *_localctx = _tracker.createInstance<LambdaCaptureContext>(_ctx, getState());
  enterRule(_localctx, 16, CPP14Parser::RuleLambdaCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(457);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(451);
      captureList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(452);
      captureDefault();
      setState(455);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Comma) {
        setState(453);
        match(CPP14Parser::Comma);
        setState(454);
        captureList();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureDefaultContext ------------------------------------------------------------------

CPP14Parser::CaptureDefaultContext::CaptureDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::CaptureDefaultContext::And() {
  return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::CaptureDefaultContext::Equal() {
  return getToken(CPP14Parser::Equal, 0);
}


size_t CPP14Parser::CaptureDefaultContext::getRuleIndex() const {
  return CPP14Parser::RuleCaptureDefault;
}

void CPP14Parser::CaptureDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaptureDefault(this);
}

void CPP14Parser::CaptureDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaptureDefault(this);
}


antlrcpp::Any CPP14Parser::CaptureDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCaptureDefault(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CaptureDefaultContext* CPP14Parser::captureDefault() {
  CaptureDefaultContext *_localctx = _tracker.createInstance<CaptureDefaultContext>(_ctx, getState());
  enterRule(_localctx, 18, CPP14Parser::RuleCaptureDefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::And

    || _la == CPP14Parser::Equal)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureListContext ------------------------------------------------------------------

CPP14Parser::CaptureListContext::CaptureListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::CaptureContext *> CPP14Parser::CaptureListContext::capture() {
  return getRuleContexts<CPP14Parser::CaptureContext>();
}

CPP14Parser::CaptureContext* CPP14Parser::CaptureListContext::capture(size_t i) {
  return getRuleContext<CPP14Parser::CaptureContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::CaptureListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::CaptureListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}

tree::TerminalNode* CPP14Parser::CaptureListContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::CaptureListContext::getRuleIndex() const {
  return CPP14Parser::RuleCaptureList;
}

void CPP14Parser::CaptureListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaptureList(this);
}

void CPP14Parser::CaptureListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaptureList(this);
}


antlrcpp::Any CPP14Parser::CaptureListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCaptureList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CaptureListContext* CPP14Parser::captureList() {
  CaptureListContext *_localctx = _tracker.createInstance<CaptureListContext>(_ctx, getState());
  enterRule(_localctx, 20, CPP14Parser::RuleCaptureList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    capture();
    setState(466);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(462);
      match(CPP14Parser::Comma);
      setState(463);
      capture();
      setState(468);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(470);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(469);
      match(CPP14Parser::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

CPP14Parser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpleCaptureContext* CPP14Parser::CaptureContext::simpleCapture() {
  return getRuleContext<CPP14Parser::SimpleCaptureContext>(0);
}

CPP14Parser::InitcaptureContext* CPP14Parser::CaptureContext::initcapture() {
  return getRuleContext<CPP14Parser::InitcaptureContext>(0);
}


size_t CPP14Parser::CaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleCapture;
}

void CPP14Parser::CaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapture(this);
}

void CPP14Parser::CaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapture(this);
}


antlrcpp::Any CPP14Parser::CaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CaptureContext* CPP14Parser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 22, CPP14Parser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(474);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(472);
      simpleCapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(473);
      initcapture();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleCaptureContext ------------------------------------------------------------------

CPP14Parser::SimpleCaptureContext::SimpleCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::SimpleCaptureContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::SimpleCaptureContext::And() {
  return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::SimpleCaptureContext::This() {
  return getToken(CPP14Parser::This, 0);
}


size_t CPP14Parser::SimpleCaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpleCapture;
}

void CPP14Parser::SimpleCaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleCapture(this);
}

void CPP14Parser::SimpleCaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleCapture(this);
}


antlrcpp::Any CPP14Parser::SimpleCaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitSimpleCapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpleCaptureContext* CPP14Parser::simpleCapture() {
  SimpleCaptureContext *_localctx = _tracker.createInstance<SimpleCaptureContext>(_ctx, getState());
  enterRule(_localctx, 24, CPP14Parser::RuleSimpleCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(481);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::And:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(477);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::And) {
          setState(476);
          match(CPP14Parser::And);
        }
        setState(479);
        match(CPP14Parser::Identifier);
        break;
      }

      case CPP14Parser::This: {
        enterOuterAlt(_localctx, 2);
        setState(480);
        match(CPP14Parser::This);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitcaptureContext ------------------------------------------------------------------

CPP14Parser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::InitcaptureContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::InitializerContext* CPP14Parser::InitcaptureContext::initializer() {
  return getRuleContext<CPP14Parser::InitializerContext>(0);
}

tree::TerminalNode* CPP14Parser::InitcaptureContext::And() {
  return getToken(CPP14Parser::And, 0);
}


size_t CPP14Parser::InitcaptureContext::getRuleIndex() const {
  return CPP14Parser::RuleInitcapture;
}

void CPP14Parser::InitcaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitcapture(this);
}

void CPP14Parser::InitcaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitcapture(this);
}


antlrcpp::Any CPP14Parser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInitcapture(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitcaptureContext* CPP14Parser::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 26, CPP14Parser::RuleInitcapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::And) {
      setState(483);
      match(CPP14Parser::And);
    }
    setState(486);
    match(CPP14Parser::Identifier);
    setState(487);
    initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaDeclaratorContext ------------------------------------------------------------------

CPP14Parser::LambdaDeclaratorContext::LambdaDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LambdaDeclaratorContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ParameterDeclarationClauseContext* CPP14Parser::LambdaDeclaratorContext::parameterDeclarationClause() {
  return getRuleContext<CPP14Parser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CPP14Parser::LambdaDeclaratorContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::LambdaDeclaratorContext::Mutable() {
  return getToken(CPP14Parser::Mutable, 0);
}

CPP14Parser::ExceptionSpecificationContext* CPP14Parser::LambdaDeclaratorContext::exceptionSpecification() {
  return getRuleContext<CPP14Parser::ExceptionSpecificationContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::LambdaDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::TrailingReturnTypeContext* CPP14Parser::LambdaDeclaratorContext::trailingReturnType() {
  return getRuleContext<CPP14Parser::TrailingReturnTypeContext>(0);
}


size_t CPP14Parser::LambdaDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleLambdaDeclarator;
}

void CPP14Parser::LambdaDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaDeclarator(this);
}

void CPP14Parser::LambdaDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaDeclarator(this);
}


antlrcpp::Any CPP14Parser::LambdaDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLambdaDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LambdaDeclaratorContext* CPP14Parser::lambdaDeclarator() {
  LambdaDeclaratorContext *_localctx = _tracker.createInstance<LambdaDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 28, CPP14Parser::RuleLambdaDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(CPP14Parser::LeftParen);
    setState(490);
    parameterDeclarationClause();
    setState(491);
    match(CPP14Parser::RightParen);
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Mutable) {
      setState(492);
      match(CPP14Parser::Mutable);
    }
    setState(496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Noexcept

    || _la == CPP14Parser::Throw) {
      setState(495);
      exceptionSpecification();
    }
    setState(499);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(498);
      attributeSpecifierSeq();
    }
    setState(502);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Arrow) {
      setState(501);
      trailingReturnType();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CPP14Parser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PrimaryExpressionContext* CPP14Parser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CPP14Parser::PrimaryExpressionContext>(0);
}

CPP14Parser::SimpleTypeSpecifierContext* CPP14Parser::PostfixExpressionContext::simpleTypeSpecifier() {
  return getRuleContext<CPP14Parser::SimpleTypeSpecifierContext>(0);
}

CPP14Parser::TypeNameSpecifierContext* CPP14Parser::PostfixExpressionContext::typeNameSpecifier() {
  return getRuleContext<CPP14Parser::TypeNameSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::PostfixExpressionContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}

CPP14Parser::ExpressionListContext* CPP14Parser::PostfixExpressionContext::expressionList() {
  return getRuleContext<CPP14Parser::ExpressionListContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::PostfixExpressionContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Greater() {
  return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::PostfixExpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Dynamic_cast() {
  return getToken(CPP14Parser::Dynamic_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Static_cast() {
  return getToken(CPP14Parser::Static_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Reinterpret_cast() {
  return getToken(CPP14Parser::Reinterpret_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Const_cast() {
  return getToken(CPP14Parser::Const_cast, 0);
}

CPP14Parser::TypeIdOfTheTypeIdContext* CPP14Parser::PostfixExpressionContext::typeIdOfTheTypeId() {
  return getRuleContext<CPP14Parser::TypeIdOfTheTypeIdContext>(0);
}

CPP14Parser::PostfixExpressionContext* CPP14Parser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<CPP14Parser::PostfixExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Dot() {
  return getToken(CPP14Parser::Dot, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Arrow() {
  return getToken(CPP14Parser::Arrow, 0);
}

CPP14Parser::IdExpressionContext* CPP14Parser::PostfixExpressionContext::idExpression() {
  return getRuleContext<CPP14Parser::IdExpressionContext>(0);
}

CPP14Parser::PseudoDestructorNameContext* CPP14Parser::PostfixExpressionContext::pseudoDestructorName() {
  return getRuleContext<CPP14Parser::PseudoDestructorNameContext>(0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::PlusPlus() {
  return getToken(CPP14Parser::PlusPlus, 0);
}

tree::TerminalNode* CPP14Parser::PostfixExpressionContext::MinusMinus() {
  return getToken(CPP14Parser::MinusMinus, 0);
}


size_t CPP14Parser::PostfixExpressionContext::getRuleIndex() const {
  return CPP14Parser::RulePostfixExpression;
}

void CPP14Parser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void CPP14Parser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any CPP14Parser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::PostfixExpressionContext* CPP14Parser::postfixExpression() {
   return postfixExpression(0);
}

CPP14Parser::PostfixExpressionContext* CPP14Parser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  CPP14Parser::PostfixExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CPP14Parser::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(534);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(505);
      primaryExpression();
      break;
    }

    case 2: {
      setState(508);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::Auto:
        case CPP14Parser::Bool:
        case CPP14Parser::Char:
        case CPP14Parser::Char16:
        case CPP14Parser::Char32:
        case CPP14Parser::Decltype:
        case CPP14Parser::Double:
        case CPP14Parser::Float:
        case CPP14Parser::Int:
        case CPP14Parser::Long:
        case CPP14Parser::Short:
        case CPP14Parser::Signed:
        case CPP14Parser::Unsigned:
        case CPP14Parser::Void:
        case CPP14Parser::Wchar:
        case CPP14Parser::Doublecolon:
        case CPP14Parser::Identifier: {
          setState(506);
          simpleTypeSpecifier();
          break;
        }

        case CPP14Parser::Typename_: {
          setState(507);
          typeNameSpecifier();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(516);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::LeftParen: {
          setState(510);
          match(CPP14Parser::LeftParen);
          setState(512);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
            | (1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
            | (1ULL << (CPP14Parser::Typeid_ - 65))
            | (1ULL << (CPP14Parser::Typename_ - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::LeftBrace - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
            setState(511);
            expressionList();
          }
          setState(514);
          match(CPP14Parser::RightParen);
          break;
        }

        case CPP14Parser::LeftBrace: {
          setState(515);
          bracedInitList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      setState(518);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Static_cast))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(519);
      match(CPP14Parser::Less);
      setState(520);
      theTypeId();
      setState(521);
      match(CPP14Parser::Greater);
      setState(522);
      match(CPP14Parser::LeftParen);
      setState(523);
      expression();
      setState(524);
      match(CPP14Parser::RightParen);
      break;
    }

    case 4: {
      setState(526);
      typeIdOfTheTypeId();
      setState(527);
      match(CPP14Parser::LeftParen);
      setState(530);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(528);
        expression();
        break;
      }

      case 2: {
        setState(529);
        theTypeId();
        break;
      }

      }
      setState(532);
      match(CPP14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(563);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(561);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(536);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(537);
          match(CPP14Parser::LeftBracket);
          setState(540);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case CPP14Parser::Literal:
            case CPP14Parser::Alignof:
            case CPP14Parser::Auto:
            case CPP14Parser::Bool:
            case CPP14Parser::Char:
            case CPP14Parser::Char16:
            case CPP14Parser::Char32:
            case CPP14Parser::Const_cast:
            case CPP14Parser::Decltype:
            case CPP14Parser::Delete:
            case CPP14Parser::Double:
            case CPP14Parser::Dynamic_cast:
            case CPP14Parser::Float:
            case CPP14Parser::Int:
            case CPP14Parser::Long:
            case CPP14Parser::New:
            case CPP14Parser::Noexcept:
            case CPP14Parser::Operator:
            case CPP14Parser::Reinterpret_cast:
            case CPP14Parser::Short:
            case CPP14Parser::Signed:
            case CPP14Parser::Sizeof:
            case CPP14Parser::Static_cast:
            case CPP14Parser::This:
            case CPP14Parser::Throw:
            case CPP14Parser::Typeid_:
            case CPP14Parser::Typename_:
            case CPP14Parser::Unsigned:
            case CPP14Parser::Void:
            case CPP14Parser::Wchar:
            case CPP14Parser::LeftParen:
            case CPP14Parser::LeftBracket:
            case CPP14Parser::Plus:
            case CPP14Parser::Minus:
            case CPP14Parser::Star:
            case CPP14Parser::And:
            case CPP14Parser::Or:
            case CPP14Parser::Tilde:
            case CPP14Parser::Not:
            case CPP14Parser::PlusPlus:
            case CPP14Parser::MinusMinus:
            case CPP14Parser::Doublecolon:
            case CPP14Parser::Identifier: {
              setState(538);
              expression();
              break;
            }

            case CPP14Parser::LeftBrace: {
              setState(539);
              bracedInitList();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(542);
          match(CPP14Parser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(544);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(545);
          match(CPP14Parser::LeftParen);
          setState(547);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
            | (1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
            | (1ULL << (CPP14Parser::Typeid_ - 65))
            | (1ULL << (CPP14Parser::Typename_ - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::LeftBrace - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
            setState(546);
            expressionList();
          }
          setState(549);
          match(CPP14Parser::RightParen);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(550);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(551);
          _la = _input->LA(1);
          if (!(_la == CPP14Parser::Arrow

          || _la == CPP14Parser::Dot)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(557);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
          case 1: {
            setState(553);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == CPP14Parser::Template) {
              setState(552);
              match(CPP14Parser::Template);
            }
            setState(555);
            idExpression();
            break;
          }

          case 2: {
            setState(556);
            pseudoDestructorName();
            break;
          }

          }
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(559);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(560);
          _la = _input->LA(1);
          if (!(_la == CPP14Parser::PlusPlus

          || _la == CPP14Parser::MinusMinus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        } 
      }
      setState(565);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeIdOfTheTypeIdContext ------------------------------------------------------------------

CPP14Parser::TypeIdOfTheTypeIdContext::TypeIdOfTheTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypeIdOfTheTypeIdContext::Typeid_() {
  return getToken(CPP14Parser::Typeid_, 0);
}


size_t CPP14Parser::TypeIdOfTheTypeIdContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeIdOfTheTypeId;
}

void CPP14Parser::TypeIdOfTheTypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIdOfTheTypeId(this);
}

void CPP14Parser::TypeIdOfTheTypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIdOfTheTypeId(this);
}


antlrcpp::Any CPP14Parser::TypeIdOfTheTypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypeIdOfTheTypeId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeIdOfTheTypeIdContext* CPP14Parser::typeIdOfTheTypeId() {
  TypeIdOfTheTypeIdContext *_localctx = _tracker.createInstance<TypeIdOfTheTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 32, CPP14Parser::RuleTypeIdOfTheTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    match(CPP14Parser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

CPP14Parser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::InitializerListContext* CPP14Parser::ExpressionListContext::initializerList() {
  return getRuleContext<CPP14Parser::InitializerListContext>(0);
}


size_t CPP14Parser::ExpressionListContext::getRuleIndex() const {
  return CPP14Parser::RuleExpressionList;
}

void CPP14Parser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void CPP14Parser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any CPP14Parser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExpressionListContext* CPP14Parser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 34, CPP14Parser::RuleExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    initializerList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoDestructorNameContext ------------------------------------------------------------------

CPP14Parser::PseudoDestructorNameContext::PseudoDestructorNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::PseudoDestructorNameContext::Tilde() {
  return getToken(CPP14Parser::Tilde, 0);
}

std::vector<CPP14Parser::TheTypeNameContext *> CPP14Parser::PseudoDestructorNameContext::theTypeName() {
  return getRuleContexts<CPP14Parser::TheTypeNameContext>();
}

CPP14Parser::TheTypeNameContext* CPP14Parser::PseudoDestructorNameContext::theTypeName(size_t i) {
  return getRuleContext<CPP14Parser::TheTypeNameContext>(i);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::PseudoDestructorNameContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::PseudoDestructorNameContext::Doublecolon() {
  return getToken(CPP14Parser::Doublecolon, 0);
}

tree::TerminalNode* CPP14Parser::PseudoDestructorNameContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::PseudoDestructorNameContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}

CPP14Parser::DecltypeSpecifierContext* CPP14Parser::PseudoDestructorNameContext::decltypeSpecifier() {
  return getRuleContext<CPP14Parser::DecltypeSpecifierContext>(0);
}


size_t CPP14Parser::PseudoDestructorNameContext::getRuleIndex() const {
  return CPP14Parser::RulePseudoDestructorName;
}

void CPP14Parser::PseudoDestructorNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudoDestructorName(this);
}

void CPP14Parser::PseudoDestructorNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudoDestructorName(this);
}


antlrcpp::Any CPP14Parser::PseudoDestructorNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPseudoDestructorName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PseudoDestructorNameContext* CPP14Parser::pseudoDestructorName() {
  PseudoDestructorNameContext *_localctx = _tracker.createInstance<PseudoDestructorNameContext>(_ctx, getState());
  enterRule(_localctx, 36, CPP14Parser::RulePseudoDestructorName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(589);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(571);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(570);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(576);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(573);
        theTypeName();
        setState(574);
        match(CPP14Parser::Doublecolon);
      }
      setState(578);
      match(CPP14Parser::Tilde);
      setState(579);
      theTypeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(580);
      nestedNameSpecifier(0);
      setState(581);
      match(CPP14Parser::Template);
      setState(582);
      simpleTemplateId();
      setState(583);
      match(CPP14Parser::Doublecolon);
      setState(584);
      match(CPP14Parser::Tilde);
      setState(585);
      theTypeName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(587);
      match(CPP14Parser::Tilde);
      setState(588);
      decltypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CPP14Parser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PostfixExpressionContext* CPP14Parser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CPP14Parser::PostfixExpressionContext>(0);
}

CPP14Parser::UnaryExpressionContext* CPP14Parser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<CPP14Parser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::PlusPlus() {
  return getToken(CPP14Parser::PlusPlus, 0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::MinusMinus() {
  return getToken(CPP14Parser::MinusMinus, 0);
}

CPP14Parser::UnaryOperatorContext* CPP14Parser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CPP14Parser::UnaryOperatorContext>(0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::Sizeof() {
  return getToken(CPP14Parser::Sizeof, 0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::UnaryExpressionContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::UnaryExpressionContext::Alignof() {
  return getToken(CPP14Parser::Alignof, 0);
}

CPP14Parser::NoExceptExpressionContext* CPP14Parser::UnaryExpressionContext::noExceptExpression() {
  return getRuleContext<CPP14Parser::NoExceptExpressionContext>(0);
}

CPP14Parser::NewExpressionContext* CPP14Parser::UnaryExpressionContext::newExpression() {
  return getRuleContext<CPP14Parser::NewExpressionContext>(0);
}

CPP14Parser::DeleteExpressionContext* CPP14Parser::UnaryExpressionContext::deleteExpression() {
  return getRuleContext<CPP14Parser::DeleteExpressionContext>(0);
}


size_t CPP14Parser::UnaryExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleUnaryExpression;
}

void CPP14Parser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void CPP14Parser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any CPP14Parser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnaryExpressionContext* CPP14Parser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CPP14Parser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(618);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(591);
      postfixExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(596);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::PlusPlus: {
          setState(592);
          match(CPP14Parser::PlusPlus);
          break;
        }

        case CPP14Parser::MinusMinus: {
          setState(593);
          match(CPP14Parser::MinusMinus);
          break;
        }

        case CPP14Parser::Plus:
        case CPP14Parser::Minus:
        case CPP14Parser::Star:
        case CPP14Parser::And:
        case CPP14Parser::Or:
        case CPP14Parser::Tilde:
        case CPP14Parser::Not: {
          setState(594);
          unaryOperator();
          break;
        }

        case CPP14Parser::Sizeof: {
          setState(595);
          match(CPP14Parser::Sizeof);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(598);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(599);
      match(CPP14Parser::Sizeof);
      setState(608);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::LeftParen: {
          setState(600);
          match(CPP14Parser::LeftParen);
          setState(601);
          theTypeId();
          setState(602);
          match(CPP14Parser::RightParen);
          break;
        }

        case CPP14Parser::Ellipsis: {
          setState(604);
          match(CPP14Parser::Ellipsis);
          setState(605);
          match(CPP14Parser::LeftParen);
          setState(606);
          match(CPP14Parser::Identifier);
          setState(607);
          match(CPP14Parser::RightParen);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(610);
      match(CPP14Parser::Alignof);
      setState(611);
      match(CPP14Parser::LeftParen);
      setState(612);
      theTypeId();
      setState(613);
      match(CPP14Parser::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(615);
      noExceptExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(616);
      newExpression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(617);
      deleteExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CPP14Parser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::Or() {
  return getToken(CPP14Parser::Or, 0);
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::Star() {
  return getToken(CPP14Parser::Star, 0);
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::And() {
  return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::Plus() {
  return getToken(CPP14Parser::Plus, 0);
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::Tilde() {
  return getToken(CPP14Parser::Tilde, 0);
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::Minus() {
  return getToken(CPP14Parser::Minus, 0);
}

tree::TerminalNode* CPP14Parser::UnaryOperatorContext::Not() {
  return getToken(CPP14Parser::Not, 0);
}


size_t CPP14Parser::UnaryOperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleUnaryOperator;
}

void CPP14Parser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void CPP14Parser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any CPP14Parser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UnaryOperatorContext* CPP14Parser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 40, CPP14Parser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    _la = _input->LA(1);
    if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (CPP14Parser::Plus - 85))
      | (1ULL << (CPP14Parser::Minus - 85))
      | (1ULL << (CPP14Parser::Star - 85))
      | (1ULL << (CPP14Parser::And - 85))
      | (1ULL << (CPP14Parser::Or - 85))
      | (1ULL << (CPP14Parser::Tilde - 85))
      | (1ULL << (CPP14Parser::Not - 85)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewExpressionContext ------------------------------------------------------------------

CPP14Parser::NewExpressionContext::NewExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NewExpressionContext::New() {
  return getToken(CPP14Parser::New, 0);
}

CPP14Parser::NewTypeIdContext* CPP14Parser::NewExpressionContext::newTypeId() {
  return getRuleContext<CPP14Parser::NewTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::NewExpressionContext::Doublecolon() {
  return getToken(CPP14Parser::Doublecolon, 0);
}

CPP14Parser::NewPlacementContext* CPP14Parser::NewExpressionContext::newPlacement() {
  return getRuleContext<CPP14Parser::NewPlacementContext>(0);
}

CPP14Parser::NewInitializerContext* CPP14Parser::NewExpressionContext::newInitializer() {
  return getRuleContext<CPP14Parser::NewInitializerContext>(0);
}

tree::TerminalNode* CPP14Parser::NewExpressionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::NewExpressionContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::NewExpressionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NewExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleNewExpression;
}

void CPP14Parser::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}

void CPP14Parser::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}


antlrcpp::Any CPP14Parser::NewExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNewExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewExpressionContext* CPP14Parser::newExpression() {
  NewExpressionContext *_localctx = _tracker.createInstance<NewExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, CPP14Parser::RuleNewExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Doublecolon) {
      setState(622);
      match(CPP14Parser::Doublecolon);
    }
    setState(625);
    match(CPP14Parser::New);
    setState(627);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(626);
      newPlacement();
      break;
    }

    }
    setState(634);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Struct:
      case CPP14Parser::Typename_:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        setState(629);
        newTypeId();
        break;
      }

      case CPP14Parser::LeftParen: {
        setState(630);
        match(CPP14Parser::LeftParen);
        setState(631);
        theTypeId();
        setState(632);
        match(CPP14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(637);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::LeftParen

    || _la == CPP14Parser::LeftBrace) {
      setState(636);
      newInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewPlacementContext ------------------------------------------------------------------

CPP14Parser::NewPlacementContext::NewPlacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NewPlacementContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionListContext* CPP14Parser::NewPlacementContext::expressionList() {
  return getRuleContext<CPP14Parser::ExpressionListContext>(0);
}

tree::TerminalNode* CPP14Parser::NewPlacementContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NewPlacementContext::getRuleIndex() const {
  return CPP14Parser::RuleNewPlacement;
}

void CPP14Parser::NewPlacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewPlacement(this);
}

void CPP14Parser::NewPlacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewPlacement(this);
}


antlrcpp::Any CPP14Parser::NewPlacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNewPlacement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewPlacementContext* CPP14Parser::newPlacement() {
  NewPlacementContext *_localctx = _tracker.createInstance<NewPlacementContext>(_ctx, getState());
  enterRule(_localctx, 44, CPP14Parser::RuleNewPlacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(639);
    match(CPP14Parser::LeftParen);
    setState(640);
    expressionList();
    setState(641);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewTypeIdContext ------------------------------------------------------------------

CPP14Parser::NewTypeIdContext::NewTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypeSpecifierSeqContext* CPP14Parser::NewTypeIdContext::typeSpecifierSeq() {
  return getRuleContext<CPP14Parser::TypeSpecifierSeqContext>(0);
}

CPP14Parser::NewDeclaratorContext* CPP14Parser::NewTypeIdContext::newDeclarator() {
  return getRuleContext<CPP14Parser::NewDeclaratorContext>(0);
}


size_t CPP14Parser::NewTypeIdContext::getRuleIndex() const {
  return CPP14Parser::RuleNewTypeId;
}

void CPP14Parser::NewTypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewTypeId(this);
}

void CPP14Parser::NewTypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewTypeId(this);
}


antlrcpp::Any CPP14Parser::NewTypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNewTypeId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewTypeIdContext* CPP14Parser::newTypeId() {
  NewTypeIdContext *_localctx = _tracker.createInstance<NewTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 46, CPP14Parser::RuleNewTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    typeSpecifierSeq();
    setState(645);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(644);
      newDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewDeclaratorContext ------------------------------------------------------------------

CPP14Parser::NewDeclaratorContext::NewDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PointerOperatorContext* CPP14Parser::NewDeclaratorContext::pointerOperator() {
  return getRuleContext<CPP14Parser::PointerOperatorContext>(0);
}

CPP14Parser::NewDeclaratorContext* CPP14Parser::NewDeclaratorContext::newDeclarator() {
  return getRuleContext<CPP14Parser::NewDeclaratorContext>(0);
}

CPP14Parser::NoPointerNewDeclaratorContext* CPP14Parser::NewDeclaratorContext::noPointerNewDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerNewDeclaratorContext>(0);
}


size_t CPP14Parser::NewDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNewDeclarator;
}

void CPP14Parser::NewDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewDeclarator(this);
}

void CPP14Parser::NewDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewDeclarator(this);
}


antlrcpp::Any CPP14Parser::NewDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNewDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewDeclaratorContext* CPP14Parser::newDeclarator() {
  NewDeclaratorContext *_localctx = _tracker.createInstance<NewDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 48, CPP14Parser::RuleNewDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(652);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Decltype:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(647);
        pointerOperator();
        setState(649);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
        case 1: {
          setState(648);
          newDeclarator();
          break;
        }

        }
        break;
      }

      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(651);
        noPointerNewDeclarator(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerNewDeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoPointerNewDeclaratorContext::NoPointerNewDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NoPointerNewDeclaratorContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::NoPointerNewDeclaratorContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerNewDeclaratorContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::NoPointerNewDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::NoPointerNewDeclaratorContext* CPP14Parser::NoPointerNewDeclaratorContext::noPointerNewDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerNewDeclaratorContext>(0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::NoPointerNewDeclaratorContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}


size_t CPP14Parser::NoPointerNewDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoPointerNewDeclarator;
}

void CPP14Parser::NoPointerNewDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerNewDeclarator(this);
}

void CPP14Parser::NoPointerNewDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerNewDeclarator(this);
}


antlrcpp::Any CPP14Parser::NoPointerNewDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerNewDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoPointerNewDeclaratorContext* CPP14Parser::noPointerNewDeclarator() {
   return noPointerNewDeclarator(0);
}

CPP14Parser::NoPointerNewDeclaratorContext* CPP14Parser::noPointerNewDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoPointerNewDeclaratorContext *_localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoPointerNewDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, CPP14Parser::RuleNoPointerNewDeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(655);
    match(CPP14Parser::LeftBracket);
    setState(656);
    expression();
    setState(657);
    match(CPP14Parser::RightBracket);
    setState(659);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(658);
      attributeSpecifierSeq();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(670);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerNewDeclarator);
        setState(661);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(662);
        match(CPP14Parser::LeftBracket);
        setState(663);
        constantExpression();
        setState(664);
        match(CPP14Parser::RightBracket);
        setState(666);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
        case 1: {
          setState(665);
          attributeSpecifierSeq();
          break;
        }

        } 
      }
      setState(672);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewInitializerContext ------------------------------------------------------------------

CPP14Parser::NewInitializerContext::NewInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NewInitializerContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::NewInitializerContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::ExpressionListContext* CPP14Parser::NewInitializerContext::expressionList() {
  return getRuleContext<CPP14Parser::ExpressionListContext>(0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::NewInitializerContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}


size_t CPP14Parser::NewInitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleNewInitializer;
}

void CPP14Parser::NewInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewInitializer(this);
}

void CPP14Parser::NewInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewInitializer(this);
}


antlrcpp::Any CPP14Parser::NewInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNewInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NewInitializerContext* CPP14Parser::newInitializer() {
  NewInitializerContext *_localctx = _tracker.createInstance<NewInitializerContext>(_ctx, getState());
  enterRule(_localctx, 52, CPP14Parser::RuleNewInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(679);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(673);
        match(CPP14Parser::LeftParen);
        setState(675);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
          | (1ULL << CPP14Parser::Alignof)
          | (1ULL << CPP14Parser::Auto)
          | (1ULL << CPP14Parser::Bool)
          | (1ULL << CPP14Parser::Char)
          | (1ULL << CPP14Parser::Char16)
          | (1ULL << CPP14Parser::Char32)
          | (1ULL << CPP14Parser::Const_cast)
          | (1ULL << CPP14Parser::Decltype)
          | (1ULL << CPP14Parser::Delete)
          | (1ULL << CPP14Parser::Double)
          | (1ULL << CPP14Parser::Dynamic_cast)
          | (1ULL << CPP14Parser::Float)
          | (1ULL << CPP14Parser::Int)
          | (1ULL << CPP14Parser::Long)
          | (1ULL << CPP14Parser::New)
          | (1ULL << CPP14Parser::Noexcept)
          | (1ULL << CPP14Parser::Operator)
          | (1ULL << CPP14Parser::Reinterpret_cast)
          | (1ULL << CPP14Parser::Short)
          | (1ULL << CPP14Parser::Signed)
          | (1ULL << CPP14Parser::Sizeof)
          | (1ULL << CPP14Parser::Static_cast)
          | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
          | (1ULL << (CPP14Parser::Typeid_ - 65))
          | (1ULL << (CPP14Parser::Typename_ - 65))
          | (1ULL << (CPP14Parser::Unsigned - 65))
          | (1ULL << (CPP14Parser::Void - 65))
          | (1ULL << (CPP14Parser::Wchar - 65))
          | (1ULL << (CPP14Parser::LeftParen - 65))
          | (1ULL << (CPP14Parser::LeftBracket - 65))
          | (1ULL << (CPP14Parser::LeftBrace - 65))
          | (1ULL << (CPP14Parser::Plus - 65))
          | (1ULL << (CPP14Parser::Minus - 65))
          | (1ULL << (CPP14Parser::Star - 65))
          | (1ULL << (CPP14Parser::And - 65))
          | (1ULL << (CPP14Parser::Or - 65))
          | (1ULL << (CPP14Parser::Tilde - 65))
          | (1ULL << (CPP14Parser::Not - 65))
          | (1ULL << (CPP14Parser::PlusPlus - 65))
          | (1ULL << (CPP14Parser::MinusMinus - 65))
          | (1ULL << (CPP14Parser::Doublecolon - 65))
          | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
          setState(674);
          expressionList();
        }
        setState(677);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(678);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteExpressionContext ------------------------------------------------------------------

CPP14Parser::DeleteExpressionContext::DeleteExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::DeleteExpressionContext::Delete() {
  return getToken(CPP14Parser::Delete, 0);
}

CPP14Parser::CastExpressionContext* CPP14Parser::DeleteExpressionContext::castExpression() {
  return getRuleContext<CPP14Parser::CastExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::DeleteExpressionContext::Doublecolon() {
  return getToken(CPP14Parser::Doublecolon, 0);
}

tree::TerminalNode* CPP14Parser::DeleteExpressionContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::DeleteExpressionContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}


size_t CPP14Parser::DeleteExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleDeleteExpression;
}

void CPP14Parser::DeleteExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteExpression(this);
}

void CPP14Parser::DeleteExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteExpression(this);
}


antlrcpp::Any CPP14Parser::DeleteExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeleteExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeleteExpressionContext* CPP14Parser::deleteExpression() {
  DeleteExpressionContext *_localctx = _tracker.createInstance<DeleteExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, CPP14Parser::RuleDeleteExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Doublecolon) {
      setState(681);
      match(CPP14Parser::Doublecolon);
    }
    setState(684);
    match(CPP14Parser::Delete);
    setState(687);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(685);
      match(CPP14Parser::LeftBracket);
      setState(686);
      match(CPP14Parser::RightBracket);
      break;
    }

    }
    setState(689);
    castExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoExceptExpressionContext ------------------------------------------------------------------

CPP14Parser::NoExceptExpressionContext::NoExceptExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NoExceptExpressionContext::Noexcept() {
  return getToken(CPP14Parser::Noexcept, 0);
}

tree::TerminalNode* CPP14Parser::NoExceptExpressionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::NoExceptExpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::NoExceptExpressionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NoExceptExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleNoExceptExpression;
}

void CPP14Parser::NoExceptExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoExceptExpression(this);
}

void CPP14Parser::NoExceptExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoExceptExpression(this);
}


antlrcpp::Any CPP14Parser::NoExceptExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNoExceptExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NoExceptExpressionContext* CPP14Parser::noExceptExpression() {
  NoExceptExpressionContext *_localctx = _tracker.createInstance<NoExceptExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CPP14Parser::RuleNoExceptExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(691);
    match(CPP14Parser::Noexcept);
    setState(692);
    match(CPP14Parser::LeftParen);
    setState(693);
    expression();
    setState(694);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

CPP14Parser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::UnaryExpressionContext* CPP14Parser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CPP14Parser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::CastExpressionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::CastExpressionContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::CastExpressionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::CastExpressionContext* CPP14Parser::CastExpressionContext::castExpression() {
  return getRuleContext<CPP14Parser::CastExpressionContext>(0);
}


size_t CPP14Parser::CastExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleCastExpression;
}

void CPP14Parser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void CPP14Parser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any CPP14Parser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CastExpressionContext* CPP14Parser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, CPP14Parser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(702);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(696);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(697);
      match(CPP14Parser::LeftParen);
      setState(698);
      theTypeId();
      setState(699);
      match(CPP14Parser::RightParen);
      setState(700);
      castExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerMemberExpressionContext ------------------------------------------------------------------

CPP14Parser::PointerMemberExpressionContext::PointerMemberExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::CastExpressionContext *> CPP14Parser::PointerMemberExpressionContext::castExpression() {
  return getRuleContexts<CPP14Parser::CastExpressionContext>();
}

CPP14Parser::CastExpressionContext* CPP14Parser::PointerMemberExpressionContext::castExpression(size_t i) {
  return getRuleContext<CPP14Parser::CastExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::PointerMemberExpressionContext::DotStar() {
  return getTokens(CPP14Parser::DotStar);
}

tree::TerminalNode* CPP14Parser::PointerMemberExpressionContext::DotStar(size_t i) {
  return getToken(CPP14Parser::DotStar, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::PointerMemberExpressionContext::ArrowStar() {
  return getTokens(CPP14Parser::ArrowStar);
}

tree::TerminalNode* CPP14Parser::PointerMemberExpressionContext::ArrowStar(size_t i) {
  return getToken(CPP14Parser::ArrowStar, i);
}


size_t CPP14Parser::PointerMemberExpressionContext::getRuleIndex() const {
  return CPP14Parser::RulePointerMemberExpression;
}

void CPP14Parser::PointerMemberExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerMemberExpression(this);
}

void CPP14Parser::PointerMemberExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerMemberExpression(this);
}


antlrcpp::Any CPP14Parser::PointerMemberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPointerMemberExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PointerMemberExpressionContext* CPP14Parser::pointerMemberExpression() {
  PointerMemberExpressionContext *_localctx = _tracker.createInstance<PointerMemberExpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, CPP14Parser::RulePointerMemberExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(704);
    castExpression();
    setState(709);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::ArrowStar

    || _la == CPP14Parser::DotStar) {
      setState(705);
      _la = _input->LA(1);
      if (!(_la == CPP14Parser::ArrowStar

      || _la == CPP14Parser::DotStar)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(706);
      castExpression();
      setState(711);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CPP14Parser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::PointerMemberExpressionContext *> CPP14Parser::MultiplicativeExpressionContext::pointerMemberExpression() {
  return getRuleContexts<CPP14Parser::PointerMemberExpressionContext>();
}

CPP14Parser::PointerMemberExpressionContext* CPP14Parser::MultiplicativeExpressionContext::pointerMemberExpression(size_t i) {
  return getRuleContext<CPP14Parser::PointerMemberExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MultiplicativeExpressionContext::Star() {
  return getTokens(CPP14Parser::Star);
}

tree::TerminalNode* CPP14Parser::MultiplicativeExpressionContext::Star(size_t i) {
  return getToken(CPP14Parser::Star, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MultiplicativeExpressionContext::Div() {
  return getTokens(CPP14Parser::Div);
}

tree::TerminalNode* CPP14Parser::MultiplicativeExpressionContext::Div(size_t i) {
  return getToken(CPP14Parser::Div, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MultiplicativeExpressionContext::Mod() {
  return getTokens(CPP14Parser::Mod);
}

tree::TerminalNode* CPP14Parser::MultiplicativeExpressionContext::Mod(size_t i) {
  return getToken(CPP14Parser::Mod, i);
}


size_t CPP14Parser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleMultiplicativeExpression;
}

void CPP14Parser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void CPP14Parser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any CPP14Parser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MultiplicativeExpressionContext* CPP14Parser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 62, CPP14Parser::RuleMultiplicativeExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    pointerMemberExpression();
    setState(717);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 87) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 87)) & ((1ULL << (CPP14Parser::Star - 87))
      | (1ULL << (CPP14Parser::Div - 87))
      | (1ULL << (CPP14Parser::Mod - 87)))) != 0)) {
      setState(713);
      _la = _input->LA(1);
      if (!(((((_la - 87) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 87)) & ((1ULL << (CPP14Parser::Star - 87))
        | (1ULL << (CPP14Parser::Div - 87))
        | (1ULL << (CPP14Parser::Mod - 87)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(714);
      pointerMemberExpression();
      setState(719);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CPP14Parser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::MultiplicativeExpressionContext *> CPP14Parser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<CPP14Parser::MultiplicativeExpressionContext>();
}

CPP14Parser::MultiplicativeExpressionContext* CPP14Parser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<CPP14Parser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::AdditiveExpressionContext::Plus() {
  return getTokens(CPP14Parser::Plus);
}

tree::TerminalNode* CPP14Parser::AdditiveExpressionContext::Plus(size_t i) {
  return getToken(CPP14Parser::Plus, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::AdditiveExpressionContext::Minus() {
  return getTokens(CPP14Parser::Minus);
}

tree::TerminalNode* CPP14Parser::AdditiveExpressionContext::Minus(size_t i) {
  return getToken(CPP14Parser::Minus, i);
}


size_t CPP14Parser::AdditiveExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleAdditiveExpression;
}

void CPP14Parser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void CPP14Parser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any CPP14Parser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AdditiveExpressionContext* CPP14Parser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 64, CPP14Parser::RuleAdditiveExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    multiplicativeExpression();
    setState(725);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Plus

    || _la == CPP14Parser::Minus) {
      setState(721);
      _la = _input->LA(1);
      if (!(_la == CPP14Parser::Plus

      || _la == CPP14Parser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(722);
      multiplicativeExpression();
      setState(727);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CPP14Parser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::AdditiveExpressionContext *> CPP14Parser::ShiftExpressionContext::additiveExpression() {
  return getRuleContexts<CPP14Parser::AdditiveExpressionContext>();
}

CPP14Parser::AdditiveExpressionContext* CPP14Parser::ShiftExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<CPP14Parser::AdditiveExpressionContext>(i);
}

std::vector<CPP14Parser::ShiftOperatorContext *> CPP14Parser::ShiftExpressionContext::shiftOperator() {
  return getRuleContexts<CPP14Parser::ShiftOperatorContext>();
}

CPP14Parser::ShiftOperatorContext* CPP14Parser::ShiftExpressionContext::shiftOperator(size_t i) {
  return getRuleContext<CPP14Parser::ShiftOperatorContext>(i);
}


size_t CPP14Parser::ShiftExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleShiftExpression;
}

void CPP14Parser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void CPP14Parser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


antlrcpp::Any CPP14Parser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ShiftExpressionContext* CPP14Parser::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, CPP14Parser::RuleShiftExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    additiveExpression();
    setState(734);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::LeftShift

    || _la == CPP14Parser::RightShift) {
      setState(729);
      shiftOperator();
      setState(730);
      additiveExpression();
      setState(736);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftOperatorContext ------------------------------------------------------------------

CPP14Parser::ShiftOperatorContext::ShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ShiftOperatorContext::RightShift() {
  return getToken(CPP14Parser::RightShift, 0);
}

tree::TerminalNode* CPP14Parser::ShiftOperatorContext::LeftShift() {
  return getToken(CPP14Parser::LeftShift, 0);
}


size_t CPP14Parser::ShiftOperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleShiftOperator;
}

void CPP14Parser::ShiftOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftOperator(this);
}

void CPP14Parser::ShiftOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftOperator(this);
}


antlrcpp::Any CPP14Parser::ShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ShiftOperatorContext* CPP14Parser::shiftOperator() {
  ShiftOperatorContext *_localctx = _tracker.createInstance<ShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 68, CPP14Parser::RuleShiftOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(737);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::LeftShift

    || _la == CPP14Parser::RightShift)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CPP14Parser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::ShiftExpressionContext *> CPP14Parser::RelationalExpressionContext::shiftExpression() {
  return getRuleContexts<CPP14Parser::ShiftExpressionContext>();
}

CPP14Parser::ShiftExpressionContext* CPP14Parser::RelationalExpressionContext::shiftExpression(size_t i) {
  return getRuleContext<CPP14Parser::ShiftExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::RelationalExpressionContext::Less() {
  return getTokens(CPP14Parser::Less);
}

tree::TerminalNode* CPP14Parser::RelationalExpressionContext::Less(size_t i) {
  return getToken(CPP14Parser::Less, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::RelationalExpressionContext::Greater() {
  return getTokens(CPP14Parser::Greater);
}

tree::TerminalNode* CPP14Parser::RelationalExpressionContext::Greater(size_t i) {
  return getToken(CPP14Parser::Greater, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::RelationalExpressionContext::LessEqual() {
  return getTokens(CPP14Parser::LessEqual);
}

tree::TerminalNode* CPP14Parser::RelationalExpressionContext::LessEqual(size_t i) {
  return getToken(CPP14Parser::LessEqual, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::RelationalExpressionContext::GreaterEqual() {
  return getTokens(CPP14Parser::GreaterEqual);
}

tree::TerminalNode* CPP14Parser::RelationalExpressionContext::GreaterEqual(size_t i) {
  return getToken(CPP14Parser::GreaterEqual, i);
}


size_t CPP14Parser::RelationalExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleRelationalExpression;
}

void CPP14Parser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void CPP14Parser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


antlrcpp::Any CPP14Parser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::RelationalExpressionContext* CPP14Parser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, CPP14Parser::RuleRelationalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(739);
    shiftExpression();
    setState(744);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(740);
        _la = _input->LA(1);
        if (!(((((_la - 96) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 96)) & ((1ULL << (CPP14Parser::Less - 96))
          | (1ULL << (CPP14Parser::Greater - 96))
          | (1ULL << (CPP14Parser::LessEqual - 96))
          | (1ULL << (CPP14Parser::GreaterEqual - 96)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(741);
        shiftExpression(); 
      }
      setState(746);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CPP14Parser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::RelationalExpressionContext *> CPP14Parser::EqualityExpressionContext::relationalExpression() {
  return getRuleContexts<CPP14Parser::RelationalExpressionContext>();
}

CPP14Parser::RelationalExpressionContext* CPP14Parser::EqualityExpressionContext::relationalExpression(size_t i) {
  return getRuleContext<CPP14Parser::RelationalExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::EqualityExpressionContext::Equal() {
  return getTokens(CPP14Parser::Equal);
}

tree::TerminalNode* CPP14Parser::EqualityExpressionContext::Equal(size_t i) {
  return getToken(CPP14Parser::Equal, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::EqualityExpressionContext::NotEqual() {
  return getTokens(CPP14Parser::NotEqual);
}

tree::TerminalNode* CPP14Parser::EqualityExpressionContext::NotEqual(size_t i) {
  return getToken(CPP14Parser::NotEqual, i);
}


size_t CPP14Parser::EqualityExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleEqualityExpression;
}

void CPP14Parser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void CPP14Parser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


antlrcpp::Any CPP14Parser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EqualityExpressionContext* CPP14Parser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 72, CPP14Parser::RuleEqualityExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    relationalExpression();
    setState(752);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Equal

    || _la == CPP14Parser::NotEqual) {
      setState(748);
      _la = _input->LA(1);
      if (!(_la == CPP14Parser::Equal

      || _la == CPP14Parser::NotEqual)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(749);
      relationalExpression();
      setState(754);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

CPP14Parser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::EqualityExpressionContext *> CPP14Parser::AndExpressionContext::equalityExpression() {
  return getRuleContexts<CPP14Parser::EqualityExpressionContext>();
}

CPP14Parser::EqualityExpressionContext* CPP14Parser::AndExpressionContext::equalityExpression(size_t i) {
  return getRuleContext<CPP14Parser::EqualityExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::AndExpressionContext::And() {
  return getTokens(CPP14Parser::And);
}

tree::TerminalNode* CPP14Parser::AndExpressionContext::And(size_t i) {
  return getToken(CPP14Parser::And, i);
}


size_t CPP14Parser::AndExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleAndExpression;
}

void CPP14Parser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void CPP14Parser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


antlrcpp::Any CPP14Parser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AndExpressionContext* CPP14Parser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 74, CPP14Parser::RuleAndExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(755);
    equalityExpression();
    setState(760);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::And) {
      setState(756);
      match(CPP14Parser::And);
      setState(757);
      equalityExpression();
      setState(762);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

CPP14Parser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::AndExpressionContext *> CPP14Parser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContexts<CPP14Parser::AndExpressionContext>();
}

CPP14Parser::AndExpressionContext* CPP14Parser::ExclusiveOrExpressionContext::andExpression(size_t i) {
  return getRuleContext<CPP14Parser::AndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::ExclusiveOrExpressionContext::Caret() {
  return getTokens(CPP14Parser::Caret);
}

tree::TerminalNode* CPP14Parser::ExclusiveOrExpressionContext::Caret(size_t i) {
  return getToken(CPP14Parser::Caret, i);
}


size_t CPP14Parser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleExclusiveOrExpression;
}

void CPP14Parser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void CPP14Parser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


antlrcpp::Any CPP14Parser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExclusiveOrExpressionContext* CPP14Parser::exclusiveOrExpression() {
  ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, CPP14Parser::RuleExclusiveOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    andExpression();
    setState(768);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Caret) {
      setState(764);
      match(CPP14Parser::Caret);
      setState(765);
      andExpression();
      setState(770);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

CPP14Parser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::ExclusiveOrExpressionContext *> CPP14Parser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContexts<CPP14Parser::ExclusiveOrExpressionContext>();
}

CPP14Parser::ExclusiveOrExpressionContext* CPP14Parser::InclusiveOrExpressionContext::exclusiveOrExpression(size_t i) {
  return getRuleContext<CPP14Parser::ExclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::InclusiveOrExpressionContext::Or() {
  return getTokens(CPP14Parser::Or);
}

tree::TerminalNode* CPP14Parser::InclusiveOrExpressionContext::Or(size_t i) {
  return getToken(CPP14Parser::Or, i);
}


size_t CPP14Parser::InclusiveOrExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleInclusiveOrExpression;
}

void CPP14Parser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void CPP14Parser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


antlrcpp::Any CPP14Parser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InclusiveOrExpressionContext* CPP14Parser::inclusiveOrExpression() {
  InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 78, CPP14Parser::RuleInclusiveOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(771);
    exclusiveOrExpression();
    setState(776);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Or) {
      setState(772);
      match(CPP14Parser::Or);
      setState(773);
      exclusiveOrExpression();
      setState(778);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

CPP14Parser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::InclusiveOrExpressionContext *> CPP14Parser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContexts<CPP14Parser::InclusiveOrExpressionContext>();
}

CPP14Parser::InclusiveOrExpressionContext* CPP14Parser::LogicalAndExpressionContext::inclusiveOrExpression(size_t i) {
  return getRuleContext<CPP14Parser::InclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::LogicalAndExpressionContext::AndAnd() {
  return getTokens(CPP14Parser::AndAnd);
}

tree::TerminalNode* CPP14Parser::LogicalAndExpressionContext::AndAnd(size_t i) {
  return getToken(CPP14Parser::AndAnd, i);
}


size_t CPP14Parser::LogicalAndExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleLogicalAndExpression;
}

void CPP14Parser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void CPP14Parser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


antlrcpp::Any CPP14Parser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LogicalAndExpressionContext* CPP14Parser::logicalAndExpression() {
  LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 80, CPP14Parser::RuleLogicalAndExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    inclusiveOrExpression();
    setState(784);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::AndAnd) {
      setState(780);
      match(CPP14Parser::AndAnd);
      setState(781);
      inclusiveOrExpression();
      setState(786);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

CPP14Parser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::LogicalAndExpressionContext *> CPP14Parser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContexts<CPP14Parser::LogicalAndExpressionContext>();
}

CPP14Parser::LogicalAndExpressionContext* CPP14Parser::LogicalOrExpressionContext::logicalAndExpression(size_t i) {
  return getRuleContext<CPP14Parser::LogicalAndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::LogicalOrExpressionContext::OrOr() {
  return getTokens(CPP14Parser::OrOr);
}

tree::TerminalNode* CPP14Parser::LogicalOrExpressionContext::OrOr(size_t i) {
  return getToken(CPP14Parser::OrOr, i);
}


size_t CPP14Parser::LogicalOrExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleLogicalOrExpression;
}

void CPP14Parser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void CPP14Parser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}


antlrcpp::Any CPP14Parser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LogicalOrExpressionContext* CPP14Parser::logicalOrExpression() {
  LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, CPP14Parser::RuleLogicalOrExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    logicalAndExpression();
    setState(792);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::OrOr) {
      setState(788);
      match(CPP14Parser::OrOr);
      setState(789);
      logicalAndExpression();
      setState(794);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CPP14Parser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LogicalOrExpressionContext* CPP14Parser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<CPP14Parser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::ConditionalExpressionContext::Question() {
  return getToken(CPP14Parser::Question, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::ConditionalExpressionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::ConditionalExpressionContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::AssignmentExpressionContext* CPP14Parser::ConditionalExpressionContext::assignmentExpression() {
  return getRuleContext<CPP14Parser::AssignmentExpressionContext>(0);
}


size_t CPP14Parser::ConditionalExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleConditionalExpression;
}

void CPP14Parser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void CPP14Parser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any CPP14Parser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConditionalExpressionContext* CPP14Parser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 84, CPP14Parser::RuleConditionalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(795);
    logicalOrExpression();
    setState(801);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Question) {
      setState(796);
      match(CPP14Parser::Question);
      setState(797);
      expression();
      setState(798);
      match(CPP14Parser::Colon);
      setState(799);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CPP14Parser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ConditionalExpressionContext* CPP14Parser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<CPP14Parser::ConditionalExpressionContext>(0);
}

CPP14Parser::LogicalOrExpressionContext* CPP14Parser::AssignmentExpressionContext::logicalOrExpression() {
  return getRuleContext<CPP14Parser::LogicalOrExpressionContext>(0);
}

CPP14Parser::AssignmentOperatorContext* CPP14Parser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<CPP14Parser::AssignmentOperatorContext>(0);
}

CPP14Parser::InitializerClauseContext* CPP14Parser::AssignmentExpressionContext::initializerClause() {
  return getRuleContext<CPP14Parser::InitializerClauseContext>(0);
}

CPP14Parser::ThrowExpressionContext* CPP14Parser::AssignmentExpressionContext::throwExpression() {
  return getRuleContext<CPP14Parser::ThrowExpressionContext>(0);
}


size_t CPP14Parser::AssignmentExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleAssignmentExpression;
}

void CPP14Parser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void CPP14Parser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any CPP14Parser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AssignmentExpressionContext* CPP14Parser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 86, CPP14Parser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(809);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(803);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(804);
      logicalOrExpression();
      setState(805);
      assignmentOperator();
      setState(806);
      initializerClause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(808);
      throwExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

CPP14Parser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::StarAssign() {
  return getToken(CPP14Parser::StarAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::DivAssign() {
  return getToken(CPP14Parser::DivAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::ModAssign() {
  return getToken(CPP14Parser::ModAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::PlusAssign() {
  return getToken(CPP14Parser::PlusAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::MinusAssign() {
  return getToken(CPP14Parser::MinusAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::RightShiftAssign() {
  return getToken(CPP14Parser::RightShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::LeftShiftAssign() {
  return getToken(CPP14Parser::LeftShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::AndAssign() {
  return getToken(CPP14Parser::AndAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::XorAssign() {
  return getToken(CPP14Parser::XorAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentOperatorContext::OrAssign() {
  return getToken(CPP14Parser::OrAssign, 0);
}


size_t CPP14Parser::AssignmentOperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleAssignmentOperator;
}

void CPP14Parser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void CPP14Parser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any CPP14Parser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AssignmentOperatorContext* CPP14Parser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 88, CPP14Parser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(811);
    _la = _input->LA(1);
    if (!(((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (CPP14Parser::Assign - 95))
      | (1ULL << (CPP14Parser::PlusAssign - 95))
      | (1ULL << (CPP14Parser::MinusAssign - 95))
      | (1ULL << (CPP14Parser::StarAssign - 95))
      | (1ULL << (CPP14Parser::DivAssign - 95))
      | (1ULL << (CPP14Parser::ModAssign - 95))
      | (1ULL << (CPP14Parser::XorAssign - 95))
      | (1ULL << (CPP14Parser::AndAssign - 95))
      | (1ULL << (CPP14Parser::OrAssign - 95))
      | (1ULL << (CPP14Parser::LeftShiftAssign - 95))
      | (1ULL << (CPP14Parser::RightShiftAssign - 95)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CPP14Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::AssignmentExpressionContext *> CPP14Parser::ExpressionContext::assignmentExpression() {
  return getRuleContexts<CPP14Parser::AssignmentExpressionContext>();
}

CPP14Parser::AssignmentExpressionContext* CPP14Parser::ExpressionContext::assignmentExpression(size_t i) {
  return getRuleContext<CPP14Parser::AssignmentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::ExpressionContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::ExpressionContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::ExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleExpression;
}

void CPP14Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CPP14Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CPP14Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExpressionContext* CPP14Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, CPP14Parser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(813);
    assignmentExpression();
    setState(818);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(814);
      match(CPP14Parser::Comma);
      setState(815);
      assignmentExpression();
      setState(820);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

CPP14Parser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ConditionalExpressionContext* CPP14Parser::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<CPP14Parser::ConditionalExpressionContext>(0);
}


size_t CPP14Parser::ConstantExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleConstantExpression;
}

void CPP14Parser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void CPP14Parser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}


antlrcpp::Any CPP14Parser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 92, CPP14Parser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CPP14Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::LabeledStatementContext* CPP14Parser::StatementContext::labeledStatement() {
  return getRuleContext<CPP14Parser::LabeledStatementContext>(0);
}

CPP14Parser::ExpressionStatementContext* CPP14Parser::StatementContext::expressionStatement() {
  return getRuleContext<CPP14Parser::ExpressionStatementContext>(0);
}

CPP14Parser::CompoundStatementContext* CPP14Parser::StatementContext::compoundStatement() {
  return getRuleContext<CPP14Parser::CompoundStatementContext>(0);
}

CPP14Parser::SelectionStatementContext* CPP14Parser::StatementContext::selectionStatement() {
  return getRuleContext<CPP14Parser::SelectionStatementContext>(0);
}

CPP14Parser::IterationStatementContext* CPP14Parser::StatementContext::iterationStatement() {
  return getRuleContext<CPP14Parser::IterationStatementContext>(0);
}

CPP14Parser::JumpStatementContext* CPP14Parser::StatementContext::jumpStatement() {
  return getRuleContext<CPP14Parser::JumpStatementContext>(0);
}

CPP14Parser::TryBlockContext* CPP14Parser::StatementContext::tryBlock() {
  return getRuleContext<CPP14Parser::TryBlockContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::StatementContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::DeclarationStatementContext* CPP14Parser::StatementContext::declarationStatement() {
  return getRuleContext<CPP14Parser::DeclarationStatementContext>(0);
}


size_t CPP14Parser::StatementContext::getRuleIndex() const {
  return CPP14Parser::RuleStatement;
}

void CPP14Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CPP14Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CPP14Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::StatementContext* CPP14Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 94, CPP14Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(836);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(823);
      labeledStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(825);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
      case 1: {
        setState(824);
        attributeSpecifierSeq();
        break;
      }

      }
      setState(833);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::Literal:
        case CPP14Parser::Alignof:
        case CPP14Parser::Auto:
        case CPP14Parser::Bool:
        case CPP14Parser::Char:
        case CPP14Parser::Char16:
        case CPP14Parser::Char32:
        case CPP14Parser::Const_cast:
        case CPP14Parser::Decltype:
        case CPP14Parser::Delete:
        case CPP14Parser::Double:
        case CPP14Parser::Dynamic_cast:
        case CPP14Parser::Float:
        case CPP14Parser::Int:
        case CPP14Parser::Long:
        case CPP14Parser::New:
        case CPP14Parser::Noexcept:
        case CPP14Parser::Operator:
        case CPP14Parser::Reinterpret_cast:
        case CPP14Parser::Short:
        case CPP14Parser::Signed:
        case CPP14Parser::Sizeof:
        case CPP14Parser::Static_cast:
        case CPP14Parser::This:
        case CPP14Parser::Throw:
        case CPP14Parser::Typeid_:
        case CPP14Parser::Typename_:
        case CPP14Parser::Unsigned:
        case CPP14Parser::Void:
        case CPP14Parser::Wchar:
        case CPP14Parser::LeftParen:
        case CPP14Parser::LeftBracket:
        case CPP14Parser::Plus:
        case CPP14Parser::Minus:
        case CPP14Parser::Star:
        case CPP14Parser::And:
        case CPP14Parser::Or:
        case CPP14Parser::Tilde:
        case CPP14Parser::Not:
        case CPP14Parser::PlusPlus:
        case CPP14Parser::MinusMinus:
        case CPP14Parser::Doublecolon:
        case CPP14Parser::Semi:
        case CPP14Parser::Identifier: {
          setState(827);
          expressionStatement();
          break;
        }

        case CPP14Parser::LeftBrace: {
          setState(828);
          compoundStatement();
          break;
        }

        case CPP14Parser::If:
        case CPP14Parser::Switch: {
          setState(829);
          selectionStatement();
          break;
        }

        case CPP14Parser::Do:
        case CPP14Parser::For:
        case CPP14Parser::While: {
          setState(830);
          iterationStatement();
          break;
        }

        case CPP14Parser::Break:
        case CPP14Parser::Continue:
        case CPP14Parser::Goto:
        case CPP14Parser::Return: {
          setState(831);
          jumpStatement();
          break;
        }

        case CPP14Parser::Try: {
          setState(832);
          tryBlock();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(835);
      declarationStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

CPP14Parser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LabeledStatementContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::StatementContext* CPP14Parser::LabeledStatementContext::statement() {
  return getRuleContext<CPP14Parser::StatementContext>(0);
}

tree::TerminalNode* CPP14Parser::LabeledStatementContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::LabeledStatementContext::Case() {
  return getToken(CPP14Parser::Case, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::LabeledStatementContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::LabeledStatementContext::Default() {
  return getToken(CPP14Parser::Default, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::LabeledStatementContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::LabeledStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleLabeledStatement;
}

void CPP14Parser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void CPP14Parser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}


antlrcpp::Any CPP14Parser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LabeledStatementContext* CPP14Parser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, CPP14Parser::RuleLabeledStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(839);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(838);
      attributeSpecifierSeq();
    }
    setState(845);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Identifier: {
        setState(841);
        match(CPP14Parser::Identifier);
        break;
      }

      case CPP14Parser::Case: {
        setState(842);
        match(CPP14Parser::Case);
        setState(843);
        constantExpression();
        break;
      }

      case CPP14Parser::Default: {
        setState(844);
        match(CPP14Parser::Default);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(847);
    match(CPP14Parser::Colon);
    setState(848);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

CPP14Parser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ExpressionStatementContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::ExpressionStatementContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}


size_t CPP14Parser::ExpressionStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleExpressionStatement;
}

void CPP14Parser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void CPP14Parser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any CPP14Parser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExpressionStatementContext* CPP14Parser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, CPP14Parser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(851);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
      | (1ULL << (CPP14Parser::Typeid_ - 65))
      | (1ULL << (CPP14Parser::Typename_ - 65))
      | (1ULL << (CPP14Parser::Unsigned - 65))
      | (1ULL << (CPP14Parser::Void - 65))
      | (1ULL << (CPP14Parser::Wchar - 65))
      | (1ULL << (CPP14Parser::LeftParen - 65))
      | (1ULL << (CPP14Parser::LeftBracket - 65))
      | (1ULL << (CPP14Parser::Plus - 65))
      | (1ULL << (CPP14Parser::Minus - 65))
      | (1ULL << (CPP14Parser::Star - 65))
      | (1ULL << (CPP14Parser::And - 65))
      | (1ULL << (CPP14Parser::Or - 65))
      | (1ULL << (CPP14Parser::Tilde - 65))
      | (1ULL << (CPP14Parser::Not - 65))
      | (1ULL << (CPP14Parser::PlusPlus - 65))
      | (1ULL << (CPP14Parser::MinusMinus - 65))
      | (1ULL << (CPP14Parser::Doublecolon - 65))
      | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
      setState(850);
      expression();
    }
    setState(853);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CPP14Parser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::CompoundStatementContext::LeftBrace() {
  return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::CompoundStatementContext::RightBrace() {
  return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::StatementSeqContext* CPP14Parser::CompoundStatementContext::statementSeq() {
  return getRuleContext<CPP14Parser::StatementSeqContext>(0);
}


size_t CPP14Parser::CompoundStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleCompoundStatement;
}

void CPP14Parser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CPP14Parser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any CPP14Parser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CompoundStatementContext* CPP14Parser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 100, CPP14Parser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(855);
    match(CPP14Parser::LeftBrace);
    setState(857);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & ((1ULL << (CPP14Parser::Literal - 1))
      | (1ULL << (CPP14Parser::Alignas - 1))
      | (1ULL << (CPP14Parser::Alignof - 1))
      | (1ULL << (CPP14Parser::Asm - 1))
      | (1ULL << (CPP14Parser::Auto - 1))
      | (1ULL << (CPP14Parser::Bool - 1))
      | (1ULL << (CPP14Parser::Break - 1))
      | (1ULL << (CPP14Parser::Case - 1))
      | (1ULL << (CPP14Parser::Char - 1))
      | (1ULL << (CPP14Parser::Char16 - 1))
      | (1ULL << (CPP14Parser::Char32 - 1))
      | (1ULL << (CPP14Parser::Class - 1))
      | (1ULL << (CPP14Parser::Const - 1))
      | (1ULL << (CPP14Parser::Constexpr - 1))
      | (1ULL << (CPP14Parser::Const_cast - 1))
      | (1ULL << (CPP14Parser::Continue - 1))
      | (1ULL << (CPP14Parser::Decltype - 1))
      | (1ULL << (CPP14Parser::Default - 1))
      | (1ULL << (CPP14Parser::Delete - 1))
      | (1ULL << (CPP14Parser::Do - 1))
      | (1ULL << (CPP14Parser::Double - 1))
      | (1ULL << (CPP14Parser::Dynamic_cast - 1))
      | (1ULL << (CPP14Parser::Enum - 1))
      | (1ULL << (CPP14Parser::Explicit - 1))
      | (1ULL << (CPP14Parser::Extern - 1))
      | (1ULL << (CPP14Parser::Float - 1))
      | (1ULL << (CPP14Parser::For - 1))
      | (1ULL << (CPP14Parser::Friend - 1))
      | (1ULL << (CPP14Parser::Goto - 1))
      | (1ULL << (CPP14Parser::If - 1))
      | (1ULL << (CPP14Parser::Inline - 1))
      | (1ULL << (CPP14Parser::Int - 1))
      | (1ULL << (CPP14Parser::Long - 1))
      | (1ULL << (CPP14Parser::Mutable - 1))
      | (1ULL << (CPP14Parser::Namespace - 1))
      | (1ULL << (CPP14Parser::New - 1))
      | (1ULL << (CPP14Parser::Noexcept - 1))
      | (1ULL << (CPP14Parser::Operator - 1))
      | (1ULL << (CPP14Parser::Register - 1))
      | (1ULL << (CPP14Parser::Reinterpret_cast - 1))
      | (1ULL << (CPP14Parser::Return - 1))
      | (1ULL << (CPP14Parser::Short - 1))
      | (1ULL << (CPP14Parser::Signed - 1))
      | (1ULL << (CPP14Parser::Sizeof - 1))
      | (1ULL << (CPP14Parser::Static - 1))
      | (1ULL << (CPP14Parser::Static_assert - 1))
      | (1ULL << (CPP14Parser::Static_cast - 1))
      | (1ULL << (CPP14Parser::Struct - 1))
      | (1ULL << (CPP14Parser::Switch - 1))
      | (1ULL << (CPP14Parser::This - 1))
      | (1ULL << (CPP14Parser::Thread_local - 1)))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
      | (1ULL << (CPP14Parser::Try - 65))
      | (1ULL << (CPP14Parser::Typedef - 65))
      | (1ULL << (CPP14Parser::Typeid_ - 65))
      | (1ULL << (CPP14Parser::Typename_ - 65))
      | (1ULL << (CPP14Parser::Union - 65))
      | (1ULL << (CPP14Parser::Unsigned - 65))
      | (1ULL << (CPP14Parser::Using - 65))
      | (1ULL << (CPP14Parser::Virtual - 65))
      | (1ULL << (CPP14Parser::Void - 65))
      | (1ULL << (CPP14Parser::Volatile - 65))
      | (1ULL << (CPP14Parser::Wchar - 65))
      | (1ULL << (CPP14Parser::While - 65))
      | (1ULL << (CPP14Parser::LeftParen - 65))
      | (1ULL << (CPP14Parser::LeftBracket - 65))
      | (1ULL << (CPP14Parser::LeftBrace - 65))
      | (1ULL << (CPP14Parser::Plus - 65))
      | (1ULL << (CPP14Parser::Minus - 65))
      | (1ULL << (CPP14Parser::Star - 65))
      | (1ULL << (CPP14Parser::And - 65))
      | (1ULL << (CPP14Parser::Or - 65))
      | (1ULL << (CPP14Parser::Tilde - 65))
      | (1ULL << (CPP14Parser::Not - 65))
      | (1ULL << (CPP14Parser::AndAnd - 65))
      | (1ULL << (CPP14Parser::PlusPlus - 65))
      | (1ULL << (CPP14Parser::MinusMinus - 65))
      | (1ULL << (CPP14Parser::Doublecolon - 65))
      | (1ULL << (CPP14Parser::Semi - 65))
      | (1ULL << (CPP14Parser::Ellipsis - 65))
      | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
      setState(856);
      statementSeq();
    }
    setState(859);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementSeqContext ------------------------------------------------------------------

CPP14Parser::StatementSeqContext::StatementSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::StatementContext *> CPP14Parser::StatementSeqContext::statement() {
  return getRuleContexts<CPP14Parser::StatementContext>();
}

CPP14Parser::StatementContext* CPP14Parser::StatementSeqContext::statement(size_t i) {
  return getRuleContext<CPP14Parser::StatementContext>(i);
}


size_t CPP14Parser::StatementSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleStatementSeq;
}

void CPP14Parser::StatementSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementSeq(this);
}

void CPP14Parser::StatementSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementSeq(this);
}


antlrcpp::Any CPP14Parser::StatementSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitStatementSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::StatementSeqContext* CPP14Parser::statementSeq() {
  StatementSeqContext *_localctx = _tracker.createInstance<StatementSeqContext>(_ctx, getState());
  enterRule(_localctx, 102, CPP14Parser::RuleStatementSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(861);
      statement();
      setState(864); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & ((1ULL << (CPP14Parser::Literal - 1))
      | (1ULL << (CPP14Parser::Alignas - 1))
      | (1ULL << (CPP14Parser::Alignof - 1))
      | (1ULL << (CPP14Parser::Asm - 1))
      | (1ULL << (CPP14Parser::Auto - 1))
      | (1ULL << (CPP14Parser::Bool - 1))
      | (1ULL << (CPP14Parser::Break - 1))
      | (1ULL << (CPP14Parser::Case - 1))
      | (1ULL << (CPP14Parser::Char - 1))
      | (1ULL << (CPP14Parser::Char16 - 1))
      | (1ULL << (CPP14Parser::Char32 - 1))
      | (1ULL << (CPP14Parser::Class - 1))
      | (1ULL << (CPP14Parser::Const - 1))
      | (1ULL << (CPP14Parser::Constexpr - 1))
      | (1ULL << (CPP14Parser::Const_cast - 1))
      | (1ULL << (CPP14Parser::Continue - 1))
      | (1ULL << (CPP14Parser::Decltype - 1))
      | (1ULL << (CPP14Parser::Default - 1))
      | (1ULL << (CPP14Parser::Delete - 1))
      | (1ULL << (CPP14Parser::Do - 1))
      | (1ULL << (CPP14Parser::Double - 1))
      | (1ULL << (CPP14Parser::Dynamic_cast - 1))
      | (1ULL << (CPP14Parser::Enum - 1))
      | (1ULL << (CPP14Parser::Explicit - 1))
      | (1ULL << (CPP14Parser::Extern - 1))
      | (1ULL << (CPP14Parser::Float - 1))
      | (1ULL << (CPP14Parser::For - 1))
      | (1ULL << (CPP14Parser::Friend - 1))
      | (1ULL << (CPP14Parser::Goto - 1))
      | (1ULL << (CPP14Parser::If - 1))
      | (1ULL << (CPP14Parser::Inline - 1))
      | (1ULL << (CPP14Parser::Int - 1))
      | (1ULL << (CPP14Parser::Long - 1))
      | (1ULL << (CPP14Parser::Mutable - 1))
      | (1ULL << (CPP14Parser::Namespace - 1))
      | (1ULL << (CPP14Parser::New - 1))
      | (1ULL << (CPP14Parser::Noexcept - 1))
      | (1ULL << (CPP14Parser::Operator - 1))
      | (1ULL << (CPP14Parser::Register - 1))
      | (1ULL << (CPP14Parser::Reinterpret_cast - 1))
      | (1ULL << (CPP14Parser::Return - 1))
      | (1ULL << (CPP14Parser::Short - 1))
      | (1ULL << (CPP14Parser::Signed - 1))
      | (1ULL << (CPP14Parser::Sizeof - 1))
      | (1ULL << (CPP14Parser::Static - 1))
      | (1ULL << (CPP14Parser::Static_assert - 1))
      | (1ULL << (CPP14Parser::Static_cast - 1))
      | (1ULL << (CPP14Parser::Struct - 1))
      | (1ULL << (CPP14Parser::Switch - 1))
      | (1ULL << (CPP14Parser::This - 1))
      | (1ULL << (CPP14Parser::Thread_local - 1)))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
      | (1ULL << (CPP14Parser::Try - 65))
      | (1ULL << (CPP14Parser::Typedef - 65))
      | (1ULL << (CPP14Parser::Typeid_ - 65))
      | (1ULL << (CPP14Parser::Typename_ - 65))
      | (1ULL << (CPP14Parser::Union - 65))
      | (1ULL << (CPP14Parser::Unsigned - 65))
      | (1ULL << (CPP14Parser::Using - 65))
      | (1ULL << (CPP14Parser::Virtual - 65))
      | (1ULL << (CPP14Parser::Void - 65))
      | (1ULL << (CPP14Parser::Volatile - 65))
      | (1ULL << (CPP14Parser::Wchar - 65))
      | (1ULL << (CPP14Parser::While - 65))
      | (1ULL << (CPP14Parser::LeftParen - 65))
      | (1ULL << (CPP14Parser::LeftBracket - 65))
      | (1ULL << (CPP14Parser::LeftBrace - 65))
      | (1ULL << (CPP14Parser::Plus - 65))
      | (1ULL << (CPP14Parser::Minus - 65))
      | (1ULL << (CPP14Parser::Star - 65))
      | (1ULL << (CPP14Parser::And - 65))
      | (1ULL << (CPP14Parser::Or - 65))
      | (1ULL << (CPP14Parser::Tilde - 65))
      | (1ULL << (CPP14Parser::Not - 65))
      | (1ULL << (CPP14Parser::AndAnd - 65))
      | (1ULL << (CPP14Parser::PlusPlus - 65))
      | (1ULL << (CPP14Parser::MinusMinus - 65))
      | (1ULL << (CPP14Parser::Doublecolon - 65))
      | (1ULL << (CPP14Parser::Semi - 65))
      | (1ULL << (CPP14Parser::Ellipsis - 65))
      | (1ULL << (CPP14Parser::Identifier - 65)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

CPP14Parser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::SelectionStatementContext::If() {
  return getToken(CPP14Parser::If, 0);
}

tree::TerminalNode* CPP14Parser::SelectionStatementContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConditionContext* CPP14Parser::SelectionStatementContext::condition() {
  return getRuleContext<CPP14Parser::ConditionContext>(0);
}

tree::TerminalNode* CPP14Parser::SelectionStatementContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

std::vector<CPP14Parser::StatementContext *> CPP14Parser::SelectionStatementContext::statement() {
  return getRuleContexts<CPP14Parser::StatementContext>();
}

CPP14Parser::StatementContext* CPP14Parser::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<CPP14Parser::StatementContext>(i);
}

tree::TerminalNode* CPP14Parser::SelectionStatementContext::Else() {
  return getToken(CPP14Parser::Else, 0);
}

tree::TerminalNode* CPP14Parser::SelectionStatementContext::Switch() {
  return getToken(CPP14Parser::Switch, 0);
}


size_t CPP14Parser::SelectionStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleSelectionStatement;
}

void CPP14Parser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void CPP14Parser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}


antlrcpp::Any CPP14Parser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SelectionStatementContext* CPP14Parser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, CPP14Parser::RuleSelectionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(881);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::If: {
        enterOuterAlt(_localctx, 1);
        setState(866);
        match(CPP14Parser::If);
        setState(867);
        match(CPP14Parser::LeftParen);
        setState(868);
        condition();
        setState(869);
        match(CPP14Parser::RightParen);
        setState(870);
        statement();
        setState(873);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
        case 1: {
          setState(871);
          match(CPP14Parser::Else);
          setState(872);
          statement();
          break;
        }

        }
        break;
      }

      case CPP14Parser::Switch: {
        enterOuterAlt(_localctx, 2);
        setState(875);
        match(CPP14Parser::Switch);
        setState(876);
        match(CPP14Parser::LeftParen);
        setState(877);
        condition();
        setState(878);
        match(CPP14Parser::RightParen);
        setState(879);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CPP14Parser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionContext* CPP14Parser::ConditionContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::ConditionContext::declSpecifierSeq() {
  return getRuleContext<CPP14Parser::DeclSpecifierSeqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ConditionContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

tree::TerminalNode* CPP14Parser::ConditionContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::InitializerClauseContext* CPP14Parser::ConditionContext::initializerClause() {
  return getRuleContext<CPP14Parser::InitializerClauseContext>(0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::ConditionContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ConditionContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::ConditionContext::getRuleIndex() const {
  return CPP14Parser::RuleCondition;
}

void CPP14Parser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void CPP14Parser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any CPP14Parser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConditionContext* CPP14Parser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 106, CPP14Parser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(894);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(883);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(885);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(884);
        attributeSpecifierSeq();
      }
      setState(887);
      declSpecifierSeq();
      setState(888);
      declarator();
      setState(892);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::Assign: {
          setState(889);
          match(CPP14Parser::Assign);
          setState(890);
          initializerClause();
          break;
        }

        case CPP14Parser::LeftBrace: {
          setState(891);
          bracedInitList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

CPP14Parser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::While() {
  return getToken(CPP14Parser::While, 0);
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConditionContext* CPP14Parser::IterationStatementContext::condition() {
  return getRuleContext<CPP14Parser::ConditionContext>(0);
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::StatementContext* CPP14Parser::IterationStatementContext::statement() {
  return getRuleContext<CPP14Parser::StatementContext>(0);
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::Do() {
  return getToken(CPP14Parser::Do, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::IterationStatementContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::For() {
  return getToken(CPP14Parser::For, 0);
}

CPP14Parser::ForInitStatementContext* CPP14Parser::IterationStatementContext::forInitStatement() {
  return getRuleContext<CPP14Parser::ForInitStatementContext>(0);
}

CPP14Parser::ForRangeDeclarationContext* CPP14Parser::IterationStatementContext::forRangeDeclaration() {
  return getRuleContext<CPP14Parser::ForRangeDeclarationContext>(0);
}

tree::TerminalNode* CPP14Parser::IterationStatementContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::ForRangeInitializerContext* CPP14Parser::IterationStatementContext::forRangeInitializer() {
  return getRuleContext<CPP14Parser::ForRangeInitializerContext>(0);
}


size_t CPP14Parser::IterationStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleIterationStatement;
}

void CPP14Parser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void CPP14Parser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}


antlrcpp::Any CPP14Parser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::IterationStatementContext* CPP14Parser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, CPP14Parser::RuleIterationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(929);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::While: {
        enterOuterAlt(_localctx, 1);
        setState(896);
        match(CPP14Parser::While);
        setState(897);
        match(CPP14Parser::LeftParen);
        setState(898);
        condition();
        setState(899);
        match(CPP14Parser::RightParen);
        setState(900);
        statement();
        break;
      }

      case CPP14Parser::Do: {
        enterOuterAlt(_localctx, 2);
        setState(902);
        match(CPP14Parser::Do);
        setState(903);
        statement();
        setState(904);
        match(CPP14Parser::While);
        setState(905);
        match(CPP14Parser::LeftParen);
        setState(906);
        expression();
        setState(907);
        match(CPP14Parser::RightParen);
        setState(908);
        match(CPP14Parser::Semi);
        break;
      }

      case CPP14Parser::For: {
        enterOuterAlt(_localctx, 3);
        setState(910);
        match(CPP14Parser::For);
        setState(911);
        match(CPP14Parser::LeftParen);
        setState(924);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
        case 1: {
          setState(912);
          forInitStatement();
          setState(914);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 1) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 1)) & ((1ULL << (CPP14Parser::Literal - 1))
            | (1ULL << (CPP14Parser::Alignas - 1))
            | (1ULL << (CPP14Parser::Alignof - 1))
            | (1ULL << (CPP14Parser::Auto - 1))
            | (1ULL << (CPP14Parser::Bool - 1))
            | (1ULL << (CPP14Parser::Char - 1))
            | (1ULL << (CPP14Parser::Char16 - 1))
            | (1ULL << (CPP14Parser::Char32 - 1))
            | (1ULL << (CPP14Parser::Class - 1))
            | (1ULL << (CPP14Parser::Const - 1))
            | (1ULL << (CPP14Parser::Constexpr - 1))
            | (1ULL << (CPP14Parser::Const_cast - 1))
            | (1ULL << (CPP14Parser::Decltype - 1))
            | (1ULL << (CPP14Parser::Delete - 1))
            | (1ULL << (CPP14Parser::Double - 1))
            | (1ULL << (CPP14Parser::Dynamic_cast - 1))
            | (1ULL << (CPP14Parser::Enum - 1))
            | (1ULL << (CPP14Parser::Explicit - 1))
            | (1ULL << (CPP14Parser::Extern - 1))
            | (1ULL << (CPP14Parser::Float - 1))
            | (1ULL << (CPP14Parser::Friend - 1))
            | (1ULL << (CPP14Parser::Inline - 1))
            | (1ULL << (CPP14Parser::Int - 1))
            | (1ULL << (CPP14Parser::Long - 1))
            | (1ULL << (CPP14Parser::Mutable - 1))
            | (1ULL << (CPP14Parser::New - 1))
            | (1ULL << (CPP14Parser::Noexcept - 1))
            | (1ULL << (CPP14Parser::Operator - 1))
            | (1ULL << (CPP14Parser::Register - 1))
            | (1ULL << (CPP14Parser::Reinterpret_cast - 1))
            | (1ULL << (CPP14Parser::Short - 1))
            | (1ULL << (CPP14Parser::Signed - 1))
            | (1ULL << (CPP14Parser::Sizeof - 1))
            | (1ULL << (CPP14Parser::Static - 1))
            | (1ULL << (CPP14Parser::Static_cast - 1))
            | (1ULL << (CPP14Parser::Struct - 1))
            | (1ULL << (CPP14Parser::This - 1))
            | (1ULL << (CPP14Parser::Thread_local - 1)))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
            | (1ULL << (CPP14Parser::Typedef - 65))
            | (1ULL << (CPP14Parser::Typeid_ - 65))
            | (1ULL << (CPP14Parser::Typename_ - 65))
            | (1ULL << (CPP14Parser::Union - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Virtual - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Volatile - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
            setState(913);
            condition();
          }
          setState(916);
          match(CPP14Parser::Semi);
          setState(918);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
            | (1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
            | (1ULL << (CPP14Parser::Typeid_ - 65))
            | (1ULL << (CPP14Parser::Typename_ - 65))
            | (1ULL << (CPP14Parser::Unsigned - 65))
            | (1ULL << (CPP14Parser::Void - 65))
            | (1ULL << (CPP14Parser::Wchar - 65))
            | (1ULL << (CPP14Parser::LeftParen - 65))
            | (1ULL << (CPP14Parser::LeftBracket - 65))
            | (1ULL << (CPP14Parser::Plus - 65))
            | (1ULL << (CPP14Parser::Minus - 65))
            | (1ULL << (CPP14Parser::Star - 65))
            | (1ULL << (CPP14Parser::And - 65))
            | (1ULL << (CPP14Parser::Or - 65))
            | (1ULL << (CPP14Parser::Tilde - 65))
            | (1ULL << (CPP14Parser::Not - 65))
            | (1ULL << (CPP14Parser::PlusPlus - 65))
            | (1ULL << (CPP14Parser::MinusMinus - 65))
            | (1ULL << (CPP14Parser::Doublecolon - 65))
            | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
            setState(917);
            expression();
          }
          break;
        }

        case 2: {
          setState(920);
          forRangeDeclaration();
          setState(921);
          match(CPP14Parser::Colon);
          setState(922);
          forRangeInitializer();
          break;
        }

        }
        setState(926);
        match(CPP14Parser::RightParen);
        setState(927);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitStatementContext ------------------------------------------------------------------

CPP14Parser::ForInitStatementContext::ForInitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionStatementContext* CPP14Parser::ForInitStatementContext::expressionStatement() {
  return getRuleContext<CPP14Parser::ExpressionStatementContext>(0);
}

CPP14Parser::SimpleDeclarationContext* CPP14Parser::ForInitStatementContext::simpleDeclaration() {
  return getRuleContext<CPP14Parser::SimpleDeclarationContext>(0);
}


size_t CPP14Parser::ForInitStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleForInitStatement;
}

void CPP14Parser::ForInitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInitStatement(this);
}

void CPP14Parser::ForInitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInitStatement(this);
}


antlrcpp::Any CPP14Parser::ForInitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitForInitStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ForInitStatementContext* CPP14Parser::forInitStatement() {
  ForInitStatementContext *_localctx = _tracker.createInstance<ForInitStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, CPP14Parser::RuleForInitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(933);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(931);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(932);
      simpleDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeDeclarationContext ------------------------------------------------------------------

CPP14Parser::ForRangeDeclarationContext::ForRangeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::ForRangeDeclarationContext::declSpecifierSeq() {
  return getRuleContext<CPP14Parser::DeclSpecifierSeqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ForRangeDeclarationContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ForRangeDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::ForRangeDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleForRangeDeclaration;
}

void CPP14Parser::ForRangeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForRangeDeclaration(this);
}

void CPP14Parser::ForRangeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForRangeDeclaration(this);
}


antlrcpp::Any CPP14Parser::ForRangeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitForRangeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ForRangeDeclarationContext* CPP14Parser::forRangeDeclaration() {
  ForRangeDeclarationContext *_localctx = _tracker.createInstance<ForRangeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 112, CPP14Parser::RuleForRangeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(936);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(935);
      attributeSpecifierSeq();
    }
    setState(938);
    declSpecifierSeq();
    setState(939);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeInitializerContext ------------------------------------------------------------------

CPP14Parser::ForRangeInitializerContext::ForRangeInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ExpressionContext* CPP14Parser::ForRangeInitializerContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::ForRangeInitializerContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}


size_t CPP14Parser::ForRangeInitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleForRangeInitializer;
}

void CPP14Parser::ForRangeInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForRangeInitializer(this);
}

void CPP14Parser::ForRangeInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForRangeInitializer(this);
}


antlrcpp::Any CPP14Parser::ForRangeInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitForRangeInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ForRangeInitializerContext* CPP14Parser::forRangeInitializer() {
  ForRangeInitializerContext *_localctx = _tracker.createInstance<ForRangeInitializerContext>(_ctx, getState());
  enterRule(_localctx, 114, CPP14Parser::RuleForRangeInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(943);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Literal:
      case CPP14Parser::Alignof:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Const_cast:
      case CPP14Parser::Decltype:
      case CPP14Parser::Delete:
      case CPP14Parser::Double:
      case CPP14Parser::Dynamic_cast:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::New:
      case CPP14Parser::Noexcept:
      case CPP14Parser::Operator:
      case CPP14Parser::Reinterpret_cast:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Sizeof:
      case CPP14Parser::Static_cast:
      case CPP14Parser::This:
      case CPP14Parser::Throw:
      case CPP14Parser::Typeid_:
      case CPP14Parser::Typename_:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Plus:
      case CPP14Parser::Minus:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Or:
      case CPP14Parser::Tilde:
      case CPP14Parser::Not:
      case CPP14Parser::PlusPlus:
      case CPP14Parser::MinusMinus:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(941);
        expression();
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(942);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

CPP14Parser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::JumpStatementContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::JumpStatementContext::Break() {
  return getToken(CPP14Parser::Break, 0);
}

tree::TerminalNode* CPP14Parser::JumpStatementContext::Continue() {
  return getToken(CPP14Parser::Continue, 0);
}

tree::TerminalNode* CPP14Parser::JumpStatementContext::Return() {
  return getToken(CPP14Parser::Return, 0);
}

tree::TerminalNode* CPP14Parser::JumpStatementContext::Goto() {
  return getToken(CPP14Parser::Goto, 0);
}

tree::TerminalNode* CPP14Parser::JumpStatementContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::JumpStatementContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::JumpStatementContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}


size_t CPP14Parser::JumpStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleJumpStatement;
}

void CPP14Parser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void CPP14Parser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}


antlrcpp::Any CPP14Parser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::JumpStatementContext* CPP14Parser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, CPP14Parser::RuleJumpStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(954);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Break: {
        setState(945);
        match(CPP14Parser::Break);
        break;
      }

      case CPP14Parser::Continue: {
        setState(946);
        match(CPP14Parser::Continue);
        break;
      }

      case CPP14Parser::Return: {
        setState(947);
        match(CPP14Parser::Return);
        setState(950);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CPP14Parser::Literal:
          case CPP14Parser::Alignof:
          case CPP14Parser::Auto:
          case CPP14Parser::Bool:
          case CPP14Parser::Char:
          case CPP14Parser::Char16:
          case CPP14Parser::Char32:
          case CPP14Parser::Const_cast:
          case CPP14Parser::Decltype:
          case CPP14Parser::Delete:
          case CPP14Parser::Double:
          case CPP14Parser::Dynamic_cast:
          case CPP14Parser::Float:
          case CPP14Parser::Int:
          case CPP14Parser::Long:
          case CPP14Parser::New:
          case CPP14Parser::Noexcept:
          case CPP14Parser::Operator:
          case CPP14Parser::Reinterpret_cast:
          case CPP14Parser::Short:
          case CPP14Parser::Signed:
          case CPP14Parser::Sizeof:
          case CPP14Parser::Static_cast:
          case CPP14Parser::This:
          case CPP14Parser::Throw:
          case CPP14Parser::Typeid_:
          case CPP14Parser::Typename_:
          case CPP14Parser::Unsigned:
          case CPP14Parser::Void:
          case CPP14Parser::Wchar:
          case CPP14Parser::LeftParen:
          case CPP14Parser::LeftBracket:
          case CPP14Parser::Plus:
          case CPP14Parser::Minus:
          case CPP14Parser::Star:
          case CPP14Parser::And:
          case CPP14Parser::Or:
          case CPP14Parser::Tilde:
          case CPP14Parser::Not:
          case CPP14Parser::PlusPlus:
          case CPP14Parser::MinusMinus:
          case CPP14Parser::Doublecolon:
          case CPP14Parser::Identifier: {
            setState(948);
            expression();
            break;
          }

          case CPP14Parser::LeftBrace: {
            setState(949);
            bracedInitList();
            break;
          }

          case CPP14Parser::Semi: {
            break;
          }

        default:
          break;
        }
        break;
      }

      case CPP14Parser::Goto: {
        setState(952);
        match(CPP14Parser::Goto);
        setState(953);
        match(CPP14Parser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(956);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

CPP14Parser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BlockDeclarationContext* CPP14Parser::DeclarationStatementContext::blockDeclaration() {
  return getRuleContext<CPP14Parser::BlockDeclarationContext>(0);
}


size_t CPP14Parser::DeclarationStatementContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclarationStatement;
}

void CPP14Parser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}

void CPP14Parser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}


antlrcpp::Any CPP14Parser::DeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclarationStatementContext* CPP14Parser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, CPP14Parser::RuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(958);
    blockDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

CPP14Parser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::DeclarationContext *> CPP14Parser::DeclarationseqContext::declaration() {
  return getRuleContexts<CPP14Parser::DeclarationContext>();
}

CPP14Parser::DeclarationContext* CPP14Parser::DeclarationseqContext::declaration(size_t i) {
  return getRuleContext<CPP14Parser::DeclarationContext>(i);
}


size_t CPP14Parser::DeclarationseqContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclarationseq;
}

void CPP14Parser::DeclarationseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationseq(this);
}

void CPP14Parser::DeclarationseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationseq(this);
}


antlrcpp::Any CPP14Parser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::declarationseq() {
  DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, getState());
  enterRule(_localctx, 120, CPP14Parser::RuleDeclarationseq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(961); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(960);
      declaration();
      setState(963); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 4) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
      | (1ULL << (CPP14Parser::Asm - 4))
      | (1ULL << (CPP14Parser::Auto - 4))
      | (1ULL << (CPP14Parser::Bool - 4))
      | (1ULL << (CPP14Parser::Char - 4))
      | (1ULL << (CPP14Parser::Char16 - 4))
      | (1ULL << (CPP14Parser::Char32 - 4))
      | (1ULL << (CPP14Parser::Class - 4))
      | (1ULL << (CPP14Parser::Const - 4))
      | (1ULL << (CPP14Parser::Constexpr - 4))
      | (1ULL << (CPP14Parser::Decltype - 4))
      | (1ULL << (CPP14Parser::Double - 4))
      | (1ULL << (CPP14Parser::Enum - 4))
      | (1ULL << (CPP14Parser::Explicit - 4))
      | (1ULL << (CPP14Parser::Extern - 4))
      | (1ULL << (CPP14Parser::Float - 4))
      | (1ULL << (CPP14Parser::Friend - 4))
      | (1ULL << (CPP14Parser::Inline - 4))
      | (1ULL << (CPP14Parser::Int - 4))
      | (1ULL << (CPP14Parser::Long - 4))
      | (1ULL << (CPP14Parser::Mutable - 4))
      | (1ULL << (CPP14Parser::Namespace - 4))
      | (1ULL << (CPP14Parser::Operator - 4))
      | (1ULL << (CPP14Parser::Register - 4))
      | (1ULL << (CPP14Parser::Short - 4))
      | (1ULL << (CPP14Parser::Signed - 4))
      | (1ULL << (CPP14Parser::Static - 4))
      | (1ULL << (CPP14Parser::Static_assert - 4))
      | (1ULL << (CPP14Parser::Struct - 4))
      | (1ULL << (CPP14Parser::Template - 4))
      | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
      | (1ULL << (CPP14Parser::Typename_ - 68))
      | (1ULL << (CPP14Parser::Union - 68))
      | (1ULL << (CPP14Parser::Unsigned - 68))
      | (1ULL << (CPP14Parser::Using - 68))
      | (1ULL << (CPP14Parser::Virtual - 68))
      | (1ULL << (CPP14Parser::Void - 68))
      | (1ULL << (CPP14Parser::Volatile - 68))
      | (1ULL << (CPP14Parser::Wchar - 68))
      | (1ULL << (CPP14Parser::LeftParen - 68))
      | (1ULL << (CPP14Parser::LeftBracket - 68))
      | (1ULL << (CPP14Parser::Star - 68))
      | (1ULL << (CPP14Parser::And - 68))
      | (1ULL << (CPP14Parser::Tilde - 68))
      | (1ULL << (CPP14Parser::AndAnd - 68))
      | (1ULL << (CPP14Parser::Doublecolon - 68))
      | (1ULL << (CPP14Parser::Semi - 68))
      | (1ULL << (CPP14Parser::Ellipsis - 68))
      | (1ULL << (CPP14Parser::Identifier - 68)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CPP14Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BlockDeclarationContext* CPP14Parser::DeclarationContext::blockDeclaration() {
  return getRuleContext<CPP14Parser::BlockDeclarationContext>(0);
}

CPP14Parser::FunctionDefinitionContext* CPP14Parser::DeclarationContext::functionDefinition() {
  return getRuleContext<CPP14Parser::FunctionDefinitionContext>(0);
}

CPP14Parser::TemplateDeclarationContext* CPP14Parser::DeclarationContext::templateDeclaration() {
  return getRuleContext<CPP14Parser::TemplateDeclarationContext>(0);
}

CPP14Parser::ExplicitInstantiationContext* CPP14Parser::DeclarationContext::explicitInstantiation() {
  return getRuleContext<CPP14Parser::ExplicitInstantiationContext>(0);
}

CPP14Parser::ExplicitSpecializationContext* CPP14Parser::DeclarationContext::explicitSpecialization() {
  return getRuleContext<CPP14Parser::ExplicitSpecializationContext>(0);
}

CPP14Parser::LinkageSpecificationContext* CPP14Parser::DeclarationContext::linkageSpecification() {
  return getRuleContext<CPP14Parser::LinkageSpecificationContext>(0);
}

CPP14Parser::NamespaceDefinitionContext* CPP14Parser::DeclarationContext::namespaceDefinition() {
  return getRuleContext<CPP14Parser::NamespaceDefinitionContext>(0);
}

CPP14Parser::EmptyDeclarationContext* CPP14Parser::DeclarationContext::emptyDeclaration() {
  return getRuleContext<CPP14Parser::EmptyDeclarationContext>(0);
}

CPP14Parser::AttributeDeclarationContext* CPP14Parser::DeclarationContext::attributeDeclaration() {
  return getRuleContext<CPP14Parser::AttributeDeclarationContext>(0);
}


size_t CPP14Parser::DeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclaration;
}

void CPP14Parser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CPP14Parser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CPP14Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclarationContext* CPP14Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 122, CPP14Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(974);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(965);
      blockDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(966);
      functionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(967);
      templateDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(968);
      explicitInstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(969);
      explicitSpecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(970);
      linkageSpecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(971);
      namespaceDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(972);
      emptyDeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(973);
      attributeDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockDeclarationContext ------------------------------------------------------------------

CPP14Parser::BlockDeclarationContext::BlockDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpleDeclarationContext* CPP14Parser::BlockDeclarationContext::simpleDeclaration() {
  return getRuleContext<CPP14Parser::SimpleDeclarationContext>(0);
}

CPP14Parser::AsmDefinitionContext* CPP14Parser::BlockDeclarationContext::asmDefinition() {
  return getRuleContext<CPP14Parser::AsmDefinitionContext>(0);
}

CPP14Parser::NamespaceAliasDefinitionContext* CPP14Parser::BlockDeclarationContext::namespaceAliasDefinition() {
  return getRuleContext<CPP14Parser::NamespaceAliasDefinitionContext>(0);
}

CPP14Parser::UsingDeclarationContext* CPP14Parser::BlockDeclarationContext::usingDeclaration() {
  return getRuleContext<CPP14Parser::UsingDeclarationContext>(0);
}

CPP14Parser::UsingDirectiveContext* CPP14Parser::BlockDeclarationContext::usingDirective() {
  return getRuleContext<CPP14Parser::UsingDirectiveContext>(0);
}

CPP14Parser::StaticAssertDeclarationContext* CPP14Parser::BlockDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CPP14Parser::StaticAssertDeclarationContext>(0);
}

CPP14Parser::AliasDeclarationContext* CPP14Parser::BlockDeclarationContext::aliasDeclaration() {
  return getRuleContext<CPP14Parser::AliasDeclarationContext>(0);
}

CPP14Parser::OpaqueEnumDeclarationContext* CPP14Parser::BlockDeclarationContext::opaqueEnumDeclaration() {
  return getRuleContext<CPP14Parser::OpaqueEnumDeclarationContext>(0);
}


size_t CPP14Parser::BlockDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleBlockDeclaration;
}

void CPP14Parser::BlockDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockDeclaration(this);
}

void CPP14Parser::BlockDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockDeclaration(this);
}


antlrcpp::Any CPP14Parser::BlockDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBlockDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BlockDeclarationContext* CPP14Parser::blockDeclaration() {
  BlockDeclarationContext *_localctx = _tracker.createInstance<BlockDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 124, CPP14Parser::RuleBlockDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(984);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(976);
      simpleDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(977);
      asmDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(978);
      namespaceAliasDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(979);
      usingDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(980);
      usingDirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(981);
      staticAssertDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(982);
      aliasDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(983);
      opaqueEnumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasDeclarationContext ------------------------------------------------------------------

CPP14Parser::AliasDeclarationContext::AliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AliasDeclarationContext::Using() {
  return getToken(CPP14Parser::Using, 0);
}

tree::TerminalNode* CPP14Parser::AliasDeclarationContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::AliasDeclarationContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::AliasDeclarationContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::AliasDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::AliasDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::AliasDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleAliasDeclaration;
}

void CPP14Parser::AliasDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasDeclaration(this);
}

void CPP14Parser::AliasDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasDeclaration(this);
}


antlrcpp::Any CPP14Parser::AliasDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAliasDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AliasDeclarationContext* CPP14Parser::aliasDeclaration() {
  AliasDeclarationContext *_localctx = _tracker.createInstance<AliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 126, CPP14Parser::RuleAliasDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(986);
    match(CPP14Parser::Using);
    setState(987);
    match(CPP14Parser::Identifier);
    setState(989);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(988);
      attributeSpecifierSeq();
    }
    setState(991);
    match(CPP14Parser::Assign);
    setState(992);
    theTypeId();
    setState(993);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleDeclarationContext ------------------------------------------------------------------

CPP14Parser::SimpleDeclarationContext::SimpleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::SimpleDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::SimpleDeclarationContext::declSpecifierSeq() {
  return getRuleContext<CPP14Parser::DeclSpecifierSeqContext>(0);
}

CPP14Parser::InitDeclaratorListContext* CPP14Parser::SimpleDeclarationContext::initDeclaratorList() {
  return getRuleContext<CPP14Parser::InitDeclaratorListContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::SimpleDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::SimpleDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpleDeclaration;
}

void CPP14Parser::SimpleDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleDeclaration(this);
}

void CPP14Parser::SimpleDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleDeclaration(this);
}


antlrcpp::Any CPP14Parser::SimpleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitSimpleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpleDeclarationContext* CPP14Parser::simpleDeclaration() {
  SimpleDeclarationContext *_localctx = _tracker.createInstance<SimpleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, CPP14Parser::RuleSimpleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1009);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Constexpr:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Explicit:
      case CPP14Parser::Extern:
      case CPP14Parser::Float:
      case CPP14Parser::Friend:
      case CPP14Parser::Inline:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Mutable:
      case CPP14Parser::Operator:
      case CPP14Parser::Register:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Static:
      case CPP14Parser::Struct:
      case CPP14Parser::Thread_local:
      case CPP14Parser::Typedef:
      case CPP14Parser::Typename_:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Virtual:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Tilde:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Semi:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(996);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
        case 1: {
          setState(995);
          declSpecifierSeq();
          break;
        }

        }
        setState(999);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Decltype

        || _la == CPP14Parser::Operator || ((((_la - 79) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 79)) & ((1ULL << (CPP14Parser::LeftParen - 79))
          | (1ULL << (CPP14Parser::Star - 79))
          | (1ULL << (CPP14Parser::And - 79))
          | (1ULL << (CPP14Parser::Tilde - 79))
          | (1ULL << (CPP14Parser::AndAnd - 79))
          | (1ULL << (CPP14Parser::Doublecolon - 79))
          | (1ULL << (CPP14Parser::Ellipsis - 79))
          | (1ULL << (CPP14Parser::Identifier - 79)))) != 0)) {
          setState(998);
          initDeclaratorList();
        }
        setState(1001);
        match(CPP14Parser::Semi);
        break;
      }

      case CPP14Parser::Alignas:
      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1002);
        attributeSpecifierSeq();
        setState(1004);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
        case 1: {
          setState(1003);
          declSpecifierSeq();
          break;
        }

        }
        setState(1006);
        initDeclaratorList();
        setState(1007);
        match(CPP14Parser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticAssertDeclarationContext ------------------------------------------------------------------

CPP14Parser::StaticAssertDeclarationContext::StaticAssertDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::StaticAssertDeclarationContext::Static_assert() {
  return getToken(CPP14Parser::Static_assert, 0);
}

tree::TerminalNode* CPP14Parser::StaticAssertDeclarationContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::StaticAssertDeclarationContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::StaticAssertDeclarationContext::Comma() {
  return getToken(CPP14Parser::Comma, 0);
}

tree::TerminalNode* CPP14Parser::StaticAssertDeclarationContext::StringLiteral() {
  return getToken(CPP14Parser::StringLiteral, 0);
}

tree::TerminalNode* CPP14Parser::StaticAssertDeclarationContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::StaticAssertDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::StaticAssertDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleStaticAssertDeclaration;
}

void CPP14Parser::StaticAssertDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticAssertDeclaration(this);
}

void CPP14Parser::StaticAssertDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticAssertDeclaration(this);
}


antlrcpp::Any CPP14Parser::StaticAssertDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitStaticAssertDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::StaticAssertDeclarationContext* CPP14Parser::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, CPP14Parser::RuleStaticAssertDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1011);
    match(CPP14Parser::Static_assert);
    setState(1012);
    match(CPP14Parser::LeftParen);
    setState(1013);
    constantExpression();
    setState(1014);
    match(CPP14Parser::Comma);
    setState(1015);
    match(CPP14Parser::StringLiteral);
    setState(1016);
    match(CPP14Parser::RightParen);
    setState(1017);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyDeclarationContext ------------------------------------------------------------------

CPP14Parser::EmptyDeclarationContext::EmptyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EmptyDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::EmptyDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleEmptyDeclaration;
}

void CPP14Parser::EmptyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyDeclaration(this);
}

void CPP14Parser::EmptyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyDeclaration(this);
}


antlrcpp::Any CPP14Parser::EmptyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEmptyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EmptyDeclarationContext* CPP14Parser::emptyDeclaration() {
  EmptyDeclarationContext *_localctx = _tracker.createInstance<EmptyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 132, CPP14Parser::RuleEmptyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1019);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeDeclarationContext ------------------------------------------------------------------

CPP14Parser::AttributeDeclarationContext::AttributeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::AttributeDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* CPP14Parser::AttributeDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::AttributeDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeDeclaration;
}

void CPP14Parser::AttributeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeDeclaration(this);
}

void CPP14Parser::AttributeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeDeclaration(this);
}


antlrcpp::Any CPP14Parser::AttributeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttributeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeDeclarationContext* CPP14Parser::attributeDeclaration() {
  AttributeDeclarationContext *_localctx = _tracker.createInstance<AttributeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, CPP14Parser::RuleAttributeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1021);
    attributeSpecifierSeq();
    setState(1022);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclSpecifierContext ------------------------------------------------------------------

CPP14Parser::DeclSpecifierContext::DeclSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::StorageClassSpecifierContext* CPP14Parser::DeclSpecifierContext::storageClassSpecifier() {
  return getRuleContext<CPP14Parser::StorageClassSpecifierContext>(0);
}

CPP14Parser::TypeSpecifierContext* CPP14Parser::DeclSpecifierContext::typeSpecifier() {
  return getRuleContext<CPP14Parser::TypeSpecifierContext>(0);
}

CPP14Parser::FunctionSpecifierContext* CPP14Parser::DeclSpecifierContext::functionSpecifier() {
  return getRuleContext<CPP14Parser::FunctionSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::DeclSpecifierContext::Friend() {
  return getToken(CPP14Parser::Friend, 0);
}

tree::TerminalNode* CPP14Parser::DeclSpecifierContext::Typedef() {
  return getToken(CPP14Parser::Typedef, 0);
}

tree::TerminalNode* CPP14Parser::DeclSpecifierContext::Constexpr() {
  return getToken(CPP14Parser::Constexpr, 0);
}


size_t CPP14Parser::DeclSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclSpecifier;
}

void CPP14Parser::DeclSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclSpecifier(this);
}

void CPP14Parser::DeclSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclSpecifier(this);
}


antlrcpp::Any CPP14Parser::DeclSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclSpecifierContext* CPP14Parser::declSpecifier() {
  DeclSpecifierContext *_localctx = _tracker.createInstance<DeclSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 136, CPP14Parser::RuleDeclSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1030);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Extern:
      case CPP14Parser::Mutable:
      case CPP14Parser::Register:
      case CPP14Parser::Static:
      case CPP14Parser::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1024);
        storageClassSpecifier();
        break;
      }

      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Struct:
      case CPP14Parser::Typename_:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1025);
        typeSpecifier();
        break;
      }

      case CPP14Parser::Explicit:
      case CPP14Parser::Inline:
      case CPP14Parser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1026);
        functionSpecifier();
        break;
      }

      case CPP14Parser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1027);
        match(CPP14Parser::Friend);
        break;
      }

      case CPP14Parser::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1028);
        match(CPP14Parser::Typedef);
        break;
      }

      case CPP14Parser::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1029);
        match(CPP14Parser::Constexpr);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclSpecifierSeqContext ------------------------------------------------------------------

CPP14Parser::DeclSpecifierSeqContext::DeclSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::DeclSpecifierContext *> CPP14Parser::DeclSpecifierSeqContext::declSpecifier() {
  return getRuleContexts<CPP14Parser::DeclSpecifierContext>();
}

CPP14Parser::DeclSpecifierContext* CPP14Parser::DeclSpecifierSeqContext::declSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::DeclSpecifierContext>(i);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::DeclSpecifierSeqContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::DeclSpecifierSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclSpecifierSeq;
}

void CPP14Parser::DeclSpecifierSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclSpecifierSeq(this);
}

void CPP14Parser::DeclSpecifierSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclSpecifierSeq(this);
}


antlrcpp::Any CPP14Parser::DeclSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclSpecifierSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::declSpecifierSeq() {
  DeclSpecifierSeqContext *_localctx = _tracker.createInstance<DeclSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 138, CPP14Parser::RuleDeclSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1033); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1032);
              declSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1035); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1038);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      setState(1037);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

CPP14Parser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::StorageClassSpecifierContext::Register() {
  return getToken(CPP14Parser::Register, 0);
}

tree::TerminalNode* CPP14Parser::StorageClassSpecifierContext::Static() {
  return getToken(CPP14Parser::Static, 0);
}

tree::TerminalNode* CPP14Parser::StorageClassSpecifierContext::Thread_local() {
  return getToken(CPP14Parser::Thread_local, 0);
}

tree::TerminalNode* CPP14Parser::StorageClassSpecifierContext::Extern() {
  return getToken(CPP14Parser::Extern, 0);
}

tree::TerminalNode* CPP14Parser::StorageClassSpecifierContext::Mutable() {
  return getToken(CPP14Parser::Mutable, 0);
}


size_t CPP14Parser::StorageClassSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleStorageClassSpecifier;
}

void CPP14Parser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void CPP14Parser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}


antlrcpp::Any CPP14Parser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::StorageClassSpecifierContext* CPP14Parser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 140, CPP14Parser::RuleStorageClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1040);
    _la = _input->LA(1);
    if (!(((((_la - 30) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 30)) & ((1ULL << (CPP14Parser::Extern - 30))
      | (1ULL << (CPP14Parser::Mutable - 30))
      | (1ULL << (CPP14Parser::Register - 30))
      | (1ULL << (CPP14Parser::Static - 30))
      | (1ULL << (CPP14Parser::Thread_local - 30)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSpecifierContext ------------------------------------------------------------------

CPP14Parser::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::FunctionSpecifierContext::Inline() {
  return getToken(CPP14Parser::Inline, 0);
}

tree::TerminalNode* CPP14Parser::FunctionSpecifierContext::Virtual() {
  return getToken(CPP14Parser::Virtual, 0);
}

tree::TerminalNode* CPP14Parser::FunctionSpecifierContext::Explicit() {
  return getToken(CPP14Parser::Explicit, 0);
}


size_t CPP14Parser::FunctionSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctionSpecifier;
}

void CPP14Parser::FunctionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSpecifier(this);
}

void CPP14Parser::FunctionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSpecifier(this);
}


antlrcpp::Any CPP14Parser::FunctionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitFunctionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctionSpecifierContext* CPP14Parser::functionSpecifier() {
  FunctionSpecifierContext *_localctx = _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 142, CPP14Parser::RuleFunctionSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1042);
    _la = _input->LA(1);
    if (!(((((_la - 28) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 28)) & ((1ULL << (CPP14Parser::Explicit - 28))
      | (1ULL << (CPP14Parser::Inline - 28))
      | (1ULL << (CPP14Parser::Virtual - 28)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefNameContext ------------------------------------------------------------------

CPP14Parser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypedefNameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TypedefNameContext::getRuleIndex() const {
  return CPP14Parser::RuleTypedefName;
}

void CPP14Parser::TypedefNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefName(this);
}

void CPP14Parser::TypedefNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefName(this);
}


antlrcpp::Any CPP14Parser::TypedefNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypedefName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypedefNameContext* CPP14Parser::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 144, CPP14Parser::RuleTypedefName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1044);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CPP14Parser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TrailingTypeSpecifierContext* CPP14Parser::TypeSpecifierContext::trailingTypeSpecifier() {
  return getRuleContext<CPP14Parser::TrailingTypeSpecifierContext>(0);
}

CPP14Parser::ClassSpecifierContext* CPP14Parser::TypeSpecifierContext::classSpecifier() {
  return getRuleContext<CPP14Parser::ClassSpecifierContext>(0);
}

CPP14Parser::EnumSpecifierContext* CPP14Parser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CPP14Parser::EnumSpecifierContext>(0);
}


size_t CPP14Parser::TypeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeSpecifier;
}

void CPP14Parser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void CPP14Parser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


antlrcpp::Any CPP14Parser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeSpecifierContext* CPP14Parser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 146, CPP14Parser::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1049);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1046);
      trailingTypeSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1047);
      classSpecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1048);
      enumSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingTypeSpecifierContext ------------------------------------------------------------------

CPP14Parser::TrailingTypeSpecifierContext::TrailingTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpleTypeSpecifierContext* CPP14Parser::TrailingTypeSpecifierContext::simpleTypeSpecifier() {
  return getRuleContext<CPP14Parser::SimpleTypeSpecifierContext>(0);
}

CPP14Parser::ElaboratedTypeSpecifierContext* CPP14Parser::TrailingTypeSpecifierContext::elaboratedTypeSpecifier() {
  return getRuleContext<CPP14Parser::ElaboratedTypeSpecifierContext>(0);
}

CPP14Parser::TypeNameSpecifierContext* CPP14Parser::TrailingTypeSpecifierContext::typeNameSpecifier() {
  return getRuleContext<CPP14Parser::TypeNameSpecifierContext>(0);
}

CPP14Parser::CvQualifierContext* CPP14Parser::TrailingTypeSpecifierContext::cvQualifier() {
  return getRuleContext<CPP14Parser::CvQualifierContext>(0);
}


size_t CPP14Parser::TrailingTypeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleTrailingTypeSpecifier;
}

void CPP14Parser::TrailingTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingTypeSpecifier(this);
}

void CPP14Parser::TrailingTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingTypeSpecifier(this);
}


antlrcpp::Any CPP14Parser::TrailingTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTrailingTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TrailingTypeSpecifierContext* CPP14Parser::trailingTypeSpecifier() {
  TrailingTypeSpecifierContext *_localctx = _tracker.createInstance<TrailingTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 148, CPP14Parser::RuleTrailingTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1055);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Wchar:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1051);
        simpleTypeSpecifier();
        break;
      }

      case CPP14Parser::Class:
      case CPP14Parser::Enum:
      case CPP14Parser::Struct: {
        enterOuterAlt(_localctx, 2);
        setState(1052);
        elaboratedTypeSpecifier();
        break;
      }

      case CPP14Parser::Typename_: {
        enterOuterAlt(_localctx, 3);
        setState(1053);
        typeNameSpecifier();
        break;
      }

      case CPP14Parser::Const:
      case CPP14Parser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1054);
        cvQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierSeqContext ------------------------------------------------------------------

CPP14Parser::TypeSpecifierSeqContext::TypeSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::TypeSpecifierContext *> CPP14Parser::TypeSpecifierSeqContext::typeSpecifier() {
  return getRuleContexts<CPP14Parser::TypeSpecifierContext>();
}

CPP14Parser::TypeSpecifierContext* CPP14Parser::TypeSpecifierSeqContext::typeSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::TypeSpecifierContext>(i);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::TypeSpecifierSeqContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::TypeSpecifierSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeSpecifierSeq;
}

void CPP14Parser::TypeSpecifierSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifierSeq(this);
}

void CPP14Parser::TypeSpecifierSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifierSeq(this);
}


antlrcpp::Any CPP14Parser::TypeSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeSpecifierSeqContext* CPP14Parser::typeSpecifierSeq() {
  TypeSpecifierSeqContext *_localctx = _tracker.createInstance<TypeSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 150, CPP14Parser::RuleTypeSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1058); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1057);
              typeSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1060); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1063);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      setState(1062);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingTypeSpecifierSeqContext ------------------------------------------------------------------

CPP14Parser::TrailingTypeSpecifierSeqContext::TrailingTypeSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::TrailingTypeSpecifierContext *> CPP14Parser::TrailingTypeSpecifierSeqContext::trailingTypeSpecifier() {
  return getRuleContexts<CPP14Parser::TrailingTypeSpecifierContext>();
}

CPP14Parser::TrailingTypeSpecifierContext* CPP14Parser::TrailingTypeSpecifierSeqContext::trailingTypeSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::TrailingTypeSpecifierContext>(i);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::TrailingTypeSpecifierSeqContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::TrailingTypeSpecifierSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleTrailingTypeSpecifierSeq;
}

void CPP14Parser::TrailingTypeSpecifierSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingTypeSpecifierSeq(this);
}

void CPP14Parser::TrailingTypeSpecifierSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingTypeSpecifierSeq(this);
}


antlrcpp::Any CPP14Parser::TrailingTypeSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTrailingTypeSpecifierSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TrailingTypeSpecifierSeqContext* CPP14Parser::trailingTypeSpecifierSeq() {
  TrailingTypeSpecifierSeqContext *_localctx = _tracker.createInstance<TrailingTypeSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 152, CPP14Parser::RuleTrailingTypeSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1066); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1065);
              trailingTypeSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1068); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(1071);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      setState(1070);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeSpecifierContext ------------------------------------------------------------------

CPP14Parser::SimpleTypeSpecifierContext::SimpleTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TheTypeNameContext* CPP14Parser::SimpleTypeSpecifierContext::theTypeName() {
  return getRuleContext<CPP14Parser::TheTypeNameContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::SimpleTypeSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::SimpleTypeSpecifierContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Char() {
  return getToken(CPP14Parser::Char, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Char16() {
  return getToken(CPP14Parser::Char16, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Char32() {
  return getToken(CPP14Parser::Char32, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Wchar() {
  return getToken(CPP14Parser::Wchar, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Bool() {
  return getToken(CPP14Parser::Bool, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Short() {
  return getToken(CPP14Parser::Short, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Int() {
  return getToken(CPP14Parser::Int, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Long() {
  return getToken(CPP14Parser::Long, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Signed() {
  return getToken(CPP14Parser::Signed, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Unsigned() {
  return getToken(CPP14Parser::Unsigned, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Float() {
  return getToken(CPP14Parser::Float, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Double() {
  return getToken(CPP14Parser::Double, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Void() {
  return getToken(CPP14Parser::Void, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTypeSpecifierContext::Auto() {
  return getToken(CPP14Parser::Auto, 0);
}

CPP14Parser::DecltypeSpecifierContext* CPP14Parser::SimpleTypeSpecifierContext::decltypeSpecifier() {
  return getRuleContext<CPP14Parser::DecltypeSpecifierContext>(0);
}


size_t CPP14Parser::SimpleTypeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpleTypeSpecifier;
}

void CPP14Parser::SimpleTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTypeSpecifier(this);
}

void CPP14Parser::SimpleTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTypeSpecifier(this);
}


antlrcpp::Any CPP14Parser::SimpleTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitSimpleTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpleTypeSpecifierContext* CPP14Parser::simpleTypeSpecifier() {
  SimpleTypeSpecifierContext *_localctx = _tracker.createInstance<SimpleTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 154, CPP14Parser::RuleSimpleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1096);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1074);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
      case 1: {
        setState(1073);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1076);
      theTypeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1077);
      nestedNameSpecifier(0);
      setState(1078);
      match(CPP14Parser::Template);
      setState(1079);
      simpleTemplateId();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1081);
      match(CPP14Parser::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1082);
      match(CPP14Parser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1083);
      match(CPP14Parser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1084);
      match(CPP14Parser::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1085);
      match(CPP14Parser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1086);
      match(CPP14Parser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1087);
      match(CPP14Parser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1088);
      match(CPP14Parser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1089);
      match(CPP14Parser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1090);
      match(CPP14Parser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1091);
      match(CPP14Parser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1092);
      match(CPP14Parser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1093);
      match(CPP14Parser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1094);
      match(CPP14Parser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1095);
      decltypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheTypeNameContext ------------------------------------------------------------------

CPP14Parser::TheTypeNameContext::TheTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassNameContext* CPP14Parser::TheTypeNameContext::className() {
  return getRuleContext<CPP14Parser::ClassNameContext>(0);
}

CPP14Parser::EnumNameContext* CPP14Parser::TheTypeNameContext::enumName() {
  return getRuleContext<CPP14Parser::EnumNameContext>(0);
}

CPP14Parser::TypedefNameContext* CPP14Parser::TheTypeNameContext::typedefName() {
  return getRuleContext<CPP14Parser::TypedefNameContext>(0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::TheTypeNameContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}


size_t CPP14Parser::TheTypeNameContext::getRuleIndex() const {
  return CPP14Parser::RuleTheTypeName;
}

void CPP14Parser::TheTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheTypeName(this);
}

void CPP14Parser::TheTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheTypeName(this);
}


antlrcpp::Any CPP14Parser::TheTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTheTypeName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TheTypeNameContext* CPP14Parser::theTypeName() {
  TheTypeNameContext *_localctx = _tracker.createInstance<TheTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 156, CPP14Parser::RuleTheTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1098);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1099);
      enumName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1100);
      typedefName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1101);
      simpleTemplateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypeSpecifierContext ------------------------------------------------------------------

CPP14Parser::DecltypeSpecifierContext::DecltypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::DecltypeSpecifierContext::Decltype() {
  return getToken(CPP14Parser::Decltype, 0);
}

tree::TerminalNode* CPP14Parser::DecltypeSpecifierContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::DecltypeSpecifierContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::DecltypeSpecifierContext::expression() {
  return getRuleContext<CPP14Parser::ExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::DecltypeSpecifierContext::Auto() {
  return getToken(CPP14Parser::Auto, 0);
}


size_t CPP14Parser::DecltypeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleDecltypeSpecifier;
}

void CPP14Parser::DecltypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecltypeSpecifier(this);
}

void CPP14Parser::DecltypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecltypeSpecifier(this);
}


antlrcpp::Any CPP14Parser::DecltypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDecltypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DecltypeSpecifierContext* CPP14Parser::decltypeSpecifier() {
  DecltypeSpecifierContext *_localctx = _tracker.createInstance<DecltypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 158, CPP14Parser::RuleDecltypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1104);
    match(CPP14Parser::Decltype);
    setState(1105);
    match(CPP14Parser::LeftParen);
    setState(1108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      setState(1106);
      expression();
      break;
    }

    case 2: {
      setState(1107);
      match(CPP14Parser::Auto);
      break;
    }

    }
    setState(1110);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedTypeSpecifierContext ------------------------------------------------------------------

CPP14Parser::ElaboratedTypeSpecifierContext::ElaboratedTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassKeyContext* CPP14Parser::ElaboratedTypeSpecifierContext::classKey() {
  return getRuleContext<CPP14Parser::ClassKeyContext>(0);
}

tree::TerminalNode* CPP14Parser::ElaboratedTypeSpecifierContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::ElaboratedTypeSpecifierContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::ElaboratedTypeSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ElaboratedTypeSpecifierContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* CPP14Parser::ElaboratedTypeSpecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::ElaboratedTypeSpecifierContext::Enum() {
  return getToken(CPP14Parser::Enum, 0);
}


size_t CPP14Parser::ElaboratedTypeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleElaboratedTypeSpecifier;
}

void CPP14Parser::ElaboratedTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElaboratedTypeSpecifier(this);
}

void CPP14Parser::ElaboratedTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElaboratedTypeSpecifier(this);
}


antlrcpp::Any CPP14Parser::ElaboratedTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitElaboratedTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ElaboratedTypeSpecifierContext* CPP14Parser::elaboratedTypeSpecifier() {
  ElaboratedTypeSpecifierContext *_localctx = _tracker.createInstance<ElaboratedTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, CPP14Parser::RuleElaboratedTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Class:
      case CPP14Parser::Struct: {
        enterOuterAlt(_localctx, 1);
        setState(1112);
        classKey();
        setState(1127);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
        case 1: {
          setState(1114);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
            setState(1113);
            attributeSpecifierSeq();
          }
          setState(1117);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
          case 1: {
            setState(1116);
            nestedNameSpecifier(0);
            break;
          }

          }
          setState(1119);
          match(CPP14Parser::Identifier);
          break;
        }

        case 2: {
          setState(1120);
          simpleTemplateId();
          break;
        }

        case 3: {
          setState(1121);
          nestedNameSpecifier(0);
          setState(1123);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Template) {
            setState(1122);
            match(CPP14Parser::Template);
          }
          setState(1125);
          simpleTemplateId();
          break;
        }

        }
        break;
      }

      case CPP14Parser::Enum: {
        enterOuterAlt(_localctx, 2);
        setState(1129);
        match(CPP14Parser::Enum);
        setState(1131);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
        case 1: {
          setState(1130);
          nestedNameSpecifier(0);
          break;
        }

        }
        setState(1133);
        match(CPP14Parser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumNameContext ------------------------------------------------------------------

CPP14Parser::EnumNameContext::EnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumNameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::EnumNameContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumName;
}

void CPP14Parser::EnumNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumName(this);
}

void CPP14Parser::EnumNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumName(this);
}


antlrcpp::Any CPP14Parser::EnumNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumNameContext* CPP14Parser::enumName() {
  EnumNameContext *_localctx = _tracker.createInstance<EnumNameContext>(_ctx, getState());
  enterRule(_localctx, 162, CPP14Parser::RuleEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1136);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumSpecifierContext ------------------------------------------------------------------

CPP14Parser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumHeadContext* CPP14Parser::EnumSpecifierContext::enumHead() {
  return getRuleContext<CPP14Parser::EnumHeadContext>(0);
}

tree::TerminalNode* CPP14Parser::EnumSpecifierContext::LeftBrace() {
  return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::EnumSpecifierContext::RightBrace() {
  return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::EnumeratorListContext* CPP14Parser::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<CPP14Parser::EnumeratorListContext>(0);
}

tree::TerminalNode* CPP14Parser::EnumSpecifierContext::Comma() {
  return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::EnumSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumSpecifier;
}

void CPP14Parser::EnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumSpecifier(this);
}

void CPP14Parser::EnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumSpecifier(this);
}


antlrcpp::Any CPP14Parser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumSpecifierContext* CPP14Parser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 164, CPP14Parser::RuleEnumSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1138);
    enumHead();
    setState(1139);
    match(CPP14Parser::LeftBrace);
    setState(1144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Identifier) {
      setState(1140);
      enumeratorList();
      setState(1142);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Comma) {
        setState(1141);
        match(CPP14Parser::Comma);
      }
    }
    setState(1146);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumHeadContext ------------------------------------------------------------------

CPP14Parser::EnumHeadContext::EnumHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumkeyContext* CPP14Parser::EnumHeadContext::enumkey() {
  return getRuleContext<CPP14Parser::EnumkeyContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::EnumHeadContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* CPP14Parser::EnumHeadContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::EnumbaseContext* CPP14Parser::EnumHeadContext::enumbase() {
  return getRuleContext<CPP14Parser::EnumbaseContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::EnumHeadContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}


size_t CPP14Parser::EnumHeadContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumHead;
}

void CPP14Parser::EnumHeadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumHead(this);
}

void CPP14Parser::EnumHeadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumHead(this);
}


antlrcpp::Any CPP14Parser::EnumHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumHead(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumHeadContext* CPP14Parser::enumHead() {
  EnumHeadContext *_localctx = _tracker.createInstance<EnumHeadContext>(_ctx, getState());
  enterRule(_localctx, 166, CPP14Parser::RuleEnumHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1148);
    enumkey();
    setState(1150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1149);
      attributeSpecifierSeq();
    }
    setState(1156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Decltype || _la == CPP14Parser::Doublecolon

    || _la == CPP14Parser::Identifier) {
      setState(1153);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
      case 1: {
        setState(1152);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1155);
      match(CPP14Parser::Identifier);
    }
    setState(1159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Colon) {
      setState(1158);
      enumbase();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueEnumDeclarationContext ------------------------------------------------------------------

CPP14Parser::OpaqueEnumDeclarationContext::OpaqueEnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumkeyContext* CPP14Parser::OpaqueEnumDeclarationContext::enumkey() {
  return getRuleContext<CPP14Parser::EnumkeyContext>(0);
}

tree::TerminalNode* CPP14Parser::OpaqueEnumDeclarationContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::OpaqueEnumDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::OpaqueEnumDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::EnumbaseContext* CPP14Parser::OpaqueEnumDeclarationContext::enumbase() {
  return getRuleContext<CPP14Parser::EnumbaseContext>(0);
}


size_t CPP14Parser::OpaqueEnumDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleOpaqueEnumDeclaration;
}

void CPP14Parser::OpaqueEnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueEnumDeclaration(this);
}

void CPP14Parser::OpaqueEnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueEnumDeclaration(this);
}


antlrcpp::Any CPP14Parser::OpaqueEnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitOpaqueEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OpaqueEnumDeclarationContext* CPP14Parser::opaqueEnumDeclaration() {
  OpaqueEnumDeclarationContext *_localctx = _tracker.createInstance<OpaqueEnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 168, CPP14Parser::RuleOpaqueEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1161);
    enumkey();
    setState(1163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1162);
      attributeSpecifierSeq();
    }
    setState(1165);
    match(CPP14Parser::Identifier);
    setState(1167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Colon) {
      setState(1166);
      enumbase();
    }
    setState(1169);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

CPP14Parser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Enum() {
  return getToken(CPP14Parser::Enum, 0);
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Class() {
  return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Struct() {
  return getToken(CPP14Parser::Struct, 0);
}


size_t CPP14Parser::EnumkeyContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumkey;
}

void CPP14Parser::EnumkeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumkey(this);
}

void CPP14Parser::EnumkeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumkey(this);
}


antlrcpp::Any CPP14Parser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumkey(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumkeyContext* CPP14Parser::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 170, CPP14Parser::RuleEnumkey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1171);
    match(CPP14Parser::Enum);
    setState(1173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Class

    || _la == CPP14Parser::Struct) {
      setState(1172);
      _la = _input->LA(1);
      if (!(_la == CPP14Parser::Class

      || _la == CPP14Parser::Struct)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

CPP14Parser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumbaseContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::TypeSpecifierSeqContext* CPP14Parser::EnumbaseContext::typeSpecifierSeq() {
  return getRuleContext<CPP14Parser::TypeSpecifierSeqContext>(0);
}


size_t CPP14Parser::EnumbaseContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumbase;
}

void CPP14Parser::EnumbaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumbase(this);
}

void CPP14Parser::EnumbaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumbase(this);
}


antlrcpp::Any CPP14Parser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumbase(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumbaseContext* CPP14Parser::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 172, CPP14Parser::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1175);
    match(CPP14Parser::Colon);
    setState(1176);
    typeSpecifierSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListContext ------------------------------------------------------------------

CPP14Parser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::EnumeratorDefinitionContext *> CPP14Parser::EnumeratorListContext::enumeratorDefinition() {
  return getRuleContexts<CPP14Parser::EnumeratorDefinitionContext>();
}

CPP14Parser::EnumeratorDefinitionContext* CPP14Parser::EnumeratorListContext::enumeratorDefinition(size_t i) {
  return getRuleContext<CPP14Parser::EnumeratorDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::EnumeratorListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::EnumeratorListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::EnumeratorListContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumeratorList;
}

void CPP14Parser::EnumeratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorList(this);
}

void CPP14Parser::EnumeratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorList(this);
}


antlrcpp::Any CPP14Parser::EnumeratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumeratorList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumeratorListContext* CPP14Parser::enumeratorList() {
  EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
  enterRule(_localctx, 174, CPP14Parser::RuleEnumeratorList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1178);
    enumeratorDefinition();
    setState(1183);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1179);
        match(CPP14Parser::Comma);
        setState(1180);
        enumeratorDefinition(); 
      }
      setState(1185);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorDefinitionContext ------------------------------------------------------------------

CPP14Parser::EnumeratorDefinitionContext::EnumeratorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::EnumeratorContext* CPP14Parser::EnumeratorDefinitionContext::enumerator() {
  return getRuleContext<CPP14Parser::EnumeratorContext>(0);
}

tree::TerminalNode* CPP14Parser::EnumeratorDefinitionContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::EnumeratorDefinitionContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}


size_t CPP14Parser::EnumeratorDefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumeratorDefinition;
}

void CPP14Parser::EnumeratorDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorDefinition(this);
}

void CPP14Parser::EnumeratorDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorDefinition(this);
}


antlrcpp::Any CPP14Parser::EnumeratorDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumeratorDefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumeratorDefinitionContext* CPP14Parser::enumeratorDefinition() {
  EnumeratorDefinitionContext *_localctx = _tracker.createInstance<EnumeratorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 176, CPP14Parser::RuleEnumeratorDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1186);
    enumerator();
    setState(1189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Assign) {
      setState(1187);
      match(CPP14Parser::Assign);
      setState(1188);
      constantExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CPP14Parser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::EnumeratorContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::EnumeratorContext::getRuleIndex() const {
  return CPP14Parser::RuleEnumerator;
}

void CPP14Parser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void CPP14Parser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any CPP14Parser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::EnumeratorContext* CPP14Parser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 178, CPP14Parser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1191);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceNameContext ------------------------------------------------------------------

CPP14Parser::NamespaceNameContext::NamespaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::OriginalNamespaceNameContext* CPP14Parser::NamespaceNameContext::originalNamespaceName() {
  return getRuleContext<CPP14Parser::OriginalNamespaceNameContext>(0);
}

CPP14Parser::NamespaceAliasContext* CPP14Parser::NamespaceNameContext::namespaceAlias() {
  return getRuleContext<CPP14Parser::NamespaceAliasContext>(0);
}


size_t CPP14Parser::NamespaceNameContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespaceName;
}

void CPP14Parser::NamespaceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceName(this);
}

void CPP14Parser::NamespaceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceName(this);
}


antlrcpp::Any CPP14Parser::NamespaceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespaceNameContext* CPP14Parser::namespaceName() {
  NamespaceNameContext *_localctx = _tracker.createInstance<NamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 180, CPP14Parser::RuleNamespaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1195);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1193);
      originalNamespaceName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1194);
      namespaceAlias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalNamespaceNameContext ------------------------------------------------------------------

CPP14Parser::OriginalNamespaceNameContext::OriginalNamespaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::OriginalNamespaceNameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::OriginalNamespaceNameContext::getRuleIndex() const {
  return CPP14Parser::RuleOriginalNamespaceName;
}

void CPP14Parser::OriginalNamespaceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalNamespaceName(this);
}

void CPP14Parser::OriginalNamespaceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalNamespaceName(this);
}


antlrcpp::Any CPP14Parser::OriginalNamespaceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitOriginalNamespaceName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OriginalNamespaceNameContext* CPP14Parser::originalNamespaceName() {
  OriginalNamespaceNameContext *_localctx = _tracker.createInstance<OriginalNamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 182, CPP14Parser::RuleOriginalNamespaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1197);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceDefinitionContext ------------------------------------------------------------------

CPP14Parser::NamespaceDefinitionContext::NamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NamespaceDefinitionContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::NamespaceDefinitionContext::LeftBrace() {
  return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::NamespaceDefinitionContext::RightBrace() {
  return getToken(CPP14Parser::RightBrace, 0);
}

tree::TerminalNode* CPP14Parser::NamespaceDefinitionContext::Inline() {
  return getToken(CPP14Parser::Inline, 0);
}

tree::TerminalNode* CPP14Parser::NamespaceDefinitionContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::OriginalNamespaceNameContext* CPP14Parser::NamespaceDefinitionContext::originalNamespaceName() {
  return getRuleContext<CPP14Parser::OriginalNamespaceNameContext>(0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::NamespaceDefinitionContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}


size_t CPP14Parser::NamespaceDefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespaceDefinition;
}

void CPP14Parser::NamespaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceDefinition(this);
}

void CPP14Parser::NamespaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceDefinition(this);
}


antlrcpp::Any CPP14Parser::NamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceDefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespaceDefinitionContext* CPP14Parser::namespaceDefinition() {
  NamespaceDefinitionContext *_localctx = _tracker.createInstance<NamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 184, CPP14Parser::RuleNamespaceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Inline) {
      setState(1199);
      match(CPP14Parser::Inline);
    }
    setState(1202);
    match(CPP14Parser::Namespace);
    setState(1205);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      setState(1203);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      setState(1204);
      originalNamespaceName();
      break;
    }

    }
    setState(1207);
    match(CPP14Parser::LeftBrace);
    setState(1209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 4) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
      | (1ULL << (CPP14Parser::Asm - 4))
      | (1ULL << (CPP14Parser::Auto - 4))
      | (1ULL << (CPP14Parser::Bool - 4))
      | (1ULL << (CPP14Parser::Char - 4))
      | (1ULL << (CPP14Parser::Char16 - 4))
      | (1ULL << (CPP14Parser::Char32 - 4))
      | (1ULL << (CPP14Parser::Class - 4))
      | (1ULL << (CPP14Parser::Const - 4))
      | (1ULL << (CPP14Parser::Constexpr - 4))
      | (1ULL << (CPP14Parser::Decltype - 4))
      | (1ULL << (CPP14Parser::Double - 4))
      | (1ULL << (CPP14Parser::Enum - 4))
      | (1ULL << (CPP14Parser::Explicit - 4))
      | (1ULL << (CPP14Parser::Extern - 4))
      | (1ULL << (CPP14Parser::Float - 4))
      | (1ULL << (CPP14Parser::Friend - 4))
      | (1ULL << (CPP14Parser::Inline - 4))
      | (1ULL << (CPP14Parser::Int - 4))
      | (1ULL << (CPP14Parser::Long - 4))
      | (1ULL << (CPP14Parser::Mutable - 4))
      | (1ULL << (CPP14Parser::Namespace - 4))
      | (1ULL << (CPP14Parser::Operator - 4))
      | (1ULL << (CPP14Parser::Register - 4))
      | (1ULL << (CPP14Parser::Short - 4))
      | (1ULL << (CPP14Parser::Signed - 4))
      | (1ULL << (CPP14Parser::Static - 4))
      | (1ULL << (CPP14Parser::Static_assert - 4))
      | (1ULL << (CPP14Parser::Struct - 4))
      | (1ULL << (CPP14Parser::Template - 4))
      | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
      | (1ULL << (CPP14Parser::Typename_ - 68))
      | (1ULL << (CPP14Parser::Union - 68))
      | (1ULL << (CPP14Parser::Unsigned - 68))
      | (1ULL << (CPP14Parser::Using - 68))
      | (1ULL << (CPP14Parser::Virtual - 68))
      | (1ULL << (CPP14Parser::Void - 68))
      | (1ULL << (CPP14Parser::Volatile - 68))
      | (1ULL << (CPP14Parser::Wchar - 68))
      | (1ULL << (CPP14Parser::LeftParen - 68))
      | (1ULL << (CPP14Parser::LeftBracket - 68))
      | (1ULL << (CPP14Parser::Star - 68))
      | (1ULL << (CPP14Parser::And - 68))
      | (1ULL << (CPP14Parser::Tilde - 68))
      | (1ULL << (CPP14Parser::AndAnd - 68))
      | (1ULL << (CPP14Parser::Doublecolon - 68))
      | (1ULL << (CPP14Parser::Semi - 68))
      | (1ULL << (CPP14Parser::Ellipsis - 68))
      | (1ULL << (CPP14Parser::Identifier - 68)))) != 0)) {
      setState(1208);
      dynamic_cast<NamespaceDefinitionContext *>(_localctx)->namespaceBody = declarationseq();
    }
    setState(1211);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceAliasContext ------------------------------------------------------------------

CPP14Parser::NamespaceAliasContext::NamespaceAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NamespaceAliasContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::NamespaceAliasContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespaceAlias;
}

void CPP14Parser::NamespaceAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceAlias(this);
}

void CPP14Parser::NamespaceAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceAlias(this);
}


antlrcpp::Any CPP14Parser::NamespaceAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceAlias(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespaceAliasContext* CPP14Parser::namespaceAlias() {
  NamespaceAliasContext *_localctx = _tracker.createInstance<NamespaceAliasContext>(_ctx, getState());
  enterRule(_localctx, 186, CPP14Parser::RuleNamespaceAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1213);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceAliasDefinitionContext ------------------------------------------------------------------

CPP14Parser::NamespaceAliasDefinitionContext::NamespaceAliasDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NamespaceAliasDefinitionContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::NamespaceAliasDefinitionContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::NamespaceAliasDefinitionContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::QualifiednamespacespecifierContext* CPP14Parser::NamespaceAliasDefinitionContext::qualifiednamespacespecifier() {
  return getRuleContext<CPP14Parser::QualifiednamespacespecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::NamespaceAliasDefinitionContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::NamespaceAliasDefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleNamespaceAliasDefinition;
}

void CPP14Parser::NamespaceAliasDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceAliasDefinition(this);
}

void CPP14Parser::NamespaceAliasDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceAliasDefinition(this);
}


antlrcpp::Any CPP14Parser::NamespaceAliasDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceAliasDefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NamespaceAliasDefinitionContext* CPP14Parser::namespaceAliasDefinition() {
  NamespaceAliasDefinitionContext *_localctx = _tracker.createInstance<NamespaceAliasDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, CPP14Parser::RuleNamespaceAliasDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1215);
    match(CPP14Parser::Namespace);
    setState(1216);
    match(CPP14Parser::Identifier);
    setState(1217);
    match(CPP14Parser::Assign);
    setState(1218);
    qualifiednamespacespecifier();
    setState(1219);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

CPP14Parser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NamespaceNameContext* CPP14Parser::QualifiednamespacespecifierContext::namespaceName() {
  return getRuleContext<CPP14Parser::NamespaceNameContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::QualifiednamespacespecifierContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}


size_t CPP14Parser::QualifiednamespacespecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleQualifiednamespacespecifier;
}

void CPP14Parser::QualifiednamespacespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiednamespacespecifier(this);
}

void CPP14Parser::QualifiednamespacespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiednamespacespecifier(this);
}


antlrcpp::Any CPP14Parser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitQualifiednamespacespecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::QualifiednamespacespecifierContext* CPP14Parser::qualifiednamespacespecifier() {
  QualifiednamespacespecifierContext *_localctx = _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
  enterRule(_localctx, 190, CPP14Parser::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1222);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      setState(1221);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1224);
    namespaceName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDeclarationContext ------------------------------------------------------------------

CPP14Parser::UsingDeclarationContext::UsingDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UsingDeclarationContext::Using() {
  return getToken(CPP14Parser::Using, 0);
}

CPP14Parser::UnqualifiedIdContext* CPP14Parser::UsingDeclarationContext::unqualifiedId() {
  return getRuleContext<CPP14Parser::UnqualifiedIdContext>(0);
}

tree::TerminalNode* CPP14Parser::UsingDeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::UsingDeclarationContext::Doublecolon() {
  return getToken(CPP14Parser::Doublecolon, 0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::UsingDeclarationContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::UsingDeclarationContext::Typename_() {
  return getToken(CPP14Parser::Typename_, 0);
}


size_t CPP14Parser::UsingDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleUsingDeclaration;
}

void CPP14Parser::UsingDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingDeclaration(this);
}

void CPP14Parser::UsingDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingDeclaration(this);
}


antlrcpp::Any CPP14Parser::UsingDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitUsingDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UsingDeclarationContext* CPP14Parser::usingDeclaration() {
  UsingDeclarationContext *_localctx = _tracker.createInstance<UsingDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 192, CPP14Parser::RuleUsingDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1226);
    match(CPP14Parser::Using);
    setState(1232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
    case 1: {
      setState(1228);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Typename_) {
        setState(1227);
        match(CPP14Parser::Typename_);
      }
      setState(1230);
      nestedNameSpecifier(0);
      break;
    }

    case 2: {
      setState(1231);
      match(CPP14Parser::Doublecolon);
      break;
    }

    }
    setState(1234);
    unqualifiedId();
    setState(1235);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDirectiveContext ------------------------------------------------------------------

CPP14Parser::UsingDirectiveContext::UsingDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::UsingDirectiveContext::Using() {
  return getToken(CPP14Parser::Using, 0);
}

tree::TerminalNode* CPP14Parser::UsingDirectiveContext::Namespace() {
  return getToken(CPP14Parser::Namespace, 0);
}

CPP14Parser::NamespaceNameContext* CPP14Parser::UsingDirectiveContext::namespaceName() {
  return getRuleContext<CPP14Parser::NamespaceNameContext>(0);
}

tree::TerminalNode* CPP14Parser::UsingDirectiveContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::UsingDirectiveContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::UsingDirectiveContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}


size_t CPP14Parser::UsingDirectiveContext::getRuleIndex() const {
  return CPP14Parser::RuleUsingDirective;
}

void CPP14Parser::UsingDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingDirective(this);
}

void CPP14Parser::UsingDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingDirective(this);
}


antlrcpp::Any CPP14Parser::UsingDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitUsingDirective(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::UsingDirectiveContext* CPP14Parser::usingDirective() {
  UsingDirectiveContext *_localctx = _tracker.createInstance<UsingDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 194, CPP14Parser::RuleUsingDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1237);
      attributeSpecifierSeq();
    }
    setState(1240);
    match(CPP14Parser::Using);
    setState(1241);
    match(CPP14Parser::Namespace);
    setState(1243);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      setState(1242);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1245);
    namespaceName();
    setState(1246);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmDefinitionContext ------------------------------------------------------------------

CPP14Parser::AsmDefinitionContext::AsmDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AsmDefinitionContext::Asm() {
  return getToken(CPP14Parser::Asm, 0);
}

tree::TerminalNode* CPP14Parser::AsmDefinitionContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::AsmDefinitionContext::StringLiteral() {
  return getToken(CPP14Parser::StringLiteral, 0);
}

tree::TerminalNode* CPP14Parser::AsmDefinitionContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::AsmDefinitionContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::AsmDefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleAsmDefinition;
}

void CPP14Parser::AsmDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsmDefinition(this);
}

void CPP14Parser::AsmDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsmDefinition(this);
}


antlrcpp::Any CPP14Parser::AsmDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAsmDefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AsmDefinitionContext* CPP14Parser::asmDefinition() {
  AsmDefinitionContext *_localctx = _tracker.createInstance<AsmDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 196, CPP14Parser::RuleAsmDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1248);
    match(CPP14Parser::Asm);
    setState(1249);
    match(CPP14Parser::LeftParen);
    setState(1250);
    match(CPP14Parser::StringLiteral);
    setState(1251);
    match(CPP14Parser::RightParen);
    setState(1252);
    match(CPP14Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkageSpecificationContext ------------------------------------------------------------------

CPP14Parser::LinkageSpecificationContext::LinkageSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LinkageSpecificationContext::Extern() {
  return getToken(CPP14Parser::Extern, 0);
}

tree::TerminalNode* CPP14Parser::LinkageSpecificationContext::StringLiteral() {
  return getToken(CPP14Parser::StringLiteral, 0);
}

tree::TerminalNode* CPP14Parser::LinkageSpecificationContext::LeftBrace() {
  return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::LinkageSpecificationContext::RightBrace() {
  return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::LinkageSpecificationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::LinkageSpecificationContext::declarationseq() {
  return getRuleContext<CPP14Parser::DeclarationseqContext>(0);
}


size_t CPP14Parser::LinkageSpecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleLinkageSpecification;
}

void CPP14Parser::LinkageSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkageSpecification(this);
}

void CPP14Parser::LinkageSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkageSpecification(this);
}


antlrcpp::Any CPP14Parser::LinkageSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLinkageSpecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LinkageSpecificationContext* CPP14Parser::linkageSpecification() {
  LinkageSpecificationContext *_localctx = _tracker.createInstance<LinkageSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 198, CPP14Parser::RuleLinkageSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    match(CPP14Parser::Extern);
    setState(1255);
    match(CPP14Parser::StringLiteral);
    setState(1262);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftBrace: {
        setState(1256);
        match(CPP14Parser::LeftBrace);
        setState(1258);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 4) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
          | (1ULL << (CPP14Parser::Asm - 4))
          | (1ULL << (CPP14Parser::Auto - 4))
          | (1ULL << (CPP14Parser::Bool - 4))
          | (1ULL << (CPP14Parser::Char - 4))
          | (1ULL << (CPP14Parser::Char16 - 4))
          | (1ULL << (CPP14Parser::Char32 - 4))
          | (1ULL << (CPP14Parser::Class - 4))
          | (1ULL << (CPP14Parser::Const - 4))
          | (1ULL << (CPP14Parser::Constexpr - 4))
          | (1ULL << (CPP14Parser::Decltype - 4))
          | (1ULL << (CPP14Parser::Double - 4))
          | (1ULL << (CPP14Parser::Enum - 4))
          | (1ULL << (CPP14Parser::Explicit - 4))
          | (1ULL << (CPP14Parser::Extern - 4))
          | (1ULL << (CPP14Parser::Float - 4))
          | (1ULL << (CPP14Parser::Friend - 4))
          | (1ULL << (CPP14Parser::Inline - 4))
          | (1ULL << (CPP14Parser::Int - 4))
          | (1ULL << (CPP14Parser::Long - 4))
          | (1ULL << (CPP14Parser::Mutable - 4))
          | (1ULL << (CPP14Parser::Namespace - 4))
          | (1ULL << (CPP14Parser::Operator - 4))
          | (1ULL << (CPP14Parser::Register - 4))
          | (1ULL << (CPP14Parser::Short - 4))
          | (1ULL << (CPP14Parser::Signed - 4))
          | (1ULL << (CPP14Parser::Static - 4))
          | (1ULL << (CPP14Parser::Static_assert - 4))
          | (1ULL << (CPP14Parser::Struct - 4))
          | (1ULL << (CPP14Parser::Template - 4))
          | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
          | (1ULL << (CPP14Parser::Typename_ - 68))
          | (1ULL << (CPP14Parser::Union - 68))
          | (1ULL << (CPP14Parser::Unsigned - 68))
          | (1ULL << (CPP14Parser::Using - 68))
          | (1ULL << (CPP14Parser::Virtual - 68))
          | (1ULL << (CPP14Parser::Void - 68))
          | (1ULL << (CPP14Parser::Volatile - 68))
          | (1ULL << (CPP14Parser::Wchar - 68))
          | (1ULL << (CPP14Parser::LeftParen - 68))
          | (1ULL << (CPP14Parser::LeftBracket - 68))
          | (1ULL << (CPP14Parser::Star - 68))
          | (1ULL << (CPP14Parser::And - 68))
          | (1ULL << (CPP14Parser::Tilde - 68))
          | (1ULL << (CPP14Parser::AndAnd - 68))
          | (1ULL << (CPP14Parser::Doublecolon - 68))
          | (1ULL << (CPP14Parser::Semi - 68))
          | (1ULL << (CPP14Parser::Ellipsis - 68))
          | (1ULL << (CPP14Parser::Identifier - 68)))) != 0)) {
          setState(1257);
          declarationseq();
        }
        setState(1260);
        match(CPP14Parser::RightBrace);
        break;
      }

      case CPP14Parser::Alignas:
      case CPP14Parser::Asm:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Constexpr:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Explicit:
      case CPP14Parser::Extern:
      case CPP14Parser::Float:
      case CPP14Parser::Friend:
      case CPP14Parser::Inline:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Mutable:
      case CPP14Parser::Namespace:
      case CPP14Parser::Operator:
      case CPP14Parser::Register:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Static:
      case CPP14Parser::Static_assert:
      case CPP14Parser::Struct:
      case CPP14Parser::Template:
      case CPP14Parser::Thread_local:
      case CPP14Parser::Typedef:
      case CPP14Parser::Typename_:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Using:
      case CPP14Parser::Virtual:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Tilde:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Semi:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier: {
        setState(1261);
        declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierSeqContext ------------------------------------------------------------------

CPP14Parser::AttributeSpecifierSeqContext::AttributeSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::AttributeSpecifierContext *> CPP14Parser::AttributeSpecifierSeqContext::attributeSpecifier() {
  return getRuleContexts<CPP14Parser::AttributeSpecifierContext>();
}

CPP14Parser::AttributeSpecifierContext* CPP14Parser::AttributeSpecifierSeqContext::attributeSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::AttributeSpecifierContext>(i);
}


size_t CPP14Parser::AttributeSpecifierSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeSpecifierSeq;
}

void CPP14Parser::AttributeSpecifierSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifierSeq(this);
}

void CPP14Parser::AttributeSpecifierSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifierSeq(this);
}


antlrcpp::Any CPP14Parser::AttributeSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttributeSpecifierSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::attributeSpecifierSeq() {
  AttributeSpecifierSeqContext *_localctx = _tracker.createInstance<AttributeSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 200, CPP14Parser::RuleAttributeSpecifierSeq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1265); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1264);
              attributeSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1267); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierContext ------------------------------------------------------------------

CPP14Parser::AttributeSpecifierContext::AttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPP14Parser::AttributeSpecifierContext::LeftBracket() {
  return getTokens(CPP14Parser::LeftBracket);
}

tree::TerminalNode* CPP14Parser::AttributeSpecifierContext::LeftBracket(size_t i) {
  return getToken(CPP14Parser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::AttributeSpecifierContext::RightBracket() {
  return getTokens(CPP14Parser::RightBracket);
}

tree::TerminalNode* CPP14Parser::AttributeSpecifierContext::RightBracket(size_t i) {
  return getToken(CPP14Parser::RightBracket, i);
}

CPP14Parser::AttributeListContext* CPP14Parser::AttributeSpecifierContext::attributeList() {
  return getRuleContext<CPP14Parser::AttributeListContext>(0);
}

CPP14Parser::AlignmentspecifierContext* CPP14Parser::AttributeSpecifierContext::alignmentspecifier() {
  return getRuleContext<CPP14Parser::AlignmentspecifierContext>(0);
}


size_t CPP14Parser::AttributeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeSpecifier;
}

void CPP14Parser::AttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifier(this);
}

void CPP14Parser::AttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifier(this);
}


antlrcpp::Any CPP14Parser::AttributeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttributeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeSpecifierContext* CPP14Parser::attributeSpecifier() {
  AttributeSpecifierContext *_localctx = _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 202, CPP14Parser::RuleAttributeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1269);
        match(CPP14Parser::LeftBracket);
        setState(1270);
        match(CPP14Parser::LeftBracket);
        setState(1272);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Identifier) {
          setState(1271);
          attributeList();
        }
        setState(1274);
        match(CPP14Parser::RightBracket);
        setState(1275);
        match(CPP14Parser::RightBracket);
        break;
      }

      case CPP14Parser::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1276);
        alignmentspecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

CPP14Parser::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::Alignas() {
  return getToken(CPP14Parser::Alignas, 0);
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::AlignmentspecifierContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::AlignmentspecifierContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::AlignmentspecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleAlignmentspecifier;
}

void CPP14Parser::AlignmentspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentspecifier(this);
}

void CPP14Parser::AlignmentspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentspecifier(this);
}


antlrcpp::Any CPP14Parser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAlignmentspecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AlignmentspecifierContext* CPP14Parser::alignmentspecifier() {
  AlignmentspecifierContext *_localctx = _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
  enterRule(_localctx, 204, CPP14Parser::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1279);
    match(CPP14Parser::Alignas);
    setState(1280);
    match(CPP14Parser::LeftParen);
    setState(1283);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx)) {
    case 1: {
      setState(1281);
      theTypeId();
      break;
    }

    case 2: {
      setState(1282);
      constantExpression();
      break;
    }

    }
    setState(1286);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1285);
      match(CPP14Parser::Ellipsis);
    }
    setState(1288);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeListContext ------------------------------------------------------------------

CPP14Parser::AttributeListContext::AttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::AttributeContext *> CPP14Parser::AttributeListContext::attribute() {
  return getRuleContexts<CPP14Parser::AttributeContext>();
}

CPP14Parser::AttributeContext* CPP14Parser::AttributeListContext::attribute(size_t i) {
  return getRuleContext<CPP14Parser::AttributeContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::AttributeListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::AttributeListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}

tree::TerminalNode* CPP14Parser::AttributeListContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::AttributeListContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeList;
}

void CPP14Parser::AttributeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeList(this);
}

void CPP14Parser::AttributeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeList(this);
}


antlrcpp::Any CPP14Parser::AttributeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttributeList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeListContext* CPP14Parser::attributeList() {
  AttributeListContext *_localctx = _tracker.createInstance<AttributeListContext>(_ctx, getState());
  enterRule(_localctx, 206, CPP14Parser::RuleAttributeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1290);
    attribute();
    setState(1295);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1291);
      match(CPP14Parser::Comma);
      setState(1292);
      attribute();
      setState(1297);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1298);
      match(CPP14Parser::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

CPP14Parser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AttributeContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributeNamespaceContext* CPP14Parser::AttributeContext::attributeNamespace() {
  return getRuleContext<CPP14Parser::AttributeNamespaceContext>(0);
}

tree::TerminalNode* CPP14Parser::AttributeContext::Doublecolon() {
  return getToken(CPP14Parser::Doublecolon, 0);
}

CPP14Parser::AttributeArgumentClauseContext* CPP14Parser::AttributeContext::attributeArgumentClause() {
  return getRuleContext<CPP14Parser::AttributeArgumentClauseContext>(0);
}


size_t CPP14Parser::AttributeContext::getRuleIndex() const {
  return CPP14Parser::RuleAttribute;
}

void CPP14Parser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void CPP14Parser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any CPP14Parser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeContext* CPP14Parser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 208, CPP14Parser::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1304);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      setState(1301);
      attributeNamespace();
      setState(1302);
      match(CPP14Parser::Doublecolon);
      break;
    }

    }
    setState(1306);
    match(CPP14Parser::Identifier);
    setState(1308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::LeftParen) {
      setState(1307);
      attributeArgumentClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeNamespaceContext ------------------------------------------------------------------

CPP14Parser::AttributeNamespaceContext::AttributeNamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AttributeNamespaceContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::AttributeNamespaceContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeNamespace;
}

void CPP14Parser::AttributeNamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeNamespace(this);
}

void CPP14Parser::AttributeNamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeNamespace(this);
}


antlrcpp::Any CPP14Parser::AttributeNamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttributeNamespace(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeNamespaceContext* CPP14Parser::attributeNamespace() {
  AttributeNamespaceContext *_localctx = _tracker.createInstance<AttributeNamespaceContext>(_ctx, getState());
  enterRule(_localctx, 210, CPP14Parser::RuleAttributeNamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1310);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeArgumentClauseContext ------------------------------------------------------------------

CPP14Parser::AttributeArgumentClauseContext::AttributeArgumentClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AttributeArgumentClauseContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::AttributeArgumentClauseContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::BalancedTokenSeqContext* CPP14Parser::AttributeArgumentClauseContext::balancedTokenSeq() {
  return getRuleContext<CPP14Parser::BalancedTokenSeqContext>(0);
}


size_t CPP14Parser::AttributeArgumentClauseContext::getRuleIndex() const {
  return CPP14Parser::RuleAttributeArgumentClause;
}

void CPP14Parser::AttributeArgumentClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeArgumentClause(this);
}

void CPP14Parser::AttributeArgumentClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeArgumentClause(this);
}


antlrcpp::Any CPP14Parser::AttributeArgumentClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAttributeArgumentClause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AttributeArgumentClauseContext* CPP14Parser::attributeArgumentClause() {
  AttributeArgumentClauseContext *_localctx = _tracker.createInstance<AttributeArgumentClauseContext>(_ctx, getState());
  enterRule(_localctx, 212, CPP14Parser::RuleAttributeArgumentClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1312);
    match(CPP14Parser::LeftParen);
    setState(1314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
      | (1ULL << CPP14Parser::MultiLineMacro)
      | (1ULL << CPP14Parser::Directive)
      | (1ULL << CPP14Parser::Alignas)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Asm)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Break)
      | (1ULL << CPP14Parser::Case)
      | (1ULL << CPP14Parser::Catch)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Constexpr)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Continue)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Default)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Do)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Else)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Explicit)
      | (1ULL << CPP14Parser::Export)
      | (1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::False_)
      | (1ULL << CPP14Parser::Final)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::For)
      | (1ULL << CPP14Parser::Friend)
      | (1ULL << CPP14Parser::Goto)
      | (1ULL << CPP14Parser::If)
      | (1ULL << CPP14Parser::Inline)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Namespace)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Nullptr)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Override)
      | (1ULL << CPP14Parser::Private)
      | (1ULL << CPP14Parser::Protected)
      | (1ULL << CPP14Parser::Public)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Return)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Static_assert)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::Switch)
      | (1ULL << CPP14Parser::Template)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Thread_local - 64))
      | (1ULL << (CPP14Parser::Throw - 64))
      | (1ULL << (CPP14Parser::True_ - 64))
      | (1ULL << (CPP14Parser::Try - 64))
      | (1ULL << (CPP14Parser::Typedef - 64))
      | (1ULL << (CPP14Parser::Typeid_ - 64))
      | (1ULL << (CPP14Parser::Typename_ - 64))
      | (1ULL << (CPP14Parser::Union - 64))
      | (1ULL << (CPP14Parser::Unsigned - 64))
      | (1ULL << (CPP14Parser::Using - 64))
      | (1ULL << (CPP14Parser::Virtual - 64))
      | (1ULL << (CPP14Parser::Void - 64))
      | (1ULL << (CPP14Parser::Volatile - 64))
      | (1ULL << (CPP14Parser::Wchar - 64))
      | (1ULL << (CPP14Parser::While - 64))
      | (1ULL << (CPP14Parser::LeftParen - 64))
      | (1ULL << (CPP14Parser::LeftBracket - 64))
      | (1ULL << (CPP14Parser::LeftBrace - 64))
      | (1ULL << (CPP14Parser::Plus - 64))
      | (1ULL << (CPP14Parser::Minus - 64))
      | (1ULL << (CPP14Parser::Star - 64))
      | (1ULL << (CPP14Parser::Div - 64))
      | (1ULL << (CPP14Parser::Mod - 64))
      | (1ULL << (CPP14Parser::Caret - 64))
      | (1ULL << (CPP14Parser::And - 64))
      | (1ULL << (CPP14Parser::Or - 64))
      | (1ULL << (CPP14Parser::Tilde - 64))
      | (1ULL << (CPP14Parser::Not - 64))
      | (1ULL << (CPP14Parser::Assign - 64))
      | (1ULL << (CPP14Parser::Less - 64))
      | (1ULL << (CPP14Parser::Greater - 64))
      | (1ULL << (CPP14Parser::PlusAssign - 64))
      | (1ULL << (CPP14Parser::MinusAssign - 64))
      | (1ULL << (CPP14Parser::StarAssign - 64))
      | (1ULL << (CPP14Parser::DivAssign - 64))
      | (1ULL << (CPP14Parser::ModAssign - 64))
      | (1ULL << (CPP14Parser::XorAssign - 64))
      | (1ULL << (CPP14Parser::AndAssign - 64))
      | (1ULL << (CPP14Parser::OrAssign - 64))
      | (1ULL << (CPP14Parser::LeftShift - 64))
      | (1ULL << (CPP14Parser::RightShift - 64))
      | (1ULL << (CPP14Parser::LeftShiftAssign - 64))
      | (1ULL << (CPP14Parser::RightShiftAssign - 64))
      | (1ULL << (CPP14Parser::Equal - 64))
      | (1ULL << (CPP14Parser::NotEqual - 64))
      | (1ULL << (CPP14Parser::LessEqual - 64))
      | (1ULL << (CPP14Parser::GreaterEqual - 64))
      | (1ULL << (CPP14Parser::AndAnd - 64))
      | (1ULL << (CPP14Parser::OrOr - 64))
      | (1ULL << (CPP14Parser::PlusPlus - 64))
      | (1ULL << (CPP14Parser::MinusMinus - 64))
      | (1ULL << (CPP14Parser::Comma - 64))
      | (1ULL << (CPP14Parser::ArrowStar - 64))
      | (1ULL << (CPP14Parser::Arrow - 64))
      | (1ULL << (CPP14Parser::Question - 64))
      | (1ULL << (CPP14Parser::Colon - 64))
      | (1ULL << (CPP14Parser::Doublecolon - 64))
      | (1ULL << (CPP14Parser::Semi - 64))
      | (1ULL << (CPP14Parser::Dot - 64))
      | (1ULL << (CPP14Parser::DotStar - 64))
      | (1ULL << (CPP14Parser::Ellipsis - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Identifier - 128))
      | (1ULL << (CPP14Parser::IntegerLiteral - 128))
      | (1ULL << (CPP14Parser::DecimalLiteral - 128))
      | (1ULL << (CPP14Parser::OctalLiteral - 128))
      | (1ULL << (CPP14Parser::HexadecimalLiteral - 128))
      | (1ULL << (CPP14Parser::BinaryLiteral - 128))
      | (1ULL << (CPP14Parser::Integersuffix - 128))
      | (1ULL << (CPP14Parser::CharacterLiteral - 128))
      | (1ULL << (CPP14Parser::FloatingLiteral - 128))
      | (1ULL << (CPP14Parser::StringLiteral - 128))
      | (1ULL << (CPP14Parser::BooleanLiteral - 128))
      | (1ULL << (CPP14Parser::PointerLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedIntegerLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedFloatingLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedStringLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedCharacterLiteral - 128))
      | (1ULL << (CPP14Parser::Whitespace - 128))
      | (1ULL << (CPP14Parser::Newline - 128))
      | (1ULL << (CPP14Parser::BlockComment - 128))
      | (1ULL << (CPP14Parser::LineComment - 128)))) != 0)) {
      setState(1313);
      balancedTokenSeq();
    }
    setState(1316);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedTokenSeqContext ------------------------------------------------------------------

CPP14Parser::BalancedTokenSeqContext::BalancedTokenSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::BalancedtokenContext *> CPP14Parser::BalancedTokenSeqContext::balancedtoken() {
  return getRuleContexts<CPP14Parser::BalancedtokenContext>();
}

CPP14Parser::BalancedtokenContext* CPP14Parser::BalancedTokenSeqContext::balancedtoken(size_t i) {
  return getRuleContext<CPP14Parser::BalancedtokenContext>(i);
}


size_t CPP14Parser::BalancedTokenSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleBalancedTokenSeq;
}

void CPP14Parser::BalancedTokenSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedTokenSeq(this);
}

void CPP14Parser::BalancedTokenSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedTokenSeq(this);
}


antlrcpp::Any CPP14Parser::BalancedTokenSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBalancedTokenSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BalancedTokenSeqContext* CPP14Parser::balancedTokenSeq() {
  BalancedTokenSeqContext *_localctx = _tracker.createInstance<BalancedTokenSeqContext>(_ctx, getState());
  enterRule(_localctx, 214, CPP14Parser::RuleBalancedTokenSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1319); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1318);
      balancedtoken();
      setState(1321); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
      | (1ULL << CPP14Parser::MultiLineMacro)
      | (1ULL << CPP14Parser::Directive)
      | (1ULL << CPP14Parser::Alignas)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Asm)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Break)
      | (1ULL << CPP14Parser::Case)
      | (1ULL << CPP14Parser::Catch)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Constexpr)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Continue)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Default)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Do)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Else)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Explicit)
      | (1ULL << CPP14Parser::Export)
      | (1ULL << CPP14Parser::Extern)
      | (1ULL << CPP14Parser::False_)
      | (1ULL << CPP14Parser::Final)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::For)
      | (1ULL << CPP14Parser::Friend)
      | (1ULL << CPP14Parser::Goto)
      | (1ULL << CPP14Parser::If)
      | (1ULL << CPP14Parser::Inline)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Mutable)
      | (1ULL << CPP14Parser::Namespace)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Nullptr)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Override)
      | (1ULL << CPP14Parser::Private)
      | (1ULL << CPP14Parser::Protected)
      | (1ULL << CPP14Parser::Public)
      | (1ULL << CPP14Parser::Register)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Return)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static)
      | (1ULL << CPP14Parser::Static_assert)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::Switch)
      | (1ULL << CPP14Parser::Template)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Thread_local - 64))
      | (1ULL << (CPP14Parser::Throw - 64))
      | (1ULL << (CPP14Parser::True_ - 64))
      | (1ULL << (CPP14Parser::Try - 64))
      | (1ULL << (CPP14Parser::Typedef - 64))
      | (1ULL << (CPP14Parser::Typeid_ - 64))
      | (1ULL << (CPP14Parser::Typename_ - 64))
      | (1ULL << (CPP14Parser::Union - 64))
      | (1ULL << (CPP14Parser::Unsigned - 64))
      | (1ULL << (CPP14Parser::Using - 64))
      | (1ULL << (CPP14Parser::Virtual - 64))
      | (1ULL << (CPP14Parser::Void - 64))
      | (1ULL << (CPP14Parser::Volatile - 64))
      | (1ULL << (CPP14Parser::Wchar - 64))
      | (1ULL << (CPP14Parser::While - 64))
      | (1ULL << (CPP14Parser::LeftParen - 64))
      | (1ULL << (CPP14Parser::LeftBracket - 64))
      | (1ULL << (CPP14Parser::LeftBrace - 64))
      | (1ULL << (CPP14Parser::Plus - 64))
      | (1ULL << (CPP14Parser::Minus - 64))
      | (1ULL << (CPP14Parser::Star - 64))
      | (1ULL << (CPP14Parser::Div - 64))
      | (1ULL << (CPP14Parser::Mod - 64))
      | (1ULL << (CPP14Parser::Caret - 64))
      | (1ULL << (CPP14Parser::And - 64))
      | (1ULL << (CPP14Parser::Or - 64))
      | (1ULL << (CPP14Parser::Tilde - 64))
      | (1ULL << (CPP14Parser::Not - 64))
      | (1ULL << (CPP14Parser::Assign - 64))
      | (1ULL << (CPP14Parser::Less - 64))
      | (1ULL << (CPP14Parser::Greater - 64))
      | (1ULL << (CPP14Parser::PlusAssign - 64))
      | (1ULL << (CPP14Parser::MinusAssign - 64))
      | (1ULL << (CPP14Parser::StarAssign - 64))
      | (1ULL << (CPP14Parser::DivAssign - 64))
      | (1ULL << (CPP14Parser::ModAssign - 64))
      | (1ULL << (CPP14Parser::XorAssign - 64))
      | (1ULL << (CPP14Parser::AndAssign - 64))
      | (1ULL << (CPP14Parser::OrAssign - 64))
      | (1ULL << (CPP14Parser::LeftShift - 64))
      | (1ULL << (CPP14Parser::RightShift - 64))
      | (1ULL << (CPP14Parser::LeftShiftAssign - 64))
      | (1ULL << (CPP14Parser::RightShiftAssign - 64))
      | (1ULL << (CPP14Parser::Equal - 64))
      | (1ULL << (CPP14Parser::NotEqual - 64))
      | (1ULL << (CPP14Parser::LessEqual - 64))
      | (1ULL << (CPP14Parser::GreaterEqual - 64))
      | (1ULL << (CPP14Parser::AndAnd - 64))
      | (1ULL << (CPP14Parser::OrOr - 64))
      | (1ULL << (CPP14Parser::PlusPlus - 64))
      | (1ULL << (CPP14Parser::MinusMinus - 64))
      | (1ULL << (CPP14Parser::Comma - 64))
      | (1ULL << (CPP14Parser::ArrowStar - 64))
      | (1ULL << (CPP14Parser::Arrow - 64))
      | (1ULL << (CPP14Parser::Question - 64))
      | (1ULL << (CPP14Parser::Colon - 64))
      | (1ULL << (CPP14Parser::Doublecolon - 64))
      | (1ULL << (CPP14Parser::Semi - 64))
      | (1ULL << (CPP14Parser::Dot - 64))
      | (1ULL << (CPP14Parser::DotStar - 64))
      | (1ULL << (CPP14Parser::Ellipsis - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Identifier - 128))
      | (1ULL << (CPP14Parser::IntegerLiteral - 128))
      | (1ULL << (CPP14Parser::DecimalLiteral - 128))
      | (1ULL << (CPP14Parser::OctalLiteral - 128))
      | (1ULL << (CPP14Parser::HexadecimalLiteral - 128))
      | (1ULL << (CPP14Parser::BinaryLiteral - 128))
      | (1ULL << (CPP14Parser::Integersuffix - 128))
      | (1ULL << (CPP14Parser::CharacterLiteral - 128))
      | (1ULL << (CPP14Parser::FloatingLiteral - 128))
      | (1ULL << (CPP14Parser::StringLiteral - 128))
      | (1ULL << (CPP14Parser::BooleanLiteral - 128))
      | (1ULL << (CPP14Parser::PointerLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedIntegerLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedFloatingLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedStringLiteral - 128))
      | (1ULL << (CPP14Parser::UserDefinedCharacterLiteral - 128))
      | (1ULL << (CPP14Parser::Whitespace - 128))
      | (1ULL << (CPP14Parser::Newline - 128))
      | (1ULL << (CPP14Parser::BlockComment - 128))
      | (1ULL << (CPP14Parser::LineComment - 128)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

CPP14Parser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::LeftParen() {
  return getTokens(CPP14Parser::LeftParen);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::LeftParen(size_t i) {
  return getToken(CPP14Parser::LeftParen, i);
}

CPP14Parser::BalancedTokenSeqContext* CPP14Parser::BalancedtokenContext::balancedTokenSeq() {
  return getRuleContext<CPP14Parser::BalancedTokenSeqContext>(0);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::RightParen() {
  return getTokens(CPP14Parser::RightParen);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::RightParen(size_t i) {
  return getToken(CPP14Parser::RightParen, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::LeftBracket() {
  return getTokens(CPP14Parser::LeftBracket);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::LeftBracket(size_t i) {
  return getToken(CPP14Parser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::RightBracket() {
  return getTokens(CPP14Parser::RightBracket);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::RightBracket(size_t i) {
  return getToken(CPP14Parser::RightBracket, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::LeftBrace() {
  return getTokens(CPP14Parser::LeftBrace);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::LeftBrace(size_t i) {
  return getToken(CPP14Parser::LeftBrace, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::RightBrace() {
  return getTokens(CPP14Parser::RightBrace);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::RightBrace(size_t i) {
  return getToken(CPP14Parser::RightBrace, i);
}


size_t CPP14Parser::BalancedtokenContext::getRuleIndex() const {
  return CPP14Parser::RuleBalancedtoken;
}

void CPP14Parser::BalancedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtoken(this);
}

void CPP14Parser::BalancedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtoken(this);
}


antlrcpp::Any CPP14Parser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBalancedtoken(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BalancedtokenContext* CPP14Parser::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 216, CPP14Parser::RuleBalancedtoken);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1340);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1323);
        match(CPP14Parser::LeftParen);
        setState(1324);
        balancedTokenSeq();
        setState(1325);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1327);
        match(CPP14Parser::LeftBracket);
        setState(1328);
        balancedTokenSeq();
        setState(1329);
        match(CPP14Parser::RightBracket);
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1331);
        match(CPP14Parser::LeftBrace);
        setState(1332);
        balancedTokenSeq();
        setState(1333);
        match(CPP14Parser::RightBrace);
        break;
      }

      case CPP14Parser::Literal:
      case CPP14Parser::MultiLineMacro:
      case CPP14Parser::Directive:
      case CPP14Parser::Alignas:
      case CPP14Parser::Alignof:
      case CPP14Parser::Asm:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Break:
      case CPP14Parser::Case:
      case CPP14Parser::Catch:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Constexpr:
      case CPP14Parser::Const_cast:
      case CPP14Parser::Continue:
      case CPP14Parser::Decltype:
      case CPP14Parser::Default:
      case CPP14Parser::Delete:
      case CPP14Parser::Do:
      case CPP14Parser::Double:
      case CPP14Parser::Dynamic_cast:
      case CPP14Parser::Else:
      case CPP14Parser::Enum:
      case CPP14Parser::Explicit:
      case CPP14Parser::Export:
      case CPP14Parser::Extern:
      case CPP14Parser::False_:
      case CPP14Parser::Final:
      case CPP14Parser::Float:
      case CPP14Parser::For:
      case CPP14Parser::Friend:
      case CPP14Parser::Goto:
      case CPP14Parser::If:
      case CPP14Parser::Inline:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Mutable:
      case CPP14Parser::Namespace:
      case CPP14Parser::New:
      case CPP14Parser::Noexcept:
      case CPP14Parser::Nullptr:
      case CPP14Parser::Operator:
      case CPP14Parser::Override:
      case CPP14Parser::Private:
      case CPP14Parser::Protected:
      case CPP14Parser::Public:
      case CPP14Parser::Register:
      case CPP14Parser::Reinterpret_cast:
      case CPP14Parser::Return:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Sizeof:
      case CPP14Parser::Static:
      case CPP14Parser::Static_assert:
      case CPP14Parser::Static_cast:
      case CPP14Parser::Struct:
      case CPP14Parser::Switch:
      case CPP14Parser::Template:
      case CPP14Parser::This:
      case CPP14Parser::Thread_local:
      case CPP14Parser::Throw:
      case CPP14Parser::True_:
      case CPP14Parser::Try:
      case CPP14Parser::Typedef:
      case CPP14Parser::Typeid_:
      case CPP14Parser::Typename_:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Using:
      case CPP14Parser::Virtual:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::While:
      case CPP14Parser::Plus:
      case CPP14Parser::Minus:
      case CPP14Parser::Star:
      case CPP14Parser::Div:
      case CPP14Parser::Mod:
      case CPP14Parser::Caret:
      case CPP14Parser::And:
      case CPP14Parser::Or:
      case CPP14Parser::Tilde:
      case CPP14Parser::Not:
      case CPP14Parser::Assign:
      case CPP14Parser::Less:
      case CPP14Parser::Greater:
      case CPP14Parser::PlusAssign:
      case CPP14Parser::MinusAssign:
      case CPP14Parser::StarAssign:
      case CPP14Parser::DivAssign:
      case CPP14Parser::ModAssign:
      case CPP14Parser::XorAssign:
      case CPP14Parser::AndAssign:
      case CPP14Parser::OrAssign:
      case CPP14Parser::LeftShift:
      case CPP14Parser::RightShift:
      case CPP14Parser::LeftShiftAssign:
      case CPP14Parser::RightShiftAssign:
      case CPP14Parser::Equal:
      case CPP14Parser::NotEqual:
      case CPP14Parser::LessEqual:
      case CPP14Parser::GreaterEqual:
      case CPP14Parser::AndAnd:
      case CPP14Parser::OrOr:
      case CPP14Parser::PlusPlus:
      case CPP14Parser::MinusMinus:
      case CPP14Parser::Comma:
      case CPP14Parser::ArrowStar:
      case CPP14Parser::Arrow:
      case CPP14Parser::Question:
      case CPP14Parser::Colon:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Semi:
      case CPP14Parser::Dot:
      case CPP14Parser::DotStar:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier:
      case CPP14Parser::IntegerLiteral:
      case CPP14Parser::DecimalLiteral:
      case CPP14Parser::OctalLiteral:
      case CPP14Parser::HexadecimalLiteral:
      case CPP14Parser::BinaryLiteral:
      case CPP14Parser::Integersuffix:
      case CPP14Parser::CharacterLiteral:
      case CPP14Parser::FloatingLiteral:
      case CPP14Parser::StringLiteral:
      case CPP14Parser::BooleanLiteral:
      case CPP14Parser::PointerLiteral:
      case CPP14Parser::UserDefinedLiteral:
      case CPP14Parser::UserDefinedIntegerLiteral:
      case CPP14Parser::UserDefinedFloatingLiteral:
      case CPP14Parser::UserDefinedStringLiteral:
      case CPP14Parser::UserDefinedCharacterLiteral:
      case CPP14Parser::Whitespace:
      case CPP14Parser::Newline:
      case CPP14Parser::BlockComment:
      case CPP14Parser::LineComment: {
        enterOuterAlt(_localctx, 4);
        setState(1336); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(1335);
                  _la = _input->LA(1);
                  if (_la == 0 || _la == Token::EOF || (((((_la - 79) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 79)) & ((1ULL << (CPP14Parser::LeftParen - 79))
                    | (1ULL << (CPP14Parser::RightParen - 79))
                    | (1ULL << (CPP14Parser::LeftBracket - 79))
                    | (1ULL << (CPP14Parser::RightBracket - 79))
                    | (1ULL << (CPP14Parser::LeftBrace - 79))
                    | (1ULL << (CPP14Parser::RightBrace - 79)))) != 0))) {
                  _errHandler->recoverInline(this);
                  }
                  else {
                    _errHandler->reportMatch(this);
                    consume();
                  }
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(1338); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

CPP14Parser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::InitDeclaratorContext *> CPP14Parser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<CPP14Parser::InitDeclaratorContext>();
}

CPP14Parser::InitDeclaratorContext* CPP14Parser::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<CPP14Parser::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::InitDeclaratorListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::InitDeclaratorListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::InitDeclaratorListContext::getRuleIndex() const {
  return CPP14Parser::RuleInitDeclaratorList;
}

void CPP14Parser::InitDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclaratorList(this);
}

void CPP14Parser::InitDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclaratorList(this);
}


antlrcpp::Any CPP14Parser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitDeclaratorListContext* CPP14Parser::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 218, CPP14Parser::RuleInitDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1342);
    initDeclarator();
    setState(1347);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1343);
      match(CPP14Parser::Comma);
      setState(1344);
      initDeclarator();
      setState(1349);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

CPP14Parser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratorContext* CPP14Parser::InitDeclaratorContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::InitializerContext* CPP14Parser::InitDeclaratorContext::initializer() {
  return getRuleContext<CPP14Parser::InitializerContext>(0);
}


size_t CPP14Parser::InitDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleInitDeclarator;
}

void CPP14Parser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void CPP14Parser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}


antlrcpp::Any CPP14Parser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitDeclaratorContext* CPP14Parser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 220, CPP14Parser::RuleInitDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1350);
    declarator();
    setState(1352);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (CPP14Parser::LeftParen - 79))
      | (1ULL << (CPP14Parser::LeftBrace - 79))
      | (1ULL << (CPP14Parser::Assign - 79)))) != 0)) {
      setState(1351);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CPP14Parser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PointerDeclaratorContext* CPP14Parser::DeclaratorContext::pointerDeclarator() {
  return getRuleContext<CPP14Parser::PointerDeclaratorContext>(0);
}

CPP14Parser::NoPointerDeclaratorContext* CPP14Parser::DeclaratorContext::noPointerDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerDeclaratorContext>(0);
}

CPP14Parser::ParametersAndQualifiersContext* CPP14Parser::DeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CPP14Parser::ParametersAndQualifiersContext>(0);
}

CPP14Parser::TrailingReturnTypeContext* CPP14Parser::DeclaratorContext::trailingReturnType() {
  return getRuleContext<CPP14Parser::TrailingReturnTypeContext>(0);
}


size_t CPP14Parser::DeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclarator;
}

void CPP14Parser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void CPP14Parser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any CPP14Parser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclaratorContext* CPP14Parser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 222, CPP14Parser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1354);
      pointerDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1355);
      noPointerDeclarator(0);
      setState(1356);
      parametersAndQualifiers();
      setState(1357);
      trailingReturnType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerDeclaratorContext ------------------------------------------------------------------

CPP14Parser::PointerDeclaratorContext::PointerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoPointerDeclaratorContext* CPP14Parser::PointerDeclaratorContext::noPointerDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerDeclaratorContext>(0);
}

std::vector<CPP14Parser::PointerOperatorContext *> CPP14Parser::PointerDeclaratorContext::pointerOperator() {
  return getRuleContexts<CPP14Parser::PointerOperatorContext>();
}

CPP14Parser::PointerOperatorContext* CPP14Parser::PointerDeclaratorContext::pointerOperator(size_t i) {
  return getRuleContext<CPP14Parser::PointerOperatorContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::PointerDeclaratorContext::Const() {
  return getTokens(CPP14Parser::Const);
}

tree::TerminalNode* CPP14Parser::PointerDeclaratorContext::Const(size_t i) {
  return getToken(CPP14Parser::Const, i);
}


size_t CPP14Parser::PointerDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RulePointerDeclarator;
}

void CPP14Parser::PointerDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerDeclarator(this);
}

void CPP14Parser::PointerDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerDeclarator(this);
}


antlrcpp::Any CPP14Parser::PointerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPointerDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PointerDeclaratorContext* CPP14Parser::pointerDeclarator() {
  PointerDeclaratorContext *_localctx = _tracker.createInstance<PointerDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 224, CPP14Parser::RulePointerDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1367);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1361);
        pointerOperator();
        setState(1363);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Const) {
          setState(1362);
          match(CPP14Parser::Const);
        } 
      }
      setState(1369);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx);
    }
    setState(1370);
    noPointerDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerDeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoPointerDeclaratorContext::NoPointerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratoridContext* CPP14Parser::NoPointerDeclaratorContext::declaratorid() {
  return getRuleContext<CPP14Parser::DeclaratoridContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::NoPointerDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerDeclaratorContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::PointerDeclaratorContext* CPP14Parser::NoPointerDeclaratorContext::pointerDeclarator() {
  return getRuleContext<CPP14Parser::PointerDeclaratorContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerDeclaratorContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::NoPointerDeclaratorContext* CPP14Parser::NoPointerDeclaratorContext::noPointerDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerDeclaratorContext>(0);
}

CPP14Parser::ParametersAndQualifiersContext* CPP14Parser::NoPointerDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CPP14Parser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerDeclaratorContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::NoPointerDeclaratorContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::NoPointerDeclaratorContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}


size_t CPP14Parser::NoPointerDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoPointerDeclarator;
}

void CPP14Parser::NoPointerDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerDeclarator(this);
}

void CPP14Parser::NoPointerDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerDeclarator(this);
}


antlrcpp::Any CPP14Parser::NoPointerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoPointerDeclaratorContext* CPP14Parser::noPointerDeclarator() {
   return noPointerDeclarator(0);
}

CPP14Parser::NoPointerDeclaratorContext* CPP14Parser::noPointerDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoPointerDeclaratorContext *_localctx = _tracker.createInstance<NoPointerDeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoPointerDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 226;
  enterRecursionRule(_localctx, 226, CPP14Parser::RuleNoPointerDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1381);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Decltype:
      case CPP14Parser::Operator:
      case CPP14Parser::Tilde:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Ellipsis:
      case CPP14Parser::Identifier: {
        setState(1373);
        declaratorid();
        setState(1375);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
        case 1: {
          setState(1374);
          attributeSpecifierSeq();
          break;
        }

        }
        break;
      }

      case CPP14Parser::LeftParen: {
        setState(1377);
        match(CPP14Parser::LeftParen);
        setState(1378);
        pointerDeclarator();
        setState(1379);
        match(CPP14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1397);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
        setState(1383);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(1393);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CPP14Parser::LeftParen: {
            setState(1384);
            parametersAndQualifiers();
            break;
          }

          case CPP14Parser::LeftBracket: {
            setState(1385);
            match(CPP14Parser::LeftBracket);
            setState(1387);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
              | (1ULL << CPP14Parser::Alignof)
              | (1ULL << CPP14Parser::Auto)
              | (1ULL << CPP14Parser::Bool)
              | (1ULL << CPP14Parser::Char)
              | (1ULL << CPP14Parser::Char16)
              | (1ULL << CPP14Parser::Char32)
              | (1ULL << CPP14Parser::Const_cast)
              | (1ULL << CPP14Parser::Decltype)
              | (1ULL << CPP14Parser::Delete)
              | (1ULL << CPP14Parser::Double)
              | (1ULL << CPP14Parser::Dynamic_cast)
              | (1ULL << CPP14Parser::Float)
              | (1ULL << CPP14Parser::Int)
              | (1ULL << CPP14Parser::Long)
              | (1ULL << CPP14Parser::New)
              | (1ULL << CPP14Parser::Noexcept)
              | (1ULL << CPP14Parser::Operator)
              | (1ULL << CPP14Parser::Reinterpret_cast)
              | (1ULL << CPP14Parser::Short)
              | (1ULL << CPP14Parser::Signed)
              | (1ULL << CPP14Parser::Sizeof)
              | (1ULL << CPP14Parser::Static_cast)
              | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
              ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typeid_ - 69))
              | (1ULL << (CPP14Parser::Typename_ - 69))
              | (1ULL << (CPP14Parser::Unsigned - 69))
              | (1ULL << (CPP14Parser::Void - 69))
              | (1ULL << (CPP14Parser::Wchar - 69))
              | (1ULL << (CPP14Parser::LeftParen - 69))
              | (1ULL << (CPP14Parser::LeftBracket - 69))
              | (1ULL << (CPP14Parser::Plus - 69))
              | (1ULL << (CPP14Parser::Minus - 69))
              | (1ULL << (CPP14Parser::Star - 69))
              | (1ULL << (CPP14Parser::And - 69))
              | (1ULL << (CPP14Parser::Or - 69))
              | (1ULL << (CPP14Parser::Tilde - 69))
              | (1ULL << (CPP14Parser::Not - 69))
              | (1ULL << (CPP14Parser::PlusPlus - 69))
              | (1ULL << (CPP14Parser::MinusMinus - 69))
              | (1ULL << (CPP14Parser::Doublecolon - 69))
              | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
              setState(1386);
              constantExpression();
            }
            setState(1389);
            match(CPP14Parser::RightBracket);
            setState(1391);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
            case 1: {
              setState(1390);
              attributeSpecifierSeq();
              break;
            }

            }
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1399);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersAndQualifiersContext ------------------------------------------------------------------

CPP14Parser::ParametersAndQualifiersContext::ParametersAndQualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ParametersAndQualifiersContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::ParametersAndQualifiersContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::ParameterDeclarationClauseContext* CPP14Parser::ParametersAndQualifiersContext::parameterDeclarationClause() {
  return getRuleContext<CPP14Parser::ParameterDeclarationClauseContext>(0);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::ParametersAndQualifiersContext::cvqualifierseq() {
  return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);
}

CPP14Parser::RefqualifierContext* CPP14Parser::ParametersAndQualifiersContext::refqualifier() {
  return getRuleContext<CPP14Parser::RefqualifierContext>(0);
}

CPP14Parser::ExceptionSpecificationContext* CPP14Parser::ParametersAndQualifiersContext::exceptionSpecification() {
  return getRuleContext<CPP14Parser::ExceptionSpecificationContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ParametersAndQualifiersContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::ParametersAndQualifiersContext::getRuleIndex() const {
  return CPP14Parser::RuleParametersAndQualifiers;
}

void CPP14Parser::ParametersAndQualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersAndQualifiers(this);
}

void CPP14Parser::ParametersAndQualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersAndQualifiers(this);
}


antlrcpp::Any CPP14Parser::ParametersAndQualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitParametersAndQualifiers(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParametersAndQualifiersContext* CPP14Parser::parametersAndQualifiers() {
  ParametersAndQualifiersContext *_localctx = _tracker.createInstance<ParametersAndQualifiersContext>(_ctx, getState());
  enterRule(_localctx, 228, CPP14Parser::RuleParametersAndQualifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1400);
    match(CPP14Parser::LeftParen);
    setState(1402);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 4) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
      | (1ULL << (CPP14Parser::Auto - 4))
      | (1ULL << (CPP14Parser::Bool - 4))
      | (1ULL << (CPP14Parser::Char - 4))
      | (1ULL << (CPP14Parser::Char16 - 4))
      | (1ULL << (CPP14Parser::Char32 - 4))
      | (1ULL << (CPP14Parser::Class - 4))
      | (1ULL << (CPP14Parser::Const - 4))
      | (1ULL << (CPP14Parser::Constexpr - 4))
      | (1ULL << (CPP14Parser::Decltype - 4))
      | (1ULL << (CPP14Parser::Double - 4))
      | (1ULL << (CPP14Parser::Enum - 4))
      | (1ULL << (CPP14Parser::Explicit - 4))
      | (1ULL << (CPP14Parser::Extern - 4))
      | (1ULL << (CPP14Parser::Float - 4))
      | (1ULL << (CPP14Parser::Friend - 4))
      | (1ULL << (CPP14Parser::Inline - 4))
      | (1ULL << (CPP14Parser::Int - 4))
      | (1ULL << (CPP14Parser::Long - 4))
      | (1ULL << (CPP14Parser::Mutable - 4))
      | (1ULL << (CPP14Parser::Register - 4))
      | (1ULL << (CPP14Parser::Short - 4))
      | (1ULL << (CPP14Parser::Signed - 4))
      | (1ULL << (CPP14Parser::Static - 4))
      | (1ULL << (CPP14Parser::Struct - 4))
      | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
      | (1ULL << (CPP14Parser::Typename_ - 68))
      | (1ULL << (CPP14Parser::Union - 68))
      | (1ULL << (CPP14Parser::Unsigned - 68))
      | (1ULL << (CPP14Parser::Virtual - 68))
      | (1ULL << (CPP14Parser::Void - 68))
      | (1ULL << (CPP14Parser::Volatile - 68))
      | (1ULL << (CPP14Parser::Wchar - 68))
      | (1ULL << (CPP14Parser::LeftBracket - 68))
      | (1ULL << (CPP14Parser::Doublecolon - 68))
      | (1ULL << (CPP14Parser::Identifier - 68)))) != 0)) {
      setState(1401);
      parameterDeclarationClause();
    }
    setState(1404);
    match(CPP14Parser::RightParen);
    setState(1406);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
    case 1: {
      setState(1405);
      cvqualifierseq();
      break;
    }

    }
    setState(1409);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx)) {
    case 1: {
      setState(1408);
      refqualifier();
      break;
    }

    }
    setState(1412);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      setState(1411);
      exceptionSpecification();
      break;
    }

    }
    setState(1415);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      setState(1414);
      attributeSpecifierSeq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingReturnTypeContext ------------------------------------------------------------------

CPP14Parser::TrailingReturnTypeContext::TrailingReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TrailingReturnTypeContext::Arrow() {
  return getToken(CPP14Parser::Arrow, 0);
}

CPP14Parser::TrailingTypeSpecifierSeqContext* CPP14Parser::TrailingReturnTypeContext::trailingTypeSpecifierSeq() {
  return getRuleContext<CPP14Parser::TrailingTypeSpecifierSeqContext>(0);
}

CPP14Parser::AbstractDeclaratorContext* CPP14Parser::TrailingReturnTypeContext::abstractDeclarator() {
  return getRuleContext<CPP14Parser::AbstractDeclaratorContext>(0);
}


size_t CPP14Parser::TrailingReturnTypeContext::getRuleIndex() const {
  return CPP14Parser::RuleTrailingReturnType;
}

void CPP14Parser::TrailingReturnTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingReturnType(this);
}

void CPP14Parser::TrailingReturnTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingReturnType(this);
}


antlrcpp::Any CPP14Parser::TrailingReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTrailingReturnType(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TrailingReturnTypeContext* CPP14Parser::trailingReturnType() {
  TrailingReturnTypeContext *_localctx = _tracker.createInstance<TrailingReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 230, CPP14Parser::RuleTrailingReturnType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1417);
    match(CPP14Parser::Arrow);
    setState(1418);
    trailingTypeSpecifierSeq();
    setState(1420);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      setState(1419);
      abstractDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerOperatorContext ------------------------------------------------------------------

CPP14Parser::PointerOperatorContext::PointerOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::PointerOperatorContext::And() {
  return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::PointerOperatorContext::AndAnd() {
  return getToken(CPP14Parser::AndAnd, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::PointerOperatorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* CPP14Parser::PointerOperatorContext::Star() {
  return getToken(CPP14Parser::Star, 0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::PointerOperatorContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::PointerOperatorContext::cvqualifierseq() {
  return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);
}


size_t CPP14Parser::PointerOperatorContext::getRuleIndex() const {
  return CPP14Parser::RulePointerOperator;
}

void CPP14Parser::PointerOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerOperator(this);
}

void CPP14Parser::PointerOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerOperator(this);
}


antlrcpp::Any CPP14Parser::PointerOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPointerOperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PointerOperatorContext* CPP14Parser::pointerOperator() {
  PointerOperatorContext *_localctx = _tracker.createInstance<PointerOperatorContext>(_ctx, getState());
  enterRule(_localctx, 232, CPP14Parser::RulePointerOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1436);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::And:
      case CPP14Parser::AndAnd: {
        enterOuterAlt(_localctx, 1);
        setState(1422);
        _la = _input->LA(1);
        if (!(_la == CPP14Parser::And

        || _la == CPP14Parser::AndAnd)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1424);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
        case 1: {
          setState(1423);
          attributeSpecifierSeq();
          break;
        }

        }
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Star:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1427);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Decltype || _la == CPP14Parser::Doublecolon

        || _la == CPP14Parser::Identifier) {
          setState(1426);
          nestedNameSpecifier(0);
        }
        setState(1429);
        match(CPP14Parser::Star);
        setState(1431);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
        case 1: {
          setState(1430);
          attributeSpecifierSeq();
          break;
        }

        }
        setState(1434);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
        case 1: {
          setState(1433);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierseqContext ------------------------------------------------------------------

CPP14Parser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::CvQualifierContext *> CPP14Parser::CvqualifierseqContext::cvQualifier() {
  return getRuleContexts<CPP14Parser::CvQualifierContext>();
}

CPP14Parser::CvQualifierContext* CPP14Parser::CvqualifierseqContext::cvQualifier(size_t i) {
  return getRuleContext<CPP14Parser::CvQualifierContext>(i);
}


size_t CPP14Parser::CvqualifierseqContext::getRuleIndex() const {
  return CPP14Parser::RuleCvqualifierseq;
}

void CPP14Parser::CvqualifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifierseq(this);
}

void CPP14Parser::CvqualifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifierseq(this);
}


antlrcpp::Any CPP14Parser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCvqualifierseq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 234, CPP14Parser::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1439); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1438);
              cvQualifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1441); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvQualifierContext ------------------------------------------------------------------

CPP14Parser::CvQualifierContext::CvQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::CvQualifierContext::Const() {
  return getToken(CPP14Parser::Const, 0);
}

tree::TerminalNode* CPP14Parser::CvQualifierContext::Volatile() {
  return getToken(CPP14Parser::Volatile, 0);
}


size_t CPP14Parser::CvQualifierContext::getRuleIndex() const {
  return CPP14Parser::RuleCvQualifier;
}

void CPP14Parser::CvQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvQualifier(this);
}

void CPP14Parser::CvQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvQualifier(this);
}


antlrcpp::Any CPP14Parser::CvQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitCvQualifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::CvQualifierContext* CPP14Parser::cvQualifier() {
  CvQualifierContext *_localctx = _tracker.createInstance<CvQualifierContext>(_ctx, getState());
  enterRule(_localctx, 236, CPP14Parser::RuleCvQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1443);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::Const

    || _la == CPP14Parser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefqualifierContext ------------------------------------------------------------------

CPP14Parser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::RefqualifierContext::And() {
  return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::RefqualifierContext::AndAnd() {
  return getToken(CPP14Parser::AndAnd, 0);
}


size_t CPP14Parser::RefqualifierContext::getRuleIndex() const {
  return CPP14Parser::RuleRefqualifier;
}

void CPP14Parser::RefqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRefqualifier(this);
}

void CPP14Parser::RefqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRefqualifier(this);
}


antlrcpp::Any CPP14Parser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitRefqualifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::RefqualifierContext* CPP14Parser::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 238, CPP14Parser::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1445);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::And

    || _la == CPP14Parser::AndAnd)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratoridContext ------------------------------------------------------------------

CPP14Parser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::IdExpressionContext* CPP14Parser::DeclaratoridContext::idExpression() {
  return getRuleContext<CPP14Parser::IdExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::DeclaratoridContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::DeclaratoridContext::getRuleIndex() const {
  return CPP14Parser::RuleDeclaratorid;
}

void CPP14Parser::DeclaratoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaratorid(this);
}

void CPP14Parser::DeclaratoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaratorid(this);
}


antlrcpp::Any CPP14Parser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDeclaratorid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DeclaratoridContext* CPP14Parser::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 240, CPP14Parser::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1448);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1447);
      match(CPP14Parser::Ellipsis);
    }
    setState(1450);
    idExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheTypeIdContext ------------------------------------------------------------------

CPP14Parser::TheTypeIdContext::TheTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypeSpecifierSeqContext* CPP14Parser::TheTypeIdContext::typeSpecifierSeq() {
  return getRuleContext<CPP14Parser::TypeSpecifierSeqContext>(0);
}

CPP14Parser::AbstractDeclaratorContext* CPP14Parser::TheTypeIdContext::abstractDeclarator() {
  return getRuleContext<CPP14Parser::AbstractDeclaratorContext>(0);
}


size_t CPP14Parser::TheTypeIdContext::getRuleIndex() const {
  return CPP14Parser::RuleTheTypeId;
}

void CPP14Parser::TheTypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheTypeId(this);
}

void CPP14Parser::TheTypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheTypeId(this);
}


antlrcpp::Any CPP14Parser::TheTypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTheTypeId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::theTypeId() {
  TheTypeIdContext *_localctx = _tracker.createInstance<TheTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 242, CPP14Parser::RuleTheTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1452);
    typeSpecifierSeq();
    setState(1454);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1453);
      abstractDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

CPP14Parser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PointerAbstractDeclaratorContext* CPP14Parser::AbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<CPP14Parser::PointerAbstractDeclaratorContext>(0);
}

CPP14Parser::ParametersAndQualifiersContext* CPP14Parser::AbstractDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CPP14Parser::ParametersAndQualifiersContext>(0);
}

CPP14Parser::TrailingReturnTypeContext* CPP14Parser::AbstractDeclaratorContext::trailingReturnType() {
  return getRuleContext<CPP14Parser::TrailingReturnTypeContext>(0);
}

CPP14Parser::NoPointerAbstractDeclaratorContext* CPP14Parser::AbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerAbstractDeclaratorContext>(0);
}

CPP14Parser::AbstractPackDeclaratorContext* CPP14Parser::AbstractDeclaratorContext::abstractPackDeclarator() {
  return getRuleContext<CPP14Parser::AbstractPackDeclaratorContext>(0);
}


size_t CPP14Parser::AbstractDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleAbstractDeclarator;
}

void CPP14Parser::AbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclarator(this);
}

void CPP14Parser::AbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclarator(this);
}


antlrcpp::Any CPP14Parser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AbstractDeclaratorContext* CPP14Parser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 244, CPP14Parser::RuleAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1464);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1456);
      pointerAbstractDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1458);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
      case 1: {
        setState(1457);
        noPointerAbstractDeclarator(0);
        break;
      }

      }
      setState(1460);
      parametersAndQualifiers();
      setState(1461);
      trailingReturnType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1463);
      abstractPackDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerAbstractDeclaratorContext ------------------------------------------------------------------

CPP14Parser::PointerAbstractDeclaratorContext::PointerAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoPointerAbstractDeclaratorContext* CPP14Parser::PointerAbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerAbstractDeclaratorContext>(0);
}

std::vector<CPP14Parser::PointerOperatorContext *> CPP14Parser::PointerAbstractDeclaratorContext::pointerOperator() {
  return getRuleContexts<CPP14Parser::PointerOperatorContext>();
}

CPP14Parser::PointerOperatorContext* CPP14Parser::PointerAbstractDeclaratorContext::pointerOperator(size_t i) {
  return getRuleContext<CPP14Parser::PointerOperatorContext>(i);
}


size_t CPP14Parser::PointerAbstractDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RulePointerAbstractDeclarator;
}

void CPP14Parser::PointerAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerAbstractDeclarator(this);
}

void CPP14Parser::PointerAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerAbstractDeclarator(this);
}


antlrcpp::Any CPP14Parser::PointerAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPointerAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PointerAbstractDeclaratorContext* CPP14Parser::pointerAbstractDeclarator() {
  PointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<PointerAbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 246, CPP14Parser::RulePointerAbstractDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1475);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1466);
        noPointerAbstractDeclarator(0);
        break;
      }

      case CPP14Parser::Decltype:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::AndAnd:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1468); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1467);
          pointerOperator();
          setState(1470); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == CPP14Parser::Decltype || ((((_la - 87) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 87)) & ((1ULL << (CPP14Parser::Star - 87))
          | (1ULL << (CPP14Parser::And - 87))
          | (1ULL << (CPP14Parser::AndAnd - 87))
          | (1ULL << (CPP14Parser::Doublecolon - 87))
          | (1ULL << (CPP14Parser::Identifier - 87)))) != 0));
        setState(1473);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
        case 1: {
          setState(1472);
          noPointerAbstractDeclarator(0);
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerAbstractDeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoPointerAbstractDeclaratorContext::NoPointerAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParametersAndQualifiersContext* CPP14Parser::NoPointerAbstractDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CPP14Parser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractDeclaratorContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractDeclaratorContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::NoPointerAbstractDeclaratorContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::NoPointerAbstractDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractDeclaratorContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::PointerAbstractDeclaratorContext* CPP14Parser::NoPointerAbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<CPP14Parser::PointerAbstractDeclaratorContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractDeclaratorContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

std::vector<CPP14Parser::NoPointerAbstractDeclaratorContext *> CPP14Parser::NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContexts<CPP14Parser::NoPointerAbstractDeclaratorContext>();
}

CPP14Parser::NoPointerAbstractDeclaratorContext* CPP14Parser::NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator(size_t i) {
  return getRuleContext<CPP14Parser::NoPointerAbstractDeclaratorContext>(i);
}


size_t CPP14Parser::NoPointerAbstractDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoPointerAbstractDeclarator;
}

void CPP14Parser::NoPointerAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerAbstractDeclarator(this);
}

void CPP14Parser::NoPointerAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerAbstractDeclarator(this);
}


antlrcpp::Any CPP14Parser::NoPointerAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoPointerAbstractDeclaratorContext* CPP14Parser::noPointerAbstractDeclarator() {
   return noPointerAbstractDeclarator(0);
}

CPP14Parser::NoPointerAbstractDeclaratorContext* CPP14Parser::noPointerAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoPointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoPointerAbstractDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 248;
  enterRecursionRule(_localctx, 248, CPP14Parser::RuleNoPointerAbstractDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1491);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
    case 1: {
      setState(1478);
      parametersAndQualifiers();
      break;
    }

    case 2: {
      setState(1479);
      match(CPP14Parser::LeftBracket);
      setState(1481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
        | (1ULL << CPP14Parser::Alignof)
        | (1ULL << CPP14Parser::Auto)
        | (1ULL << CPP14Parser::Bool)
        | (1ULL << CPP14Parser::Char)
        | (1ULL << CPP14Parser::Char16)
        | (1ULL << CPP14Parser::Char32)
        | (1ULL << CPP14Parser::Const_cast)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Delete)
        | (1ULL << CPP14Parser::Double)
        | (1ULL << CPP14Parser::Dynamic_cast)
        | (1ULL << CPP14Parser::Float)
        | (1ULL << CPP14Parser::Int)
        | (1ULL << CPP14Parser::Long)
        | (1ULL << CPP14Parser::New)
        | (1ULL << CPP14Parser::Noexcept)
        | (1ULL << CPP14Parser::Operator)
        | (1ULL << CPP14Parser::Reinterpret_cast)
        | (1ULL << CPP14Parser::Short)
        | (1ULL << CPP14Parser::Signed)
        | (1ULL << CPP14Parser::Sizeof)
        | (1ULL << CPP14Parser::Static_cast)
        | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typeid_ - 69))
        | (1ULL << (CPP14Parser::Typename_ - 69))
        | (1ULL << (CPP14Parser::Unsigned - 69))
        | (1ULL << (CPP14Parser::Void - 69))
        | (1ULL << (CPP14Parser::Wchar - 69))
        | (1ULL << (CPP14Parser::LeftParen - 69))
        | (1ULL << (CPP14Parser::LeftBracket - 69))
        | (1ULL << (CPP14Parser::Plus - 69))
        | (1ULL << (CPP14Parser::Minus - 69))
        | (1ULL << (CPP14Parser::Star - 69))
        | (1ULL << (CPP14Parser::And - 69))
        | (1ULL << (CPP14Parser::Or - 69))
        | (1ULL << (CPP14Parser::Tilde - 69))
        | (1ULL << (CPP14Parser::Not - 69))
        | (1ULL << (CPP14Parser::PlusPlus - 69))
        | (1ULL << (CPP14Parser::MinusMinus - 69))
        | (1ULL << (CPP14Parser::Doublecolon - 69))
        | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
        setState(1480);
        constantExpression();
      }
      setState(1483);
      match(CPP14Parser::RightBracket);
      setState(1485);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
      case 1: {
        setState(1484);
        attributeSpecifierSeq();
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1487);
      match(CPP14Parser::LeftParen);
      setState(1488);
      pointerAbstractDeclarator();
      setState(1489);
      match(CPP14Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1508);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
        setState(1493);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(1504);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
        case 1: {
          setState(1494);
          parametersAndQualifiers();
          break;
        }

        case 2: {
          setState(1495);
          noPointerAbstractDeclarator(0);
          setState(1496);
          match(CPP14Parser::LeftBracket);
          setState(1498);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
            | (1ULL << CPP14Parser::Alignof)
            | (1ULL << CPP14Parser::Auto)
            | (1ULL << CPP14Parser::Bool)
            | (1ULL << CPP14Parser::Char)
            | (1ULL << CPP14Parser::Char16)
            | (1ULL << CPP14Parser::Char32)
            | (1ULL << CPP14Parser::Const_cast)
            | (1ULL << CPP14Parser::Decltype)
            | (1ULL << CPP14Parser::Delete)
            | (1ULL << CPP14Parser::Double)
            | (1ULL << CPP14Parser::Dynamic_cast)
            | (1ULL << CPP14Parser::Float)
            | (1ULL << CPP14Parser::Int)
            | (1ULL << CPP14Parser::Long)
            | (1ULL << CPP14Parser::New)
            | (1ULL << CPP14Parser::Noexcept)
            | (1ULL << CPP14Parser::Operator)
            | (1ULL << CPP14Parser::Reinterpret_cast)
            | (1ULL << CPP14Parser::Short)
            | (1ULL << CPP14Parser::Signed)
            | (1ULL << CPP14Parser::Sizeof)
            | (1ULL << CPP14Parser::Static_cast)
            | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typeid_ - 69))
            | (1ULL << (CPP14Parser::Typename_ - 69))
            | (1ULL << (CPP14Parser::Unsigned - 69))
            | (1ULL << (CPP14Parser::Void - 69))
            | (1ULL << (CPP14Parser::Wchar - 69))
            | (1ULL << (CPP14Parser::LeftParen - 69))
            | (1ULL << (CPP14Parser::LeftBracket - 69))
            | (1ULL << (CPP14Parser::Plus - 69))
            | (1ULL << (CPP14Parser::Minus - 69))
            | (1ULL << (CPP14Parser::Star - 69))
            | (1ULL << (CPP14Parser::And - 69))
            | (1ULL << (CPP14Parser::Or - 69))
            | (1ULL << (CPP14Parser::Tilde - 69))
            | (1ULL << (CPP14Parser::Not - 69))
            | (1ULL << (CPP14Parser::PlusPlus - 69))
            | (1ULL << (CPP14Parser::MinusMinus - 69))
            | (1ULL << (CPP14Parser::Doublecolon - 69))
            | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
            setState(1497);
            constantExpression();
          }
          setState(1500);
          match(CPP14Parser::RightBracket);
          setState(1502);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
          case 1: {
            setState(1501);
            attributeSpecifierSeq();
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1510);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractPackDeclaratorContext ------------------------------------------------------------------

CPP14Parser::AbstractPackDeclaratorContext::AbstractPackDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::NoPointerAbstractPackDeclaratorContext* CPP14Parser::AbstractPackDeclaratorContext::noPointerAbstractPackDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerAbstractPackDeclaratorContext>(0);
}

std::vector<CPP14Parser::PointerOperatorContext *> CPP14Parser::AbstractPackDeclaratorContext::pointerOperator() {
  return getRuleContexts<CPP14Parser::PointerOperatorContext>();
}

CPP14Parser::PointerOperatorContext* CPP14Parser::AbstractPackDeclaratorContext::pointerOperator(size_t i) {
  return getRuleContext<CPP14Parser::PointerOperatorContext>(i);
}


size_t CPP14Parser::AbstractPackDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleAbstractPackDeclarator;
}

void CPP14Parser::AbstractPackDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractPackDeclarator(this);
}

void CPP14Parser::AbstractPackDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractPackDeclarator(this);
}


antlrcpp::Any CPP14Parser::AbstractPackDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAbstractPackDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AbstractPackDeclaratorContext* CPP14Parser::abstractPackDeclarator() {
  AbstractPackDeclaratorContext *_localctx = _tracker.createInstance<AbstractPackDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 250, CPP14Parser::RuleAbstractPackDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1514);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Decltype || ((((_la - 87) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 87)) & ((1ULL << (CPP14Parser::Star - 87))
      | (1ULL << (CPP14Parser::And - 87))
      | (1ULL << (CPP14Parser::AndAnd - 87))
      | (1ULL << (CPP14Parser::Doublecolon - 87))
      | (1ULL << (CPP14Parser::Identifier - 87)))) != 0)) {
      setState(1511);
      pointerOperator();
      setState(1516);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1517);
    noPointerAbstractPackDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerAbstractPackDeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoPointerAbstractPackDeclaratorContext::NoPointerAbstractPackDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractPackDeclaratorContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::NoPointerAbstractPackDeclaratorContext* CPP14Parser::NoPointerAbstractPackDeclaratorContext::noPointerAbstractPackDeclarator() {
  return getRuleContext<CPP14Parser::NoPointerAbstractPackDeclaratorContext>(0);
}

CPP14Parser::ParametersAndQualifiersContext* CPP14Parser::NoPointerAbstractPackDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CPP14Parser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractPackDeclaratorContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::NoPointerAbstractPackDeclaratorContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::NoPointerAbstractPackDeclaratorContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::NoPointerAbstractPackDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::NoPointerAbstractPackDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleNoPointerAbstractPackDeclarator;
}

void CPP14Parser::NoPointerAbstractPackDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerAbstractPackDeclarator(this);
}

void CPP14Parser::NoPointerAbstractPackDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerAbstractPackDeclarator(this);
}


antlrcpp::Any CPP14Parser::NoPointerAbstractPackDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerAbstractPackDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CPP14Parser::NoPointerAbstractPackDeclaratorContext* CPP14Parser::noPointerAbstractPackDeclarator() {
   return noPointerAbstractPackDeclarator(0);
}

CPP14Parser::NoPointerAbstractPackDeclaratorContext* CPP14Parser::noPointerAbstractPackDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CPP14Parser::NoPointerAbstractPackDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(_ctx, parentState);
  CPP14Parser::NoPointerAbstractPackDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 252;
  enterRecursionRule(_localctx, 252, CPP14Parser::RuleNoPointerAbstractPackDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1520);
    match(CPP14Parser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1536);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
        setState(1522);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(1532);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CPP14Parser::LeftParen: {
            setState(1523);
            parametersAndQualifiers();
            break;
          }

          case CPP14Parser::LeftBracket: {
            setState(1524);
            match(CPP14Parser::LeftBracket);
            setState(1526);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
              | (1ULL << CPP14Parser::Alignof)
              | (1ULL << CPP14Parser::Auto)
              | (1ULL << CPP14Parser::Bool)
              | (1ULL << CPP14Parser::Char)
              | (1ULL << CPP14Parser::Char16)
              | (1ULL << CPP14Parser::Char32)
              | (1ULL << CPP14Parser::Const_cast)
              | (1ULL << CPP14Parser::Decltype)
              | (1ULL << CPP14Parser::Delete)
              | (1ULL << CPP14Parser::Double)
              | (1ULL << CPP14Parser::Dynamic_cast)
              | (1ULL << CPP14Parser::Float)
              | (1ULL << CPP14Parser::Int)
              | (1ULL << CPP14Parser::Long)
              | (1ULL << CPP14Parser::New)
              | (1ULL << CPP14Parser::Noexcept)
              | (1ULL << CPP14Parser::Operator)
              | (1ULL << CPP14Parser::Reinterpret_cast)
              | (1ULL << CPP14Parser::Short)
              | (1ULL << CPP14Parser::Signed)
              | (1ULL << CPP14Parser::Sizeof)
              | (1ULL << CPP14Parser::Static_cast)
              | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
              ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typeid_ - 69))
              | (1ULL << (CPP14Parser::Typename_ - 69))
              | (1ULL << (CPP14Parser::Unsigned - 69))
              | (1ULL << (CPP14Parser::Void - 69))
              | (1ULL << (CPP14Parser::Wchar - 69))
              | (1ULL << (CPP14Parser::LeftParen - 69))
              | (1ULL << (CPP14Parser::LeftBracket - 69))
              | (1ULL << (CPP14Parser::Plus - 69))
              | (1ULL << (CPP14Parser::Minus - 69))
              | (1ULL << (CPP14Parser::Star - 69))
              | (1ULL << (CPP14Parser::And - 69))
              | (1ULL << (CPP14Parser::Or - 69))
              | (1ULL << (CPP14Parser::Tilde - 69))
              | (1ULL << (CPP14Parser::Not - 69))
              | (1ULL << (CPP14Parser::PlusPlus - 69))
              | (1ULL << (CPP14Parser::MinusMinus - 69))
              | (1ULL << (CPP14Parser::Doublecolon - 69))
              | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
              setState(1525);
              constantExpression();
            }
            setState(1528);
            match(CPP14Parser::RightBracket);
            setState(1530);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
            case 1: {
              setState(1529);
              attributeSpecifierSeq();
              break;
            }

            }
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(1538);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterDeclarationClauseContext ------------------------------------------------------------------

CPP14Parser::ParameterDeclarationClauseContext::ParameterDeclarationClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ParameterDeclarationListContext* CPP14Parser::ParameterDeclarationClauseContext::parameterDeclarationList() {
  return getRuleContext<CPP14Parser::ParameterDeclarationListContext>(0);
}

tree::TerminalNode* CPP14Parser::ParameterDeclarationClauseContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::ParameterDeclarationClauseContext::Comma() {
  return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::ParameterDeclarationClauseContext::getRuleIndex() const {
  return CPP14Parser::RuleParameterDeclarationClause;
}

void CPP14Parser::ParameterDeclarationClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclarationClause(this);
}

void CPP14Parser::ParameterDeclarationClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclarationClause(this);
}


antlrcpp::Any CPP14Parser::ParameterDeclarationClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationClause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParameterDeclarationClauseContext* CPP14Parser::parameterDeclarationClause() {
  ParameterDeclarationClauseContext *_localctx = _tracker.createInstance<ParameterDeclarationClauseContext>(_ctx, getState());
  enterRule(_localctx, 254, CPP14Parser::RuleParameterDeclarationClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1539);
    parameterDeclarationList();
    setState(1544);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Comma

    || _la == CPP14Parser::Ellipsis) {
      setState(1541);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Comma) {
        setState(1540);
        match(CPP14Parser::Comma);
      }
      setState(1543);
      match(CPP14Parser::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationListContext ------------------------------------------------------------------

CPP14Parser::ParameterDeclarationListContext::ParameterDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::ParameterDeclarationContext *> CPP14Parser::ParameterDeclarationListContext::parameterDeclaration() {
  return getRuleContexts<CPP14Parser::ParameterDeclarationContext>();
}

CPP14Parser::ParameterDeclarationContext* CPP14Parser::ParameterDeclarationListContext::parameterDeclaration(size_t i) {
  return getRuleContext<CPP14Parser::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::ParameterDeclarationListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::ParameterDeclarationListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::ParameterDeclarationListContext::getRuleIndex() const {
  return CPP14Parser::RuleParameterDeclarationList;
}

void CPP14Parser::ParameterDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclarationList(this);
}

void CPP14Parser::ParameterDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclarationList(this);
}


antlrcpp::Any CPP14Parser::ParameterDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParameterDeclarationListContext* CPP14Parser::parameterDeclarationList() {
  ParameterDeclarationListContext *_localctx = _tracker.createInstance<ParameterDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 256, CPP14Parser::RuleParameterDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1546);
    parameterDeclaration();
    setState(1551);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1547);
        match(CPP14Parser::Comma);
        setState(1548);
        parameterDeclaration(); 
      }
      setState(1553);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

CPP14Parser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::ParameterDeclarationContext::declSpecifierSeq() {
  return getRuleContext<CPP14Parser::DeclSpecifierSeqContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ParameterDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ParameterDeclarationContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

tree::TerminalNode* CPP14Parser::ParameterDeclarationContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::InitializerClauseContext* CPP14Parser::ParameterDeclarationContext::initializerClause() {
  return getRuleContext<CPP14Parser::InitializerClauseContext>(0);
}

CPP14Parser::AbstractDeclaratorContext* CPP14Parser::ParameterDeclarationContext::abstractDeclarator() {
  return getRuleContext<CPP14Parser::AbstractDeclaratorContext>(0);
}


size_t CPP14Parser::ParameterDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleParameterDeclaration;
}

void CPP14Parser::ParameterDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclaration(this);
}

void CPP14Parser::ParameterDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclaration(this);
}


antlrcpp::Any CPP14Parser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ParameterDeclarationContext* CPP14Parser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 258, CPP14Parser::RuleParameterDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1555);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1554);
      attributeSpecifierSeq();
    }
    setState(1557);
    declSpecifierSeq();

    setState(1562);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
    case 1: {
      setState(1558);
      declarator();
      break;
    }

    case 2: {
      setState(1560);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
      case 1: {
        setState(1559);
        abstractDeclarator();
        break;
      }

      }
      break;
    }

    }
    setState(1566);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Assign) {
      setState(1564);
      match(CPP14Parser::Assign);
      setState(1565);
      initializerClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CPP14Parser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratorContext* CPP14Parser::FunctionDefinitionContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::FunctionBodyContext* CPP14Parser::FunctionDefinitionContext::functionBody() {
  return getRuleContext<CPP14Parser::FunctionBodyContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::FunctionDefinitionContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::FunctionDefinitionContext::declSpecifierSeq() {
  return getRuleContext<CPP14Parser::DeclSpecifierSeqContext>(0);
}

CPP14Parser::VirtualSpecifierSeqContext* CPP14Parser::FunctionDefinitionContext::virtualSpecifierSeq() {
  return getRuleContext<CPP14Parser::VirtualSpecifierSeqContext>(0);
}


size_t CPP14Parser::FunctionDefinitionContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctionDefinition;
}

void CPP14Parser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CPP14Parser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any CPP14Parser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctionDefinitionContext* CPP14Parser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 260, CPP14Parser::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1569);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1568);
      attributeSpecifierSeq();
    }
    setState(1572);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx)) {
    case 1: {
      setState(1571);
      declSpecifierSeq();
      break;
    }

    }
    setState(1574);
    declarator();
    setState(1576);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Final

    || _la == CPP14Parser::Override) {
      setState(1575);
      virtualSpecifierSeq();
    }
    setState(1578);
    functionBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

CPP14Parser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::CompoundStatementContext* CPP14Parser::FunctionBodyContext::compoundStatement() {
  return getRuleContext<CPP14Parser::CompoundStatementContext>(0);
}

CPP14Parser::ConstructorInitializerContext* CPP14Parser::FunctionBodyContext::constructorInitializer() {
  return getRuleContext<CPP14Parser::ConstructorInitializerContext>(0);
}

CPP14Parser::FunctionTryBlockContext* CPP14Parser::FunctionBodyContext::functionTryBlock() {
  return getRuleContext<CPP14Parser::FunctionTryBlockContext>(0);
}

tree::TerminalNode* CPP14Parser::FunctionBodyContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::FunctionBodyContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::FunctionBodyContext::Default() {
  return getToken(CPP14Parser::Default, 0);
}

tree::TerminalNode* CPP14Parser::FunctionBodyContext::Delete() {
  return getToken(CPP14Parser::Delete, 0);
}


size_t CPP14Parser::FunctionBodyContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctionBody;
}

void CPP14Parser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void CPP14Parser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}


antlrcpp::Any CPP14Parser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctionBodyContext* CPP14Parser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 262, CPP14Parser::RuleFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1588);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftBrace:
      case CPP14Parser::Colon: {
        enterOuterAlt(_localctx, 1);
        setState(1581);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Colon) {
          setState(1580);
          constructorInitializer();
        }
        setState(1583);
        compoundStatement();
        break;
      }

      case CPP14Parser::Try: {
        enterOuterAlt(_localctx, 2);
        setState(1584);
        functionTryBlock();
        break;
      }

      case CPP14Parser::Assign: {
        enterOuterAlt(_localctx, 3);
        setState(1585);
        match(CPP14Parser::Assign);
        setState(1586);
        _la = _input->LA(1);
        if (!(_la == CPP14Parser::Default

        || _la == CPP14Parser::Delete)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1587);
        match(CPP14Parser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CPP14Parser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BraceOrEqualInitializerContext* CPP14Parser::InitializerContext::braceOrEqualInitializer() {
  return getRuleContext<CPP14Parser::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode* CPP14Parser::InitializerContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionListContext* CPP14Parser::InitializerContext::expressionList() {
  return getRuleContext<CPP14Parser::ExpressionListContext>(0);
}

tree::TerminalNode* CPP14Parser::InitializerContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::InitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleInitializer;
}

void CPP14Parser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void CPP14Parser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any CPP14Parser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitializerContext* CPP14Parser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 264, CPP14Parser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1595);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftBrace:
      case CPP14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1590);
        braceOrEqualInitializer();
        break;
      }

      case CPP14Parser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1591);
        match(CPP14Parser::LeftParen);
        setState(1592);
        expressionList();
        setState(1593);
        match(CPP14Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceOrEqualInitializerContext ------------------------------------------------------------------

CPP14Parser::BraceOrEqualInitializerContext::BraceOrEqualInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::BraceOrEqualInitializerContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::InitializerClauseContext* CPP14Parser::BraceOrEqualInitializerContext::initializerClause() {
  return getRuleContext<CPP14Parser::InitializerClauseContext>(0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::BraceOrEqualInitializerContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}


size_t CPP14Parser::BraceOrEqualInitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleBraceOrEqualInitializer;
}

void CPP14Parser::BraceOrEqualInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceOrEqualInitializer(this);
}

void CPP14Parser::BraceOrEqualInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceOrEqualInitializer(this);
}


antlrcpp::Any CPP14Parser::BraceOrEqualInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBraceOrEqualInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BraceOrEqualInitializerContext* CPP14Parser::braceOrEqualInitializer() {
  BraceOrEqualInitializerContext *_localctx = _tracker.createInstance<BraceOrEqualInitializerContext>(_ctx, getState());
  enterRule(_localctx, 266, CPP14Parser::RuleBraceOrEqualInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1600);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1597);
        match(CPP14Parser::Assign);
        setState(1598);
        initializerClause();
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1599);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerClauseContext ------------------------------------------------------------------

CPP14Parser::InitializerClauseContext::InitializerClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::AssignmentExpressionContext* CPP14Parser::InitializerClauseContext::assignmentExpression() {
  return getRuleContext<CPP14Parser::AssignmentExpressionContext>(0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::InitializerClauseContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}


size_t CPP14Parser::InitializerClauseContext::getRuleIndex() const {
  return CPP14Parser::RuleInitializerClause;
}

void CPP14Parser::InitializerClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerClause(this);
}

void CPP14Parser::InitializerClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerClause(this);
}


antlrcpp::Any CPP14Parser::InitializerClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInitializerClause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitializerClauseContext* CPP14Parser::initializerClause() {
  InitializerClauseContext *_localctx = _tracker.createInstance<InitializerClauseContext>(_ctx, getState());
  enterRule(_localctx, 268, CPP14Parser::RuleInitializerClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1604);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Literal:
      case CPP14Parser::Alignof:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Const_cast:
      case CPP14Parser::Decltype:
      case CPP14Parser::Delete:
      case CPP14Parser::Double:
      case CPP14Parser::Dynamic_cast:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::New:
      case CPP14Parser::Noexcept:
      case CPP14Parser::Operator:
      case CPP14Parser::Reinterpret_cast:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Sizeof:
      case CPP14Parser::Static_cast:
      case CPP14Parser::This:
      case CPP14Parser::Throw:
      case CPP14Parser::Typeid_:
      case CPP14Parser::Typename_:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftParen:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Plus:
      case CPP14Parser::Minus:
      case CPP14Parser::Star:
      case CPP14Parser::And:
      case CPP14Parser::Or:
      case CPP14Parser::Tilde:
      case CPP14Parser::Not:
      case CPP14Parser::PlusPlus:
      case CPP14Parser::MinusMinus:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1602);
        assignmentExpression();
        break;
      }

      case CPP14Parser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1603);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

CPP14Parser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::InitializerClauseContext *> CPP14Parser::InitializerListContext::initializerClause() {
  return getRuleContexts<CPP14Parser::InitializerClauseContext>();
}

CPP14Parser::InitializerClauseContext* CPP14Parser::InitializerListContext::initializerClause(size_t i) {
  return getRuleContext<CPP14Parser::InitializerClauseContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::InitializerListContext::Ellipsis() {
  return getTokens(CPP14Parser::Ellipsis);
}

tree::TerminalNode* CPP14Parser::InitializerListContext::Ellipsis(size_t i) {
  return getToken(CPP14Parser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::InitializerListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::InitializerListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::InitializerListContext::getRuleIndex() const {
  return CPP14Parser::RuleInitializerList;
}

void CPP14Parser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void CPP14Parser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


antlrcpp::Any CPP14Parser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::InitializerListContext* CPP14Parser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 270, CPP14Parser::RuleInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1606);
    initializerClause();
    setState(1608);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1607);
      match(CPP14Parser::Ellipsis);
    }
    setState(1617);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1610);
        match(CPP14Parser::Comma);
        setState(1611);
        initializerClause();
        setState(1613);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Ellipsis) {
          setState(1612);
          match(CPP14Parser::Ellipsis);
        } 
      }
      setState(1619);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BracedInitListContext ------------------------------------------------------------------

CPP14Parser::BracedInitListContext::BracedInitListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::BracedInitListContext::LeftBrace() {
  return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::BracedInitListContext::RightBrace() {
  return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::InitializerListContext* CPP14Parser::BracedInitListContext::initializerList() {
  return getRuleContext<CPP14Parser::InitializerListContext>(0);
}

tree::TerminalNode* CPP14Parser::BracedInitListContext::Comma() {
  return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::BracedInitListContext::getRuleIndex() const {
  return CPP14Parser::RuleBracedInitList;
}

void CPP14Parser::BracedInitListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracedInitList(this);
}

void CPP14Parser::BracedInitListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracedInitList(this);
}


antlrcpp::Any CPP14Parser::BracedInitListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBracedInitList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BracedInitListContext* CPP14Parser::bracedInitList() {
  BracedInitListContext *_localctx = _tracker.createInstance<BracedInitListContext>(_ctx, getState());
  enterRule(_localctx, 272, CPP14Parser::RuleBracedInitList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1620);
    match(CPP14Parser::LeftBrace);
    setState(1625);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
      | (1ULL << (CPP14Parser::Typeid_ - 65))
      | (1ULL << (CPP14Parser::Typename_ - 65))
      | (1ULL << (CPP14Parser::Unsigned - 65))
      | (1ULL << (CPP14Parser::Void - 65))
      | (1ULL << (CPP14Parser::Wchar - 65))
      | (1ULL << (CPP14Parser::LeftParen - 65))
      | (1ULL << (CPP14Parser::LeftBracket - 65))
      | (1ULL << (CPP14Parser::LeftBrace - 65))
      | (1ULL << (CPP14Parser::Plus - 65))
      | (1ULL << (CPP14Parser::Minus - 65))
      | (1ULL << (CPP14Parser::Star - 65))
      | (1ULL << (CPP14Parser::And - 65))
      | (1ULL << (CPP14Parser::Or - 65))
      | (1ULL << (CPP14Parser::Tilde - 65))
      | (1ULL << (CPP14Parser::Not - 65))
      | (1ULL << (CPP14Parser::PlusPlus - 65))
      | (1ULL << (CPP14Parser::MinusMinus - 65))
      | (1ULL << (CPP14Parser::Doublecolon - 65))
      | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
      setState(1621);
      initializerList();
      setState(1623);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Comma) {
        setState(1622);
        match(CPP14Parser::Comma);
      }
    }
    setState(1627);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassNameContext ------------------------------------------------------------------

CPP14Parser::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ClassNameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::ClassNameContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}


size_t CPP14Parser::ClassNameContext::getRuleIndex() const {
  return CPP14Parser::RuleClassName;
}

void CPP14Parser::ClassNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassName(this);
}

void CPP14Parser::ClassNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassName(this);
}


antlrcpp::Any CPP14Parser::ClassNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassNameContext* CPP14Parser::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 274, CPP14Parser::RuleClassName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1629);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1630);
      simpleTemplateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassSpecifierContext ------------------------------------------------------------------

CPP14Parser::ClassSpecifierContext::ClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassHeadContext* CPP14Parser::ClassSpecifierContext::classHead() {
  return getRuleContext<CPP14Parser::ClassHeadContext>(0);
}

tree::TerminalNode* CPP14Parser::ClassSpecifierContext::LeftBrace() {
  return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::ClassSpecifierContext::RightBrace() {
  return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::MemberSpecificationContext* CPP14Parser::ClassSpecifierContext::memberSpecification() {
  return getRuleContext<CPP14Parser::MemberSpecificationContext>(0);
}


size_t CPP14Parser::ClassSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleClassSpecifier;
}

void CPP14Parser::ClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassSpecifier(this);
}

void CPP14Parser::ClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassSpecifier(this);
}


antlrcpp::Any CPP14Parser::ClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassSpecifierContext* CPP14Parser::classSpecifier() {
  ClassSpecifierContext *_localctx = _tracker.createInstance<ClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 276, CPP14Parser::RuleClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1633);
    classHead();
    setState(1634);
    match(CPP14Parser::LeftBrace);
    setState(1636);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 4) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
      | (1ULL << (CPP14Parser::Auto - 4))
      | (1ULL << (CPP14Parser::Bool - 4))
      | (1ULL << (CPP14Parser::Char - 4))
      | (1ULL << (CPP14Parser::Char16 - 4))
      | (1ULL << (CPP14Parser::Char32 - 4))
      | (1ULL << (CPP14Parser::Class - 4))
      | (1ULL << (CPP14Parser::Const - 4))
      | (1ULL << (CPP14Parser::Constexpr - 4))
      | (1ULL << (CPP14Parser::Decltype - 4))
      | (1ULL << (CPP14Parser::Double - 4))
      | (1ULL << (CPP14Parser::Enum - 4))
      | (1ULL << (CPP14Parser::Explicit - 4))
      | (1ULL << (CPP14Parser::Extern - 4))
      | (1ULL << (CPP14Parser::Float - 4))
      | (1ULL << (CPP14Parser::Friend - 4))
      | (1ULL << (CPP14Parser::Inline - 4))
      | (1ULL << (CPP14Parser::Int - 4))
      | (1ULL << (CPP14Parser::Long - 4))
      | (1ULL << (CPP14Parser::Mutable - 4))
      | (1ULL << (CPP14Parser::Operator - 4))
      | (1ULL << (CPP14Parser::Private - 4))
      | (1ULL << (CPP14Parser::Protected - 4))
      | (1ULL << (CPP14Parser::Public - 4))
      | (1ULL << (CPP14Parser::Register - 4))
      | (1ULL << (CPP14Parser::Short - 4))
      | (1ULL << (CPP14Parser::Signed - 4))
      | (1ULL << (CPP14Parser::Static - 4))
      | (1ULL << (CPP14Parser::Static_assert - 4))
      | (1ULL << (CPP14Parser::Struct - 4))
      | (1ULL << (CPP14Parser::Template - 4))
      | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
      | (1ULL << (CPP14Parser::Typename_ - 68))
      | (1ULL << (CPP14Parser::Union - 68))
      | (1ULL << (CPP14Parser::Unsigned - 68))
      | (1ULL << (CPP14Parser::Using - 68))
      | (1ULL << (CPP14Parser::Virtual - 68))
      | (1ULL << (CPP14Parser::Void - 68))
      | (1ULL << (CPP14Parser::Volatile - 68))
      | (1ULL << (CPP14Parser::Wchar - 68))
      | (1ULL << (CPP14Parser::LeftParen - 68))
      | (1ULL << (CPP14Parser::LeftBracket - 68))
      | (1ULL << (CPP14Parser::Star - 68))
      | (1ULL << (CPP14Parser::And - 68))
      | (1ULL << (CPP14Parser::Tilde - 68))
      | (1ULL << (CPP14Parser::AndAnd - 68))
      | (1ULL << (CPP14Parser::Colon - 68))
      | (1ULL << (CPP14Parser::Doublecolon - 68))
      | (1ULL << (CPP14Parser::Semi - 68))
      | (1ULL << (CPP14Parser::Ellipsis - 68))
      | (1ULL << (CPP14Parser::Identifier - 68)))) != 0)) {
      setState(1635);
      memberSpecification();
    }
    setState(1638);
    match(CPP14Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeadContext ------------------------------------------------------------------

CPP14Parser::ClassHeadContext::ClassHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassKeyContext* CPP14Parser::ClassHeadContext::classKey() {
  return getRuleContext<CPP14Parser::ClassKeyContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ClassHeadContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::ClassHeadNameContext* CPP14Parser::ClassHeadContext::classHeadName() {
  return getRuleContext<CPP14Parser::ClassHeadNameContext>(0);
}

CPP14Parser::BaseClauseContext* CPP14Parser::ClassHeadContext::baseClause() {
  return getRuleContext<CPP14Parser::BaseClauseContext>(0);
}

CPP14Parser::ClassVirtSpecifierContext* CPP14Parser::ClassHeadContext::classVirtSpecifier() {
  return getRuleContext<CPP14Parser::ClassVirtSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::ClassHeadContext::Union() {
  return getToken(CPP14Parser::Union, 0);
}


size_t CPP14Parser::ClassHeadContext::getRuleIndex() const {
  return CPP14Parser::RuleClassHead;
}

void CPP14Parser::ClassHeadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassHead(this);
}

void CPP14Parser::ClassHeadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassHead(this);
}


antlrcpp::Any CPP14Parser::ClassHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassHead(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassHeadContext* CPP14Parser::classHead() {
  ClassHeadContext *_localctx = _tracker.createInstance<ClassHeadContext>(_ctx, getState());
  enterRule(_localctx, 278, CPP14Parser::RuleClassHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1663);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Class:
      case CPP14Parser::Struct: {
        enterOuterAlt(_localctx, 1);
        setState(1640);
        classKey();
        setState(1642);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
          setState(1641);
          attributeSpecifierSeq();
        }
        setState(1648);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Decltype || _la == CPP14Parser::Doublecolon

        || _la == CPP14Parser::Identifier) {
          setState(1644);
          classHeadName();
          setState(1646);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Final) {
            setState(1645);
            classVirtSpecifier();
          }
        }
        setState(1651);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Colon) {
          setState(1650);
          baseClause();
        }
        break;
      }

      case CPP14Parser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1653);
        match(CPP14Parser::Union);
        setState(1655);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
          setState(1654);
          attributeSpecifierSeq();
        }
        setState(1661);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Decltype || _la == CPP14Parser::Doublecolon

        || _la == CPP14Parser::Identifier) {
          setState(1657);
          classHeadName();
          setState(1659);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPP14Parser::Final) {
            setState(1658);
            classVirtSpecifier();
          }
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeadNameContext ------------------------------------------------------------------

CPP14Parser::ClassHeadNameContext::ClassHeadNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassNameContext* CPP14Parser::ClassHeadNameContext::className() {
  return getRuleContext<CPP14Parser::ClassNameContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::ClassHeadNameContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}


size_t CPP14Parser::ClassHeadNameContext::getRuleIndex() const {
  return CPP14Parser::RuleClassHeadName;
}

void CPP14Parser::ClassHeadNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassHeadName(this);
}

void CPP14Parser::ClassHeadNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassHeadName(this);
}


antlrcpp::Any CPP14Parser::ClassHeadNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassHeadName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassHeadNameContext* CPP14Parser::classHeadName() {
  ClassHeadNameContext *_localctx = _tracker.createInstance<ClassHeadNameContext>(_ctx, getState());
  enterRule(_localctx, 280, CPP14Parser::RuleClassHeadName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1666);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 227, _ctx)) {
    case 1: {
      setState(1665);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1668);
    className();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassVirtSpecifierContext ------------------------------------------------------------------

CPP14Parser::ClassVirtSpecifierContext::ClassVirtSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ClassVirtSpecifierContext::Final() {
  return getToken(CPP14Parser::Final, 0);
}


size_t CPP14Parser::ClassVirtSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleClassVirtSpecifier;
}

void CPP14Parser::ClassVirtSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassVirtSpecifier(this);
}

void CPP14Parser::ClassVirtSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassVirtSpecifier(this);
}


antlrcpp::Any CPP14Parser::ClassVirtSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassVirtSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassVirtSpecifierContext* CPP14Parser::classVirtSpecifier() {
  ClassVirtSpecifierContext *_localctx = _tracker.createInstance<ClassVirtSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 282, CPP14Parser::RuleClassVirtSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1670);
    match(CPP14Parser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassKeyContext ------------------------------------------------------------------

CPP14Parser::ClassKeyContext::ClassKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ClassKeyContext::Class() {
  return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::ClassKeyContext::Struct() {
  return getToken(CPP14Parser::Struct, 0);
}


size_t CPP14Parser::ClassKeyContext::getRuleIndex() const {
  return CPP14Parser::RuleClassKey;
}

void CPP14Parser::ClassKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassKey(this);
}

void CPP14Parser::ClassKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassKey(this);
}


antlrcpp::Any CPP14Parser::ClassKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassKey(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassKeyContext* CPP14Parser::classKey() {
  ClassKeyContext *_localctx = _tracker.createInstance<ClassKeyContext>(_ctx, getState());
  enterRule(_localctx, 284, CPP14Parser::RuleClassKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1672);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::Class

    || _la == CPP14Parser::Struct)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberSpecificationContext ------------------------------------------------------------------

CPP14Parser::MemberSpecificationContext::MemberSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::MemberdeclarationContext *> CPP14Parser::MemberSpecificationContext::memberdeclaration() {
  return getRuleContexts<CPP14Parser::MemberdeclarationContext>();
}

CPP14Parser::MemberdeclarationContext* CPP14Parser::MemberSpecificationContext::memberdeclaration(size_t i) {
  return getRuleContext<CPP14Parser::MemberdeclarationContext>(i);
}

std::vector<CPP14Parser::AccessSpecifierContext *> CPP14Parser::MemberSpecificationContext::accessSpecifier() {
  return getRuleContexts<CPP14Parser::AccessSpecifierContext>();
}

CPP14Parser::AccessSpecifierContext* CPP14Parser::MemberSpecificationContext::accessSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::AccessSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MemberSpecificationContext::Colon() {
  return getTokens(CPP14Parser::Colon);
}

tree::TerminalNode* CPP14Parser::MemberSpecificationContext::Colon(size_t i) {
  return getToken(CPP14Parser::Colon, i);
}


size_t CPP14Parser::MemberSpecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberSpecification;
}

void CPP14Parser::MemberSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberSpecification(this);
}

void CPP14Parser::MemberSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberSpecification(this);
}


antlrcpp::Any CPP14Parser::MemberSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMemberSpecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberSpecificationContext* CPP14Parser::memberSpecification() {
  MemberSpecificationContext *_localctx = _tracker.createInstance<MemberSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 286, CPP14Parser::RuleMemberSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1678); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1678);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPP14Parser::Alignas:
        case CPP14Parser::Auto:
        case CPP14Parser::Bool:
        case CPP14Parser::Char:
        case CPP14Parser::Char16:
        case CPP14Parser::Char32:
        case CPP14Parser::Class:
        case CPP14Parser::Const:
        case CPP14Parser::Constexpr:
        case CPP14Parser::Decltype:
        case CPP14Parser::Double:
        case CPP14Parser::Enum:
        case CPP14Parser::Explicit:
        case CPP14Parser::Extern:
        case CPP14Parser::Float:
        case CPP14Parser::Friend:
        case CPP14Parser::Inline:
        case CPP14Parser::Int:
        case CPP14Parser::Long:
        case CPP14Parser::Mutable:
        case CPP14Parser::Operator:
        case CPP14Parser::Register:
        case CPP14Parser::Short:
        case CPP14Parser::Signed:
        case CPP14Parser::Static:
        case CPP14Parser::Static_assert:
        case CPP14Parser::Struct:
        case CPP14Parser::Template:
        case CPP14Parser::Thread_local:
        case CPP14Parser::Typedef:
        case CPP14Parser::Typename_:
        case CPP14Parser::Union:
        case CPP14Parser::Unsigned:
        case CPP14Parser::Using:
        case CPP14Parser::Virtual:
        case CPP14Parser::Void:
        case CPP14Parser::Volatile:
        case CPP14Parser::Wchar:
        case CPP14Parser::LeftParen:
        case CPP14Parser::LeftBracket:
        case CPP14Parser::Star:
        case CPP14Parser::And:
        case CPP14Parser::Tilde:
        case CPP14Parser::AndAnd:
        case CPP14Parser::Colon:
        case CPP14Parser::Doublecolon:
        case CPP14Parser::Semi:
        case CPP14Parser::Ellipsis:
        case CPP14Parser::Identifier: {
          setState(1674);
          memberdeclaration();
          break;
        }

        case CPP14Parser::Private:
        case CPP14Parser::Protected:
        case CPP14Parser::Public: {
          setState(1675);
          accessSpecifier();
          setState(1676);
          match(CPP14Parser::Colon);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1680); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 4) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 4)) & ((1ULL << (CPP14Parser::Alignas - 4))
      | (1ULL << (CPP14Parser::Auto - 4))
      | (1ULL << (CPP14Parser::Bool - 4))
      | (1ULL << (CPP14Parser::Char - 4))
      | (1ULL << (CPP14Parser::Char16 - 4))
      | (1ULL << (CPP14Parser::Char32 - 4))
      | (1ULL << (CPP14Parser::Class - 4))
      | (1ULL << (CPP14Parser::Const - 4))
      | (1ULL << (CPP14Parser::Constexpr - 4))
      | (1ULL << (CPP14Parser::Decltype - 4))
      | (1ULL << (CPP14Parser::Double - 4))
      | (1ULL << (CPP14Parser::Enum - 4))
      | (1ULL << (CPP14Parser::Explicit - 4))
      | (1ULL << (CPP14Parser::Extern - 4))
      | (1ULL << (CPP14Parser::Float - 4))
      | (1ULL << (CPP14Parser::Friend - 4))
      | (1ULL << (CPP14Parser::Inline - 4))
      | (1ULL << (CPP14Parser::Int - 4))
      | (1ULL << (CPP14Parser::Long - 4))
      | (1ULL << (CPP14Parser::Mutable - 4))
      | (1ULL << (CPP14Parser::Operator - 4))
      | (1ULL << (CPP14Parser::Private - 4))
      | (1ULL << (CPP14Parser::Protected - 4))
      | (1ULL << (CPP14Parser::Public - 4))
      | (1ULL << (CPP14Parser::Register - 4))
      | (1ULL << (CPP14Parser::Short - 4))
      | (1ULL << (CPP14Parser::Signed - 4))
      | (1ULL << (CPP14Parser::Static - 4))
      | (1ULL << (CPP14Parser::Static_assert - 4))
      | (1ULL << (CPP14Parser::Struct - 4))
      | (1ULL << (CPP14Parser::Template - 4))
      | (1ULL << (CPP14Parser::Thread_local - 4)))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::Typedef - 68))
      | (1ULL << (CPP14Parser::Typename_ - 68))
      | (1ULL << (CPP14Parser::Union - 68))
      | (1ULL << (CPP14Parser::Unsigned - 68))
      | (1ULL << (CPP14Parser::Using - 68))
      | (1ULL << (CPP14Parser::Virtual - 68))
      | (1ULL << (CPP14Parser::Void - 68))
      | (1ULL << (CPP14Parser::Volatile - 68))
      | (1ULL << (CPP14Parser::Wchar - 68))
      | (1ULL << (CPP14Parser::LeftParen - 68))
      | (1ULL << (CPP14Parser::LeftBracket - 68))
      | (1ULL << (CPP14Parser::Star - 68))
      | (1ULL << (CPP14Parser::And - 68))
      | (1ULL << (CPP14Parser::Tilde - 68))
      | (1ULL << (CPP14Parser::AndAnd - 68))
      | (1ULL << (CPP14Parser::Colon - 68))
      | (1ULL << (CPP14Parser::Doublecolon - 68))
      | (1ULL << (CPP14Parser::Semi - 68))
      | (1ULL << (CPP14Parser::Ellipsis - 68))
      | (1ULL << (CPP14Parser::Identifier - 68)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclarationContext ------------------------------------------------------------------

CPP14Parser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::MemberdeclarationContext::Semi() {
  return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::MemberdeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::DeclSpecifierSeqContext* CPP14Parser::MemberdeclarationContext::declSpecifierSeq() {
  return getRuleContext<CPP14Parser::DeclSpecifierSeqContext>(0);
}

CPP14Parser::MemberDeclaratorListContext* CPP14Parser::MemberdeclarationContext::memberDeclaratorList() {
  return getRuleContext<CPP14Parser::MemberDeclaratorListContext>(0);
}

CPP14Parser::FunctionDefinitionContext* CPP14Parser::MemberdeclarationContext::functionDefinition() {
  return getRuleContext<CPP14Parser::FunctionDefinitionContext>(0);
}

CPP14Parser::UsingDeclarationContext* CPP14Parser::MemberdeclarationContext::usingDeclaration() {
  return getRuleContext<CPP14Parser::UsingDeclarationContext>(0);
}

CPP14Parser::StaticAssertDeclarationContext* CPP14Parser::MemberdeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CPP14Parser::StaticAssertDeclarationContext>(0);
}

CPP14Parser::TemplateDeclarationContext* CPP14Parser::MemberdeclarationContext::templateDeclaration() {
  return getRuleContext<CPP14Parser::TemplateDeclarationContext>(0);
}

CPP14Parser::AliasDeclarationContext* CPP14Parser::MemberdeclarationContext::aliasDeclaration() {
  return getRuleContext<CPP14Parser::AliasDeclarationContext>(0);
}

CPP14Parser::EmptyDeclarationContext* CPP14Parser::MemberdeclarationContext::emptyDeclaration() {
  return getRuleContext<CPP14Parser::EmptyDeclarationContext>(0);
}


size_t CPP14Parser::MemberdeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberdeclaration;
}

void CPP14Parser::MemberdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaration(this);
}

void CPP14Parser::MemberdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaration(this);
}


antlrcpp::Any CPP14Parser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMemberdeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberdeclarationContext* CPP14Parser::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 288, CPP14Parser::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1698);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1683);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx)) {
      case 1: {
        setState(1682);
        attributeSpecifierSeq();
        break;
      }

      }
      setState(1686);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx)) {
      case 1: {
        setState(1685);
        declSpecifierSeq();
        break;
      }

      }
      setState(1689);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CPP14Parser::Alignas)
        | (1ULL << CPP14Parser::Decltype)
        | (1ULL << CPP14Parser::Operator))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 79)) & ((1ULL << (CPP14Parser::LeftParen - 79))
        | (1ULL << (CPP14Parser::LeftBracket - 79))
        | (1ULL << (CPP14Parser::Star - 79))
        | (1ULL << (CPP14Parser::And - 79))
        | (1ULL << (CPP14Parser::Tilde - 79))
        | (1ULL << (CPP14Parser::AndAnd - 79))
        | (1ULL << (CPP14Parser::Colon - 79))
        | (1ULL << (CPP14Parser::Doublecolon - 79))
        | (1ULL << (CPP14Parser::Ellipsis - 79))
        | (1ULL << (CPP14Parser::Identifier - 79)))) != 0)) {
        setState(1688);
        memberDeclaratorList();
      }
      setState(1691);
      match(CPP14Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1692);
      functionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1693);
      usingDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1694);
      staticAssertDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1695);
      templateDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1696);
      aliasDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1697);
      emptyDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclaratorListContext ------------------------------------------------------------------

CPP14Parser::MemberDeclaratorListContext::MemberDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::MemberDeclaratorContext *> CPP14Parser::MemberDeclaratorListContext::memberDeclarator() {
  return getRuleContexts<CPP14Parser::MemberDeclaratorContext>();
}

CPP14Parser::MemberDeclaratorContext* CPP14Parser::MemberDeclaratorListContext::memberDeclarator(size_t i) {
  return getRuleContext<CPP14Parser::MemberDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MemberDeclaratorListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::MemberDeclaratorListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::MemberDeclaratorListContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberDeclaratorList;
}

void CPP14Parser::MemberDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDeclaratorList(this);
}

void CPP14Parser::MemberDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDeclaratorList(this);
}


antlrcpp::Any CPP14Parser::MemberDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMemberDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberDeclaratorListContext* CPP14Parser::memberDeclaratorList() {
  MemberDeclaratorListContext *_localctx = _tracker.createInstance<MemberDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 290, CPP14Parser::RuleMemberDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1700);
    memberDeclarator();
    setState(1705);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1701);
      match(CPP14Parser::Comma);
      setState(1702);
      memberDeclarator();
      setState(1707);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclaratorContext ------------------------------------------------------------------

CPP14Parser::MemberDeclaratorContext::MemberDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DeclaratorContext* CPP14Parser::MemberDeclaratorContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::VirtualSpecifierSeqContext* CPP14Parser::MemberDeclaratorContext::virtualSpecifierSeq() {
  return getRuleContext<CPP14Parser::VirtualSpecifierSeqContext>(0);
}

CPP14Parser::PureSpecifierContext* CPP14Parser::MemberDeclaratorContext::pureSpecifier() {
  return getRuleContext<CPP14Parser::PureSpecifierContext>(0);
}

CPP14Parser::BraceOrEqualInitializerContext* CPP14Parser::MemberDeclaratorContext::braceOrEqualInitializer() {
  return getRuleContext<CPP14Parser::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode* CPP14Parser::MemberDeclaratorContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::MemberDeclaratorContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::MemberDeclaratorContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::MemberDeclaratorContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::MemberDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleMemberDeclarator;
}

void CPP14Parser::MemberDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDeclarator(this);
}

void CPP14Parser::MemberDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDeclarator(this);
}


antlrcpp::Any CPP14Parser::MemberDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMemberDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemberDeclaratorContext* CPP14Parser::memberDeclarator() {
  MemberDeclaratorContext *_localctx = _tracker.createInstance<MemberDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 292, CPP14Parser::RuleMemberDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1728);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1708);
      declarator();
      setState(1718);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 238, _ctx)) {
      case 1: {
        setState(1710);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Final

        || _la == CPP14Parser::Override) {
          setState(1709);
          virtualSpecifierSeq();
        }
        setState(1713);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Assign) {
          setState(1712);
          pureSpecifier();
        }
        break;
      }

      case 2: {
        setState(1716);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::LeftBrace

        || _la == CPP14Parser::Assign) {
          setState(1715);
          braceOrEqualInitializer();
        }
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1721);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(1720);
        match(CPP14Parser::Identifier);
      }
      setState(1724);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
        setState(1723);
        attributeSpecifierSeq();
      }
      setState(1726);
      match(CPP14Parser::Colon);
      setState(1727);
      constantExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtualSpecifierSeqContext ------------------------------------------------------------------

CPP14Parser::VirtualSpecifierSeqContext::VirtualSpecifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::VirtualSpecifierContext *> CPP14Parser::VirtualSpecifierSeqContext::virtualSpecifier() {
  return getRuleContexts<CPP14Parser::VirtualSpecifierContext>();
}

CPP14Parser::VirtualSpecifierContext* CPP14Parser::VirtualSpecifierSeqContext::virtualSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::VirtualSpecifierContext>(i);
}


size_t CPP14Parser::VirtualSpecifierSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleVirtualSpecifierSeq;
}

void CPP14Parser::VirtualSpecifierSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtualSpecifierSeq(this);
}

void CPP14Parser::VirtualSpecifierSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtualSpecifierSeq(this);
}


antlrcpp::Any CPP14Parser::VirtualSpecifierSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitVirtualSpecifierSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::VirtualSpecifierSeqContext* CPP14Parser::virtualSpecifierSeq() {
  VirtualSpecifierSeqContext *_localctx = _tracker.createInstance<VirtualSpecifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 294, CPP14Parser::RuleVirtualSpecifierSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1731); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1730);
      virtualSpecifier();
      setState(1733); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CPP14Parser::Final

    || _la == CPP14Parser::Override);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtualSpecifierContext ------------------------------------------------------------------

CPP14Parser::VirtualSpecifierContext::VirtualSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::VirtualSpecifierContext::Override() {
  return getToken(CPP14Parser::Override, 0);
}

tree::TerminalNode* CPP14Parser::VirtualSpecifierContext::Final() {
  return getToken(CPP14Parser::Final, 0);
}


size_t CPP14Parser::VirtualSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleVirtualSpecifier;
}

void CPP14Parser::VirtualSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtualSpecifier(this);
}

void CPP14Parser::VirtualSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtualSpecifier(this);
}


antlrcpp::Any CPP14Parser::VirtualSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitVirtualSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::VirtualSpecifierContext* CPP14Parser::virtualSpecifier() {
  VirtualSpecifierContext *_localctx = _tracker.createInstance<VirtualSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 296, CPP14Parser::RuleVirtualSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1735);
    _la = _input->LA(1);
    if (!(_la == CPP14Parser::Final

    || _la == CPP14Parser::Override)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PureSpecifierContext ------------------------------------------------------------------

CPP14Parser::PureSpecifierContext::PureSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::PureSpecifierContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::PureSpecifierContext::OctalLiteral() {
  return getToken(CPP14Parser::OctalLiteral, 0);
}


size_t CPP14Parser::PureSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RulePureSpecifier;
}

void CPP14Parser::PureSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPureSpecifier(this);
}

void CPP14Parser::PureSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPureSpecifier(this);
}


antlrcpp::Any CPP14Parser::PureSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitPureSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::PureSpecifierContext* CPP14Parser::pureSpecifier() {
  PureSpecifierContext *_localctx = _tracker.createInstance<PureSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 298, CPP14Parser::RulePureSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1737);
    match(CPP14Parser::Assign);
    setState(1738);
    dynamic_cast<PureSpecifierContext *>(_localctx)->val = match(CPP14Parser::OctalLiteral);
    if((dynamic_cast<PureSpecifierContext *>(_localctx)->val != nullptr ? dynamic_cast<PureSpecifierContext *>(_localctx)->val->getText() : "") == "0") throw new InputMismatchException(this);
    		
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseClauseContext ------------------------------------------------------------------

CPP14Parser::BaseClauseContext::BaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::BaseClauseContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::BaseSpecifierListContext* CPP14Parser::BaseClauseContext::baseSpecifierList() {
  return getRuleContext<CPP14Parser::BaseSpecifierListContext>(0);
}


size_t CPP14Parser::BaseClauseContext::getRuleIndex() const {
  return CPP14Parser::RuleBaseClause;
}

void CPP14Parser::BaseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseClause(this);
}

void CPP14Parser::BaseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseClause(this);
}


antlrcpp::Any CPP14Parser::BaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBaseClause(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BaseClauseContext* CPP14Parser::baseClause() {
  BaseClauseContext *_localctx = _tracker.createInstance<BaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 300, CPP14Parser::RuleBaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1741);
    match(CPP14Parser::Colon);
    setState(1742);
    baseSpecifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseSpecifierListContext ------------------------------------------------------------------

CPP14Parser::BaseSpecifierListContext::BaseSpecifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::BaseSpecifierContext *> CPP14Parser::BaseSpecifierListContext::baseSpecifier() {
  return getRuleContexts<CPP14Parser::BaseSpecifierContext>();
}

CPP14Parser::BaseSpecifierContext* CPP14Parser::BaseSpecifierListContext::baseSpecifier(size_t i) {
  return getRuleContext<CPP14Parser::BaseSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BaseSpecifierListContext::Ellipsis() {
  return getTokens(CPP14Parser::Ellipsis);
}

tree::TerminalNode* CPP14Parser::BaseSpecifierListContext::Ellipsis(size_t i) {
  return getToken(CPP14Parser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BaseSpecifierListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::BaseSpecifierListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::BaseSpecifierListContext::getRuleIndex() const {
  return CPP14Parser::RuleBaseSpecifierList;
}

void CPP14Parser::BaseSpecifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseSpecifierList(this);
}

void CPP14Parser::BaseSpecifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseSpecifierList(this);
}


antlrcpp::Any CPP14Parser::BaseSpecifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBaseSpecifierList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BaseSpecifierListContext* CPP14Parser::baseSpecifierList() {
  BaseSpecifierListContext *_localctx = _tracker.createInstance<BaseSpecifierListContext>(_ctx, getState());
  enterRule(_localctx, 302, CPP14Parser::RuleBaseSpecifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1744);
    baseSpecifier();
    setState(1746);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1745);
      match(CPP14Parser::Ellipsis);
    }
    setState(1755);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1748);
      match(CPP14Parser::Comma);
      setState(1749);
      baseSpecifier();
      setState(1751);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1750);
        match(CPP14Parser::Ellipsis);
      }
      setState(1757);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseSpecifierContext ------------------------------------------------------------------

CPP14Parser::BaseSpecifierContext::BaseSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::BaseTypeSpecifierContext* CPP14Parser::BaseSpecifierContext::baseTypeSpecifier() {
  return getRuleContext<CPP14Parser::BaseTypeSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::BaseSpecifierContext::Virtual() {
  return getToken(CPP14Parser::Virtual, 0);
}

CPP14Parser::AccessSpecifierContext* CPP14Parser::BaseSpecifierContext::accessSpecifier() {
  return getRuleContext<CPP14Parser::AccessSpecifierContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::BaseSpecifierContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}


size_t CPP14Parser::BaseSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleBaseSpecifier;
}

void CPP14Parser::BaseSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseSpecifier(this);
}

void CPP14Parser::BaseSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseSpecifier(this);
}


antlrcpp::Any CPP14Parser::BaseSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBaseSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BaseSpecifierContext* CPP14Parser::baseSpecifier() {
  BaseSpecifierContext *_localctx = _tracker.createInstance<BaseSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 304, CPP14Parser::RuleBaseSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1759);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
      setState(1758);
      attributeSpecifierSeq();
    }
    setState(1773);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Decltype:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        setState(1761);
        baseTypeSpecifier();
        break;
      }

      case CPP14Parser::Virtual: {
        setState(1762);
        match(CPP14Parser::Virtual);
        setState(1764);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Private)
          | (1ULL << CPP14Parser::Protected)
          | (1ULL << CPP14Parser::Public))) != 0)) {
          setState(1763);
          accessSpecifier();
        }
        setState(1766);
        baseTypeSpecifier();
        break;
      }

      case CPP14Parser::Private:
      case CPP14Parser::Protected:
      case CPP14Parser::Public: {
        setState(1767);
        accessSpecifier();
        setState(1769);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Virtual) {
          setState(1768);
          match(CPP14Parser::Virtual);
        }
        setState(1771);
        baseTypeSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrDeclTypeContext ------------------------------------------------------------------

CPP14Parser::ClassOrDeclTypeContext::ClassOrDeclTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassNameContext* CPP14Parser::ClassOrDeclTypeContext::className() {
  return getRuleContext<CPP14Parser::ClassNameContext>(0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::ClassOrDeclTypeContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

CPP14Parser::DecltypeSpecifierContext* CPP14Parser::ClassOrDeclTypeContext::decltypeSpecifier() {
  return getRuleContext<CPP14Parser::DecltypeSpecifierContext>(0);
}


size_t CPP14Parser::ClassOrDeclTypeContext::getRuleIndex() const {
  return CPP14Parser::RuleClassOrDeclType;
}

void CPP14Parser::ClassOrDeclTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrDeclType(this);
}

void CPP14Parser::ClassOrDeclTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrDeclType(this);
}


antlrcpp::Any CPP14Parser::ClassOrDeclTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitClassOrDeclType(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ClassOrDeclTypeContext* CPP14Parser::classOrDeclType() {
  ClassOrDeclTypeContext *_localctx = _tracker.createInstance<ClassOrDeclTypeContext>(_ctx, getState());
  enterRule(_localctx, 306, CPP14Parser::RuleClassOrDeclType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1780);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1776);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx)) {
      case 1: {
        setState(1775);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1778);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1779);
      decltypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeSpecifierContext ------------------------------------------------------------------

CPP14Parser::BaseTypeSpecifierContext::BaseTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassOrDeclTypeContext* CPP14Parser::BaseTypeSpecifierContext::classOrDeclType() {
  return getRuleContext<CPP14Parser::ClassOrDeclTypeContext>(0);
}


size_t CPP14Parser::BaseTypeSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleBaseTypeSpecifier;
}

void CPP14Parser::BaseTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseTypeSpecifier(this);
}

void CPP14Parser::BaseTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseTypeSpecifier(this);
}


antlrcpp::Any CPP14Parser::BaseTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitBaseTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::BaseTypeSpecifierContext* CPP14Parser::baseTypeSpecifier() {
  BaseTypeSpecifierContext *_localctx = _tracker.createInstance<BaseTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 308, CPP14Parser::RuleBaseTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1782);
    classOrDeclType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSpecifierContext ------------------------------------------------------------------

CPP14Parser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::AccessSpecifierContext::Private() {
  return getToken(CPP14Parser::Private, 0);
}

tree::TerminalNode* CPP14Parser::AccessSpecifierContext::Protected() {
  return getToken(CPP14Parser::Protected, 0);
}

tree::TerminalNode* CPP14Parser::AccessSpecifierContext::Public() {
  return getToken(CPP14Parser::Public, 0);
}


size_t CPP14Parser::AccessSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleAccessSpecifier;
}

void CPP14Parser::AccessSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessSpecifier(this);
}

void CPP14Parser::AccessSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessSpecifier(this);
}


antlrcpp::Any CPP14Parser::AccessSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitAccessSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::AccessSpecifierContext* CPP14Parser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 310, CPP14Parser::RuleAccessSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1784);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Private)
      | (1ULL << CPP14Parser::Protected)
      | (1ULL << CPP14Parser::Public))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionFunctionIdContext ------------------------------------------------------------------

CPP14Parser::ConversionFunctionIdContext::ConversionFunctionIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ConversionFunctionIdContext::Operator() {
  return getToken(CPP14Parser::Operator, 0);
}

CPP14Parser::ConversionTypeIdContext* CPP14Parser::ConversionFunctionIdContext::conversionTypeId() {
  return getRuleContext<CPP14Parser::ConversionTypeIdContext>(0);
}


size_t CPP14Parser::ConversionFunctionIdContext::getRuleIndex() const {
  return CPP14Parser::RuleConversionFunctionId;
}

void CPP14Parser::ConversionFunctionIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionFunctionId(this);
}

void CPP14Parser::ConversionFunctionIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionFunctionId(this);
}


antlrcpp::Any CPP14Parser::ConversionFunctionIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitConversionFunctionId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConversionFunctionIdContext* CPP14Parser::conversionFunctionId() {
  ConversionFunctionIdContext *_localctx = _tracker.createInstance<ConversionFunctionIdContext>(_ctx, getState());
  enterRule(_localctx, 312, CPP14Parser::RuleConversionFunctionId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1786);
    match(CPP14Parser::Operator);
    setState(1787);
    conversionTypeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionTypeIdContext ------------------------------------------------------------------

CPP14Parser::ConversionTypeIdContext::ConversionTypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypeSpecifierSeqContext* CPP14Parser::ConversionTypeIdContext::typeSpecifierSeq() {
  return getRuleContext<CPP14Parser::TypeSpecifierSeqContext>(0);
}

CPP14Parser::ConversionDeclaratorContext* CPP14Parser::ConversionTypeIdContext::conversionDeclarator() {
  return getRuleContext<CPP14Parser::ConversionDeclaratorContext>(0);
}


size_t CPP14Parser::ConversionTypeIdContext::getRuleIndex() const {
  return CPP14Parser::RuleConversionTypeId;
}

void CPP14Parser::ConversionTypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionTypeId(this);
}

void CPP14Parser::ConversionTypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionTypeId(this);
}


antlrcpp::Any CPP14Parser::ConversionTypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitConversionTypeId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConversionTypeIdContext* CPP14Parser::conversionTypeId() {
  ConversionTypeIdContext *_localctx = _tracker.createInstance<ConversionTypeIdContext>(_ctx, getState());
  enterRule(_localctx, 314, CPP14Parser::RuleConversionTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1789);
    typeSpecifierSeq();
    setState(1791);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
    case 1: {
      setState(1790);
      conversionDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionDeclaratorContext ------------------------------------------------------------------

CPP14Parser::ConversionDeclaratorContext::ConversionDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::PointerOperatorContext* CPP14Parser::ConversionDeclaratorContext::pointerOperator() {
  return getRuleContext<CPP14Parser::PointerOperatorContext>(0);
}

CPP14Parser::ConversionDeclaratorContext* CPP14Parser::ConversionDeclaratorContext::conversionDeclarator() {
  return getRuleContext<CPP14Parser::ConversionDeclaratorContext>(0);
}


size_t CPP14Parser::ConversionDeclaratorContext::getRuleIndex() const {
  return CPP14Parser::RuleConversionDeclarator;
}

void CPP14Parser::ConversionDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionDeclarator(this);
}

void CPP14Parser::ConversionDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionDeclarator(this);
}


antlrcpp::Any CPP14Parser::ConversionDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitConversionDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConversionDeclaratorContext* CPP14Parser::conversionDeclarator() {
  ConversionDeclaratorContext *_localctx = _tracker.createInstance<ConversionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 316, CPP14Parser::RuleConversionDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1793);
    pointerOperator();
    setState(1795);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, _ctx)) {
    case 1: {
      setState(1794);
      conversionDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorInitializerContext ------------------------------------------------------------------

CPP14Parser::ConstructorInitializerContext::ConstructorInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ConstructorInitializerContext::Colon() {
  return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::MemInitializerListContext* CPP14Parser::ConstructorInitializerContext::memInitializerList() {
  return getRuleContext<CPP14Parser::MemInitializerListContext>(0);
}


size_t CPP14Parser::ConstructorInitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleConstructorInitializer;
}

void CPP14Parser::ConstructorInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorInitializer(this);
}

void CPP14Parser::ConstructorInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorInitializer(this);
}


antlrcpp::Any CPP14Parser::ConstructorInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitConstructorInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ConstructorInitializerContext* CPP14Parser::constructorInitializer() {
  ConstructorInitializerContext *_localctx = _tracker.createInstance<ConstructorInitializerContext>(_ctx, getState());
  enterRule(_localctx, 318, CPP14Parser::RuleConstructorInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1797);
    match(CPP14Parser::Colon);
    setState(1798);
    memInitializerList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemInitializerListContext ------------------------------------------------------------------

CPP14Parser::MemInitializerListContext::MemInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::MemInitializerContext *> CPP14Parser::MemInitializerListContext::memInitializer() {
  return getRuleContexts<CPP14Parser::MemInitializerContext>();
}

CPP14Parser::MemInitializerContext* CPP14Parser::MemInitializerListContext::memInitializer(size_t i) {
  return getRuleContext<CPP14Parser::MemInitializerContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MemInitializerListContext::Ellipsis() {
  return getTokens(CPP14Parser::Ellipsis);
}

tree::TerminalNode* CPP14Parser::MemInitializerListContext::Ellipsis(size_t i) {
  return getToken(CPP14Parser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::MemInitializerListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::MemInitializerListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::MemInitializerListContext::getRuleIndex() const {
  return CPP14Parser::RuleMemInitializerList;
}

void CPP14Parser::MemInitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemInitializerList(this);
}

void CPP14Parser::MemInitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemInitializerList(this);
}


antlrcpp::Any CPP14Parser::MemInitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMemInitializerList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemInitializerListContext* CPP14Parser::memInitializerList() {
  MemInitializerListContext *_localctx = _tracker.createInstance<MemInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 320, CPP14Parser::RuleMemInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1800);
    memInitializer();
    setState(1802);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1801);
      match(CPP14Parser::Ellipsis);
    }
    setState(1811);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1804);
      match(CPP14Parser::Comma);
      setState(1805);
      memInitializer();
      setState(1807);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1806);
        match(CPP14Parser::Ellipsis);
      }
      setState(1813);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemInitializerContext ------------------------------------------------------------------

CPP14Parser::MemInitializerContext::MemInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::MeminitializeridContext* CPP14Parser::MemInitializerContext::meminitializerid() {
  return getRuleContext<CPP14Parser::MeminitializeridContext>(0);
}

tree::TerminalNode* CPP14Parser::MemInitializerContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::MemInitializerContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::BracedInitListContext* CPP14Parser::MemInitializerContext::bracedInitList() {
  return getRuleContext<CPP14Parser::BracedInitListContext>(0);
}

CPP14Parser::ExpressionListContext* CPP14Parser::MemInitializerContext::expressionList() {
  return getRuleContext<CPP14Parser::ExpressionListContext>(0);
}


size_t CPP14Parser::MemInitializerContext::getRuleIndex() const {
  return CPP14Parser::RuleMemInitializer;
}

void CPP14Parser::MemInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemInitializer(this);
}

void CPP14Parser::MemInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemInitializer(this);
}


antlrcpp::Any CPP14Parser::MemInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMemInitializer(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MemInitializerContext* CPP14Parser::memInitializer() {
  MemInitializerContext *_localctx = _tracker.createInstance<MemInitializerContext>(_ctx, getState());
  enterRule(_localctx, 322, CPP14Parser::RuleMemInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1814);
    meminitializerid();
    setState(1821);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::LeftParen: {
        setState(1815);
        match(CPP14Parser::LeftParen);
        setState(1817);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
          | (1ULL << CPP14Parser::Alignof)
          | (1ULL << CPP14Parser::Auto)
          | (1ULL << CPP14Parser::Bool)
          | (1ULL << CPP14Parser::Char)
          | (1ULL << CPP14Parser::Char16)
          | (1ULL << CPP14Parser::Char32)
          | (1ULL << CPP14Parser::Const_cast)
          | (1ULL << CPP14Parser::Decltype)
          | (1ULL << CPP14Parser::Delete)
          | (1ULL << CPP14Parser::Double)
          | (1ULL << CPP14Parser::Dynamic_cast)
          | (1ULL << CPP14Parser::Float)
          | (1ULL << CPP14Parser::Int)
          | (1ULL << CPP14Parser::Long)
          | (1ULL << CPP14Parser::New)
          | (1ULL << CPP14Parser::Noexcept)
          | (1ULL << CPP14Parser::Operator)
          | (1ULL << CPP14Parser::Reinterpret_cast)
          | (1ULL << CPP14Parser::Short)
          | (1ULL << CPP14Parser::Signed)
          | (1ULL << CPP14Parser::Sizeof)
          | (1ULL << CPP14Parser::Static_cast)
          | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
          | (1ULL << (CPP14Parser::Typeid_ - 65))
          | (1ULL << (CPP14Parser::Typename_ - 65))
          | (1ULL << (CPP14Parser::Unsigned - 65))
          | (1ULL << (CPP14Parser::Void - 65))
          | (1ULL << (CPP14Parser::Wchar - 65))
          | (1ULL << (CPP14Parser::LeftParen - 65))
          | (1ULL << (CPP14Parser::LeftBracket - 65))
          | (1ULL << (CPP14Parser::LeftBrace - 65))
          | (1ULL << (CPP14Parser::Plus - 65))
          | (1ULL << (CPP14Parser::Minus - 65))
          | (1ULL << (CPP14Parser::Star - 65))
          | (1ULL << (CPP14Parser::And - 65))
          | (1ULL << (CPP14Parser::Or - 65))
          | (1ULL << (CPP14Parser::Tilde - 65))
          | (1ULL << (CPP14Parser::Not - 65))
          | (1ULL << (CPP14Parser::PlusPlus - 65))
          | (1ULL << (CPP14Parser::MinusMinus - 65))
          | (1ULL << (CPP14Parser::Doublecolon - 65))
          | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
          setState(1816);
          expressionList();
        }
        setState(1819);
        match(CPP14Parser::RightParen);
        break;
      }

      case CPP14Parser::LeftBrace: {
        setState(1820);
        bracedInitList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

CPP14Parser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::ClassOrDeclTypeContext* CPP14Parser::MeminitializeridContext::classOrDeclType() {
  return getRuleContext<CPP14Parser::ClassOrDeclTypeContext>(0);
}

tree::TerminalNode* CPP14Parser::MeminitializeridContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::MeminitializeridContext::getRuleIndex() const {
  return CPP14Parser::RuleMeminitializerid;
}

void CPP14Parser::MeminitializeridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerid(this);
}

void CPP14Parser::MeminitializeridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerid(this);
}


antlrcpp::Any CPP14Parser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitMeminitializerid(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::MeminitializeridContext* CPP14Parser::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 324, CPP14Parser::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1825);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1823);
      classOrDeclType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1824);
      match(CPP14Parser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorFunctionIdContext ------------------------------------------------------------------

CPP14Parser::OperatorFunctionIdContext::OperatorFunctionIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::OperatorFunctionIdContext::Operator() {
  return getToken(CPP14Parser::Operator, 0);
}

CPP14Parser::TheOperatorContext* CPP14Parser::OperatorFunctionIdContext::theOperator() {
  return getRuleContext<CPP14Parser::TheOperatorContext>(0);
}


size_t CPP14Parser::OperatorFunctionIdContext::getRuleIndex() const {
  return CPP14Parser::RuleOperatorFunctionId;
}

void CPP14Parser::OperatorFunctionIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorFunctionId(this);
}

void CPP14Parser::OperatorFunctionIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorFunctionId(this);
}


antlrcpp::Any CPP14Parser::OperatorFunctionIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitOperatorFunctionId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::OperatorFunctionIdContext* CPP14Parser::operatorFunctionId() {
  OperatorFunctionIdContext *_localctx = _tracker.createInstance<OperatorFunctionIdContext>(_ctx, getState());
  enterRule(_localctx, 326, CPP14Parser::RuleOperatorFunctionId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1827);
    match(CPP14Parser::Operator);
    setState(1828);
    theOperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralOperatorIdContext ------------------------------------------------------------------

CPP14Parser::LiteralOperatorIdContext::LiteralOperatorIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::LiteralOperatorIdContext::Operator() {
  return getToken(CPP14Parser::Operator, 0);
}

tree::TerminalNode* CPP14Parser::LiteralOperatorIdContext::StringLiteral() {
  return getToken(CPP14Parser::StringLiteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralOperatorIdContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::LiteralOperatorIdContext::UserDefinedStringLiteral() {
  return getToken(CPP14Parser::UserDefinedStringLiteral, 0);
}


size_t CPP14Parser::LiteralOperatorIdContext::getRuleIndex() const {
  return CPP14Parser::RuleLiteralOperatorId;
}

void CPP14Parser::LiteralOperatorIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralOperatorId(this);
}

void CPP14Parser::LiteralOperatorIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralOperatorId(this);
}


antlrcpp::Any CPP14Parser::LiteralOperatorIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitLiteralOperatorId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::LiteralOperatorIdContext* CPP14Parser::literalOperatorId() {
  LiteralOperatorIdContext *_localctx = _tracker.createInstance<LiteralOperatorIdContext>(_ctx, getState());
  enterRule(_localctx, 328, CPP14Parser::RuleLiteralOperatorId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1830);
    match(CPP14Parser::Operator);
    setState(1834);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::StringLiteral: {
        setState(1831);
        match(CPP14Parser::StringLiteral);
        setState(1832);
        match(CPP14Parser::Identifier);
        break;
      }

      case CPP14Parser::UserDefinedStringLiteral: {
        setState(1833);
        match(CPP14Parser::UserDefinedStringLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateDeclarationContext ------------------------------------------------------------------

CPP14Parser::TemplateDeclarationContext::TemplateDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TemplateDeclarationContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::TemplateDeclarationContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

CPP14Parser::TemplateparameterListContext* CPP14Parser::TemplateDeclarationContext::templateparameterList() {
  return getRuleContext<CPP14Parser::TemplateparameterListContext>(0);
}

tree::TerminalNode* CPP14Parser::TemplateDeclarationContext::Greater() {
  return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::TemplateDeclarationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}


size_t CPP14Parser::TemplateDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateDeclaration;
}

void CPP14Parser::TemplateDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateDeclaration(this);
}

void CPP14Parser::TemplateDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateDeclaration(this);
}


antlrcpp::Any CPP14Parser::TemplateDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateDeclarationContext* CPP14Parser::templateDeclaration() {
  TemplateDeclarationContext *_localctx = _tracker.createInstance<TemplateDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 330, CPP14Parser::RuleTemplateDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1836);
    match(CPP14Parser::Template);
    setState(1837);
    match(CPP14Parser::Less);
    setState(1838);
    templateparameterList();
    setState(1839);
    match(CPP14Parser::Greater);
    setState(1840);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterListContext ------------------------------------------------------------------

CPP14Parser::TemplateparameterListContext::TemplateparameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::TemplateParameterContext *> CPP14Parser::TemplateparameterListContext::templateParameter() {
  return getRuleContexts<CPP14Parser::TemplateParameterContext>();
}

CPP14Parser::TemplateParameterContext* CPP14Parser::TemplateparameterListContext::templateParameter(size_t i) {
  return getRuleContext<CPP14Parser::TemplateParameterContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::TemplateparameterListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::TemplateparameterListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::TemplateparameterListContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateparameterList;
}

void CPP14Parser::TemplateparameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameterList(this);
}

void CPP14Parser::TemplateparameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameterList(this);
}


antlrcpp::Any CPP14Parser::TemplateparameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateparameterList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateparameterListContext* CPP14Parser::templateparameterList() {
  TemplateparameterListContext *_localctx = _tracker.createInstance<TemplateparameterListContext>(_ctx, getState());
  enterRule(_localctx, 332, CPP14Parser::RuleTemplateparameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1842);
    templateParameter();
    setState(1847);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1843);
      match(CPP14Parser::Comma);
      setState(1844);
      templateParameter();
      setState(1849);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateParameterContext ------------------------------------------------------------------

CPP14Parser::TemplateParameterContext::TemplateParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypeParameterContext* CPP14Parser::TemplateParameterContext::typeParameter() {
  return getRuleContext<CPP14Parser::TypeParameterContext>(0);
}

CPP14Parser::ParameterDeclarationContext* CPP14Parser::TemplateParameterContext::parameterDeclaration() {
  return getRuleContext<CPP14Parser::ParameterDeclarationContext>(0);
}


size_t CPP14Parser::TemplateParameterContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateParameter;
}

void CPP14Parser::TemplateParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateParameter(this);
}

void CPP14Parser::TemplateParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateParameter(this);
}


antlrcpp::Any CPP14Parser::TemplateParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateParameter(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateParameterContext* CPP14Parser::templateParameter() {
  TemplateParameterContext *_localctx = _tracker.createInstance<TemplateParameterContext>(_ctx, getState());
  enterRule(_localctx, 334, CPP14Parser::RuleTemplateParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1852);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1850);
      typeParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1851);
      parameterDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

CPP14Parser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Class() {
  return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Typename_() {
  return getToken(CPP14Parser::Typename_, 0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::TheTypeIdContext* CPP14Parser::TypeParameterContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

CPP14Parser::TemplateparameterListContext* CPP14Parser::TypeParameterContext::templateparameterList() {
  return getRuleContext<CPP14Parser::TemplateparameterListContext>(0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Greater() {
  return getToken(CPP14Parser::Greater, 0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::TypeParameterContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TypeParameterContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeParameter;
}

void CPP14Parser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void CPP14Parser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}


antlrcpp::Any CPP14Parser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeParameterContext* CPP14Parser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 336, CPP14Parser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1863);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Class:
      case CPP14Parser::Template: {
        setState(1859);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Template) {
          setState(1854);
          match(CPP14Parser::Template);
          setState(1855);
          match(CPP14Parser::Less);
          setState(1856);
          templateparameterList();
          setState(1857);
          match(CPP14Parser::Greater);
        }
        setState(1861);
        match(CPP14Parser::Class);
        break;
      }

      case CPP14Parser::Typename_: {
        setState(1862);
        match(CPP14Parser::Typename_);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(1876);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      setState(1866);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1865);
        match(CPP14Parser::Ellipsis);
      }
      setState(1869);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(1868);
        match(CPP14Parser::Identifier);
      }
      break;
    }

    case 2: {
      setState(1872);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Identifier) {
        setState(1871);
        match(CPP14Parser::Identifier);
      }
      setState(1874);
      match(CPP14Parser::Assign);
      setState(1875);
      theTypeId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTemplateIdContext ------------------------------------------------------------------

CPP14Parser::SimpleTemplateIdContext::SimpleTemplateIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TemplateNameContext* CPP14Parser::SimpleTemplateIdContext::templateName() {
  return getRuleContext<CPP14Parser::TemplateNameContext>(0);
}

tree::TerminalNode* CPP14Parser::SimpleTemplateIdContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::SimpleTemplateIdContext::Greater() {
  return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::TemplateArgumentListContext* CPP14Parser::SimpleTemplateIdContext::templateArgumentList() {
  return getRuleContext<CPP14Parser::TemplateArgumentListContext>(0);
}


size_t CPP14Parser::SimpleTemplateIdContext::getRuleIndex() const {
  return CPP14Parser::RuleSimpleTemplateId;
}

void CPP14Parser::SimpleTemplateIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTemplateId(this);
}

void CPP14Parser::SimpleTemplateIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTemplateId(this);
}


antlrcpp::Any CPP14Parser::SimpleTemplateIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitSimpleTemplateId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::simpleTemplateId() {
  SimpleTemplateIdContext *_localctx = _tracker.createInstance<SimpleTemplateIdContext>(_ctx, getState());
  enterRule(_localctx, 338, CPP14Parser::RuleSimpleTemplateId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1878);
    templateName();
    setState(1879);
    match(CPP14Parser::Less);
    setState(1881);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::Struct)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typeid_ - 69))
      | (1ULL << (CPP14Parser::Typename_ - 69))
      | (1ULL << (CPP14Parser::Union - 69))
      | (1ULL << (CPP14Parser::Unsigned - 69))
      | (1ULL << (CPP14Parser::Void - 69))
      | (1ULL << (CPP14Parser::Volatile - 69))
      | (1ULL << (CPP14Parser::Wchar - 69))
      | (1ULL << (CPP14Parser::LeftParen - 69))
      | (1ULL << (CPP14Parser::LeftBracket - 69))
      | (1ULL << (CPP14Parser::Plus - 69))
      | (1ULL << (CPP14Parser::Minus - 69))
      | (1ULL << (CPP14Parser::Star - 69))
      | (1ULL << (CPP14Parser::And - 69))
      | (1ULL << (CPP14Parser::Or - 69))
      | (1ULL << (CPP14Parser::Tilde - 69))
      | (1ULL << (CPP14Parser::Not - 69))
      | (1ULL << (CPP14Parser::PlusPlus - 69))
      | (1ULL << (CPP14Parser::MinusMinus - 69))
      | (1ULL << (CPP14Parser::Doublecolon - 69))
      | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
      setState(1880);
      templateArgumentList();
    }
    setState(1883);
    match(CPP14Parser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateIdContext ------------------------------------------------------------------

CPP14Parser::TemplateIdContext::TemplateIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::TemplateIdContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* CPP14Parser::TemplateIdContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::TemplateIdContext::Greater() {
  return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::OperatorFunctionIdContext* CPP14Parser::TemplateIdContext::operatorFunctionId() {
  return getRuleContext<CPP14Parser::OperatorFunctionIdContext>(0);
}

CPP14Parser::LiteralOperatorIdContext* CPP14Parser::TemplateIdContext::literalOperatorId() {
  return getRuleContext<CPP14Parser::LiteralOperatorIdContext>(0);
}

CPP14Parser::TemplateArgumentListContext* CPP14Parser::TemplateIdContext::templateArgumentList() {
  return getRuleContext<CPP14Parser::TemplateArgumentListContext>(0);
}


size_t CPP14Parser::TemplateIdContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateId;
}

void CPP14Parser::TemplateIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateId(this);
}

void CPP14Parser::TemplateIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateId(this);
}


antlrcpp::Any CPP14Parser::TemplateIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateId(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateIdContext* CPP14Parser::templateId() {
  TemplateIdContext *_localctx = _tracker.createInstance<TemplateIdContext>(_ctx, getState());
  enterRule(_localctx, 340, CPP14Parser::RuleTemplateId);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1896);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1885);
        simpleTemplateId();
        break;
      }

      case CPP14Parser::Operator: {
        enterOuterAlt(_localctx, 2);
        setState(1888);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
        case 1: {
          setState(1886);
          operatorFunctionId();
          break;
        }

        case 2: {
          setState(1887);
          literalOperatorId();
          break;
        }

        }
        setState(1890);
        match(CPP14Parser::Less);
        setState(1892);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
          | (1ULL << CPP14Parser::Alignof)
          | (1ULL << CPP14Parser::Auto)
          | (1ULL << CPP14Parser::Bool)
          | (1ULL << CPP14Parser::Char)
          | (1ULL << CPP14Parser::Char16)
          | (1ULL << CPP14Parser::Char32)
          | (1ULL << CPP14Parser::Class)
          | (1ULL << CPP14Parser::Const)
          | (1ULL << CPP14Parser::Const_cast)
          | (1ULL << CPP14Parser::Decltype)
          | (1ULL << CPP14Parser::Delete)
          | (1ULL << CPP14Parser::Double)
          | (1ULL << CPP14Parser::Dynamic_cast)
          | (1ULL << CPP14Parser::Enum)
          | (1ULL << CPP14Parser::Float)
          | (1ULL << CPP14Parser::Int)
          | (1ULL << CPP14Parser::Long)
          | (1ULL << CPP14Parser::New)
          | (1ULL << CPP14Parser::Noexcept)
          | (1ULL << CPP14Parser::Operator)
          | (1ULL << CPP14Parser::Reinterpret_cast)
          | (1ULL << CPP14Parser::Short)
          | (1ULL << CPP14Parser::Signed)
          | (1ULL << CPP14Parser::Sizeof)
          | (1ULL << CPP14Parser::Static_cast)
          | (1ULL << CPP14Parser::Struct)
          | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 69)) & ((1ULL << (CPP14Parser::Typeid_ - 69))
          | (1ULL << (CPP14Parser::Typename_ - 69))
          | (1ULL << (CPP14Parser::Union - 69))
          | (1ULL << (CPP14Parser::Unsigned - 69))
          | (1ULL << (CPP14Parser::Void - 69))
          | (1ULL << (CPP14Parser::Volatile - 69))
          | (1ULL << (CPP14Parser::Wchar - 69))
          | (1ULL << (CPP14Parser::LeftParen - 69))
          | (1ULL << (CPP14Parser::LeftBracket - 69))
          | (1ULL << (CPP14Parser::Plus - 69))
          | (1ULL << (CPP14Parser::Minus - 69))
          | (1ULL << (CPP14Parser::Star - 69))
          | (1ULL << (CPP14Parser::And - 69))
          | (1ULL << (CPP14Parser::Or - 69))
          | (1ULL << (CPP14Parser::Tilde - 69))
          | (1ULL << (CPP14Parser::Not - 69))
          | (1ULL << (CPP14Parser::PlusPlus - 69))
          | (1ULL << (CPP14Parser::MinusMinus - 69))
          | (1ULL << (CPP14Parser::Doublecolon - 69))
          | (1ULL << (CPP14Parser::Identifier - 69)))) != 0)) {
          setState(1891);
          templateArgumentList();
        }
        setState(1894);
        match(CPP14Parser::Greater);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateNameContext ------------------------------------------------------------------

CPP14Parser::TemplateNameContext::TemplateNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TemplateNameContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TemplateNameContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateName;
}

void CPP14Parser::TemplateNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateName(this);
}

void CPP14Parser::TemplateNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateName(this);
}


antlrcpp::Any CPP14Parser::TemplateNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateName(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateNameContext* CPP14Parser::templateName() {
  TemplateNameContext *_localctx = _tracker.createInstance<TemplateNameContext>(_ctx, getState());
  enterRule(_localctx, 342, CPP14Parser::RuleTemplateName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1898);
    match(CPP14Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateArgumentListContext ------------------------------------------------------------------

CPP14Parser::TemplateArgumentListContext::TemplateArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::TemplateArgumentContext *> CPP14Parser::TemplateArgumentListContext::templateArgument() {
  return getRuleContexts<CPP14Parser::TemplateArgumentContext>();
}

CPP14Parser::TemplateArgumentContext* CPP14Parser::TemplateArgumentListContext::templateArgument(size_t i) {
  return getRuleContext<CPP14Parser::TemplateArgumentContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::TemplateArgumentListContext::Ellipsis() {
  return getTokens(CPP14Parser::Ellipsis);
}

tree::TerminalNode* CPP14Parser::TemplateArgumentListContext::Ellipsis(size_t i) {
  return getToken(CPP14Parser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::TemplateArgumentListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::TemplateArgumentListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::TemplateArgumentListContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateArgumentList;
}

void CPP14Parser::TemplateArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateArgumentList(this);
}

void CPP14Parser::TemplateArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateArgumentList(this);
}


antlrcpp::Any CPP14Parser::TemplateArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateArgumentList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateArgumentListContext* CPP14Parser::templateArgumentList() {
  TemplateArgumentListContext *_localctx = _tracker.createInstance<TemplateArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 344, CPP14Parser::RuleTemplateArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1900);
    templateArgument();
    setState(1902);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1901);
      match(CPP14Parser::Ellipsis);
    }
    setState(1911);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1904);
      match(CPP14Parser::Comma);
      setState(1905);
      templateArgument();
      setState(1907);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1906);
        match(CPP14Parser::Ellipsis);
      }
      setState(1913);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateArgumentContext ------------------------------------------------------------------

CPP14Parser::TemplateArgumentContext::TemplateArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TheTypeIdContext* CPP14Parser::TemplateArgumentContext::theTypeId() {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::TemplateArgumentContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

CPP14Parser::IdExpressionContext* CPP14Parser::TemplateArgumentContext::idExpression() {
  return getRuleContext<CPP14Parser::IdExpressionContext>(0);
}


size_t CPP14Parser::TemplateArgumentContext::getRuleIndex() const {
  return CPP14Parser::RuleTemplateArgument;
}

void CPP14Parser::TemplateArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateArgument(this);
}

void CPP14Parser::TemplateArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateArgument(this);
}


antlrcpp::Any CPP14Parser::TemplateArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTemplateArgument(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TemplateArgumentContext* CPP14Parser::templateArgument() {
  TemplateArgumentContext *_localctx = _tracker.createInstance<TemplateArgumentContext>(_ctx, getState());
  enterRule(_localctx, 346, CPP14Parser::RuleTemplateArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1917);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1914);
      theTypeId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1915);
      constantExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1916);
      idExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameSpecifierContext ------------------------------------------------------------------

CPP14Parser::TypeNameSpecifierContext::TypeNameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TypeNameSpecifierContext::Typename_() {
  return getToken(CPP14Parser::Typename_, 0);
}

CPP14Parser::NestedNameSpecifierContext* CPP14Parser::TypeNameSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CPP14Parser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CPP14Parser::TypeNameSpecifierContext::Identifier() {
  return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpleTemplateIdContext* CPP14Parser::TypeNameSpecifierContext::simpleTemplateId() {
  return getRuleContext<CPP14Parser::SimpleTemplateIdContext>(0);
}

tree::TerminalNode* CPP14Parser::TypeNameSpecifierContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::TypeNameSpecifierContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeNameSpecifier;
}

void CPP14Parser::TypeNameSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeNameSpecifier(this);
}

void CPP14Parser::TypeNameSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeNameSpecifier(this);
}


antlrcpp::Any CPP14Parser::TypeNameSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypeNameSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeNameSpecifierContext* CPP14Parser::typeNameSpecifier() {
  TypeNameSpecifierContext *_localctx = _tracker.createInstance<TypeNameSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 348, CPP14Parser::RuleTypeNameSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1919);
    match(CPP14Parser::Typename_);
    setState(1920);
    nestedNameSpecifier(0);
    setState(1926);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
    case 1: {
      setState(1921);
      match(CPP14Parser::Identifier);
      break;
    }

    case 2: {
      setState(1923);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Template) {
        setState(1922);
        match(CPP14Parser::Template);
      }
      setState(1925);
      simpleTemplateId();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitInstantiationContext ------------------------------------------------------------------

CPP14Parser::ExplicitInstantiationContext::ExplicitInstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ExplicitInstantiationContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::ExplicitInstantiationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}

tree::TerminalNode* CPP14Parser::ExplicitInstantiationContext::Extern() {
  return getToken(CPP14Parser::Extern, 0);
}


size_t CPP14Parser::ExplicitInstantiationContext::getRuleIndex() const {
  return CPP14Parser::RuleExplicitInstantiation;
}

void CPP14Parser::ExplicitInstantiationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitInstantiation(this);
}

void CPP14Parser::ExplicitInstantiationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitInstantiation(this);
}


antlrcpp::Any CPP14Parser::ExplicitInstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExplicitInstantiation(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExplicitInstantiationContext* CPP14Parser::explicitInstantiation() {
  ExplicitInstantiationContext *_localctx = _tracker.createInstance<ExplicitInstantiationContext>(_ctx, getState());
  enterRule(_localctx, 350, CPP14Parser::RuleExplicitInstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1929);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Extern) {
      setState(1928);
      match(CPP14Parser::Extern);
    }
    setState(1931);
    match(CPP14Parser::Template);
    setState(1932);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitSpecializationContext ------------------------------------------------------------------

CPP14Parser::ExplicitSpecializationContext::ExplicitSpecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ExplicitSpecializationContext::Template() {
  return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::ExplicitSpecializationContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::ExplicitSpecializationContext::Greater() {
  return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::ExplicitSpecializationContext::declaration() {
  return getRuleContext<CPP14Parser::DeclarationContext>(0);
}


size_t CPP14Parser::ExplicitSpecializationContext::getRuleIndex() const {
  return CPP14Parser::RuleExplicitSpecialization;
}

void CPP14Parser::ExplicitSpecializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitSpecialization(this);
}

void CPP14Parser::ExplicitSpecializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitSpecialization(this);
}


antlrcpp::Any CPP14Parser::ExplicitSpecializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExplicitSpecialization(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExplicitSpecializationContext* CPP14Parser::explicitSpecialization() {
  ExplicitSpecializationContext *_localctx = _tracker.createInstance<ExplicitSpecializationContext>(_ctx, getState());
  enterRule(_localctx, 352, CPP14Parser::RuleExplicitSpecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1934);
    match(CPP14Parser::Template);
    setState(1935);
    match(CPP14Parser::Less);
    setState(1936);
    match(CPP14Parser::Greater);
    setState(1937);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryBlockContext ------------------------------------------------------------------

CPP14Parser::TryBlockContext::TryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TryBlockContext::Try() {
  return getToken(CPP14Parser::Try, 0);
}

CPP14Parser::CompoundStatementContext* CPP14Parser::TryBlockContext::compoundStatement() {
  return getRuleContext<CPP14Parser::CompoundStatementContext>(0);
}

CPP14Parser::HandlerSeqContext* CPP14Parser::TryBlockContext::handlerSeq() {
  return getRuleContext<CPP14Parser::HandlerSeqContext>(0);
}


size_t CPP14Parser::TryBlockContext::getRuleIndex() const {
  return CPP14Parser::RuleTryBlock;
}

void CPP14Parser::TryBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryBlock(this);
}

void CPP14Parser::TryBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryBlock(this);
}


antlrcpp::Any CPP14Parser::TryBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTryBlock(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TryBlockContext* CPP14Parser::tryBlock() {
  TryBlockContext *_localctx = _tracker.createInstance<TryBlockContext>(_ctx, getState());
  enterRule(_localctx, 354, CPP14Parser::RuleTryBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1939);
    match(CPP14Parser::Try);
    setState(1940);
    compoundStatement();
    setState(1941);
    handlerSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTryBlockContext ------------------------------------------------------------------

CPP14Parser::FunctionTryBlockContext::FunctionTryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::FunctionTryBlockContext::Try() {
  return getToken(CPP14Parser::Try, 0);
}

CPP14Parser::CompoundStatementContext* CPP14Parser::FunctionTryBlockContext::compoundStatement() {
  return getRuleContext<CPP14Parser::CompoundStatementContext>(0);
}

CPP14Parser::HandlerSeqContext* CPP14Parser::FunctionTryBlockContext::handlerSeq() {
  return getRuleContext<CPP14Parser::HandlerSeqContext>(0);
}

CPP14Parser::ConstructorInitializerContext* CPP14Parser::FunctionTryBlockContext::constructorInitializer() {
  return getRuleContext<CPP14Parser::ConstructorInitializerContext>(0);
}


size_t CPP14Parser::FunctionTryBlockContext::getRuleIndex() const {
  return CPP14Parser::RuleFunctionTryBlock;
}

void CPP14Parser::FunctionTryBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionTryBlock(this);
}

void CPP14Parser::FunctionTryBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionTryBlock(this);
}


antlrcpp::Any CPP14Parser::FunctionTryBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitFunctionTryBlock(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::FunctionTryBlockContext* CPP14Parser::functionTryBlock() {
  FunctionTryBlockContext *_localctx = _tracker.createInstance<FunctionTryBlockContext>(_ctx, getState());
  enterRule(_localctx, 356, CPP14Parser::RuleFunctionTryBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1943);
    match(CPP14Parser::Try);
    setState(1945);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Colon) {
      setState(1944);
      constructorInitializer();
    }
    setState(1947);
    compoundStatement();
    setState(1948);
    handlerSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerSeqContext ------------------------------------------------------------------

CPP14Parser::HandlerSeqContext::HandlerSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::HandlerContext *> CPP14Parser::HandlerSeqContext::handler() {
  return getRuleContexts<CPP14Parser::HandlerContext>();
}

CPP14Parser::HandlerContext* CPP14Parser::HandlerSeqContext::handler(size_t i) {
  return getRuleContext<CPP14Parser::HandlerContext>(i);
}


size_t CPP14Parser::HandlerSeqContext::getRuleIndex() const {
  return CPP14Parser::RuleHandlerSeq;
}

void CPP14Parser::HandlerSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandlerSeq(this);
}

void CPP14Parser::HandlerSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandlerSeq(this);
}


antlrcpp::Any CPP14Parser::HandlerSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitHandlerSeq(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::HandlerSeqContext* CPP14Parser::handlerSeq() {
  HandlerSeqContext *_localctx = _tracker.createInstance<HandlerSeqContext>(_ctx, getState());
  enterRule(_localctx, 358, CPP14Parser::RuleHandlerSeq);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1951); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1950);
      handler();
      setState(1953); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CPP14Parser::Catch);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

CPP14Parser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::HandlerContext::Catch() {
  return getToken(CPP14Parser::Catch, 0);
}

tree::TerminalNode* CPP14Parser::HandlerContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExceptionDeclarationContext* CPP14Parser::HandlerContext::exceptionDeclaration() {
  return getRuleContext<CPP14Parser::ExceptionDeclarationContext>(0);
}

tree::TerminalNode* CPP14Parser::HandlerContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::CompoundStatementContext* CPP14Parser::HandlerContext::compoundStatement() {
  return getRuleContext<CPP14Parser::CompoundStatementContext>(0);
}


size_t CPP14Parser::HandlerContext::getRuleIndex() const {
  return CPP14Parser::RuleHandler;
}

void CPP14Parser::HandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandler(this);
}

void CPP14Parser::HandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandler(this);
}


antlrcpp::Any CPP14Parser::HandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitHandler(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::HandlerContext* CPP14Parser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 360, CPP14Parser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1955);
    match(CPP14Parser::Catch);
    setState(1956);
    match(CPP14Parser::LeftParen);
    setState(1957);
    exceptionDeclaration();
    setState(1958);
    match(CPP14Parser::RightParen);
    setState(1959);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionDeclarationContext ------------------------------------------------------------------

CPP14Parser::ExceptionDeclarationContext::ExceptionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::TypeSpecifierSeqContext* CPP14Parser::ExceptionDeclarationContext::typeSpecifierSeq() {
  return getRuleContext<CPP14Parser::TypeSpecifierSeqContext>(0);
}

CPP14Parser::AttributeSpecifierSeqContext* CPP14Parser::ExceptionDeclarationContext::attributeSpecifierSeq() {
  return getRuleContext<CPP14Parser::AttributeSpecifierSeqContext>(0);
}

CPP14Parser::DeclaratorContext* CPP14Parser::ExceptionDeclarationContext::declarator() {
  return getRuleContext<CPP14Parser::DeclaratorContext>(0);
}

CPP14Parser::AbstractDeclaratorContext* CPP14Parser::ExceptionDeclarationContext::abstractDeclarator() {
  return getRuleContext<CPP14Parser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* CPP14Parser::ExceptionDeclarationContext::Ellipsis() {
  return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::ExceptionDeclarationContext::getRuleIndex() const {
  return CPP14Parser::RuleExceptionDeclaration;
}

void CPP14Parser::ExceptionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionDeclaration(this);
}

void CPP14Parser::ExceptionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionDeclaration(this);
}


antlrcpp::Any CPP14Parser::ExceptionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExceptionDeclarationContext* CPP14Parser::exceptionDeclaration() {
  ExceptionDeclarationContext *_localctx = _tracker.createInstance<ExceptionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 362, CPP14Parser::RuleExceptionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1970);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Alignas:
      case CPP14Parser::Auto:
      case CPP14Parser::Bool:
      case CPP14Parser::Char:
      case CPP14Parser::Char16:
      case CPP14Parser::Char32:
      case CPP14Parser::Class:
      case CPP14Parser::Const:
      case CPP14Parser::Decltype:
      case CPP14Parser::Double:
      case CPP14Parser::Enum:
      case CPP14Parser::Float:
      case CPP14Parser::Int:
      case CPP14Parser::Long:
      case CPP14Parser::Short:
      case CPP14Parser::Signed:
      case CPP14Parser::Struct:
      case CPP14Parser::Typename_:
      case CPP14Parser::Union:
      case CPP14Parser::Unsigned:
      case CPP14Parser::Void:
      case CPP14Parser::Volatile:
      case CPP14Parser::Wchar:
      case CPP14Parser::LeftBracket:
      case CPP14Parser::Doublecolon:
      case CPP14Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1962);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket) {
          setState(1961);
          attributeSpecifierSeq();
        }
        setState(1964);
        typeSpecifierSeq();
        setState(1967);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
        case 1: {
          setState(1965);
          declarator();
          break;
        }

        case 2: {
          setState(1966);
          abstractDeclarator();
          break;
        }

        }
        break;
      }

      case CPP14Parser::Ellipsis: {
        enterOuterAlt(_localctx, 2);
        setState(1969);
        match(CPP14Parser::Ellipsis);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowExpressionContext ------------------------------------------------------------------

CPP14Parser::ThrowExpressionContext::ThrowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::ThrowExpressionContext::Throw() {
  return getToken(CPP14Parser::Throw, 0);
}

CPP14Parser::AssignmentExpressionContext* CPP14Parser::ThrowExpressionContext::assignmentExpression() {
  return getRuleContext<CPP14Parser::AssignmentExpressionContext>(0);
}


size_t CPP14Parser::ThrowExpressionContext::getRuleIndex() const {
  return CPP14Parser::RuleThrowExpression;
}

void CPP14Parser::ThrowExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowExpression(this);
}

void CPP14Parser::ThrowExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowExpression(this);
}


antlrcpp::Any CPP14Parser::ThrowExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitThrowExpression(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ThrowExpressionContext* CPP14Parser::throwExpression() {
  ThrowExpressionContext *_localctx = _tracker.createInstance<ThrowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 364, CPP14Parser::RuleThrowExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1972);
    match(CPP14Parser::Throw);
    setState(1974);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Literal)
      | (1ULL << CPP14Parser::Alignof)
      | (1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Const_cast)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Delete)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Dynamic_cast)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::New)
      | (1ULL << CPP14Parser::Noexcept)
      | (1ULL << CPP14Parser::Operator)
      | (1ULL << CPP14Parser::Reinterpret_cast)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Sizeof)
      | (1ULL << CPP14Parser::Static_cast)
      | (1ULL << CPP14Parser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Throw - 65))
      | (1ULL << (CPP14Parser::Typeid_ - 65))
      | (1ULL << (CPP14Parser::Typename_ - 65))
      | (1ULL << (CPP14Parser::Unsigned - 65))
      | (1ULL << (CPP14Parser::Void - 65))
      | (1ULL << (CPP14Parser::Wchar - 65))
      | (1ULL << (CPP14Parser::LeftParen - 65))
      | (1ULL << (CPP14Parser::LeftBracket - 65))
      | (1ULL << (CPP14Parser::Plus - 65))
      | (1ULL << (CPP14Parser::Minus - 65))
      | (1ULL << (CPP14Parser::Star - 65))
      | (1ULL << (CPP14Parser::And - 65))
      | (1ULL << (CPP14Parser::Or - 65))
      | (1ULL << (CPP14Parser::Tilde - 65))
      | (1ULL << (CPP14Parser::Not - 65))
      | (1ULL << (CPP14Parser::PlusPlus - 65))
      | (1ULL << (CPP14Parser::MinusMinus - 65))
      | (1ULL << (CPP14Parser::Doublecolon - 65))
      | (1ULL << (CPP14Parser::Identifier - 65)))) != 0)) {
      setState(1973);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionSpecificationContext ------------------------------------------------------------------

CPP14Parser::ExceptionSpecificationContext::ExceptionSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPP14Parser::DynamicExceptionSpecificationContext* CPP14Parser::ExceptionSpecificationContext::dynamicExceptionSpecification() {
  return getRuleContext<CPP14Parser::DynamicExceptionSpecificationContext>(0);
}

CPP14Parser::NoeExceptSpecificationContext* CPP14Parser::ExceptionSpecificationContext::noeExceptSpecification() {
  return getRuleContext<CPP14Parser::NoeExceptSpecificationContext>(0);
}


size_t CPP14Parser::ExceptionSpecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleExceptionSpecification;
}

void CPP14Parser::ExceptionSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionSpecification(this);
}

void CPP14Parser::ExceptionSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionSpecification(this);
}


antlrcpp::Any CPP14Parser::ExceptionSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitExceptionSpecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::ExceptionSpecificationContext* CPP14Parser::exceptionSpecification() {
  ExceptionSpecificationContext *_localctx = _tracker.createInstance<ExceptionSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 366, CPP14Parser::RuleExceptionSpecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1978);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPP14Parser::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(1976);
        dynamicExceptionSpecification();
        break;
      }

      case CPP14Parser::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(1977);
        noeExceptSpecification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DynamicExceptionSpecificationContext ------------------------------------------------------------------

CPP14Parser::DynamicExceptionSpecificationContext::DynamicExceptionSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::DynamicExceptionSpecificationContext::Throw() {
  return getToken(CPP14Parser::Throw, 0);
}

tree::TerminalNode* CPP14Parser::DynamicExceptionSpecificationContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::DynamicExceptionSpecificationContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::TypeIdListContext* CPP14Parser::DynamicExceptionSpecificationContext::typeIdList() {
  return getRuleContext<CPP14Parser::TypeIdListContext>(0);
}


size_t CPP14Parser::DynamicExceptionSpecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleDynamicExceptionSpecification;
}

void CPP14Parser::DynamicExceptionSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamicExceptionSpecification(this);
}

void CPP14Parser::DynamicExceptionSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamicExceptionSpecification(this);
}


antlrcpp::Any CPP14Parser::DynamicExceptionSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitDynamicExceptionSpecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::DynamicExceptionSpecificationContext* CPP14Parser::dynamicExceptionSpecification() {
  DynamicExceptionSpecificationContext *_localctx = _tracker.createInstance<DynamicExceptionSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 368, CPP14Parser::RuleDynamicExceptionSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1980);
    match(CPP14Parser::Throw);
    setState(1981);
    match(CPP14Parser::LeftParen);
    setState(1983);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CPP14Parser::Auto)
      | (1ULL << CPP14Parser::Bool)
      | (1ULL << CPP14Parser::Char)
      | (1ULL << CPP14Parser::Char16)
      | (1ULL << CPP14Parser::Char32)
      | (1ULL << CPP14Parser::Class)
      | (1ULL << CPP14Parser::Const)
      | (1ULL << CPP14Parser::Decltype)
      | (1ULL << CPP14Parser::Double)
      | (1ULL << CPP14Parser::Enum)
      | (1ULL << CPP14Parser::Float)
      | (1ULL << CPP14Parser::Int)
      | (1ULL << CPP14Parser::Long)
      | (1ULL << CPP14Parser::Short)
      | (1ULL << CPP14Parser::Signed)
      | (1ULL << CPP14Parser::Struct))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (CPP14Parser::Typename_ - 70))
      | (1ULL << (CPP14Parser::Union - 70))
      | (1ULL << (CPP14Parser::Unsigned - 70))
      | (1ULL << (CPP14Parser::Void - 70))
      | (1ULL << (CPP14Parser::Volatile - 70))
      | (1ULL << (CPP14Parser::Wchar - 70))
      | (1ULL << (CPP14Parser::Doublecolon - 70))
      | (1ULL << (CPP14Parser::Identifier - 70)))) != 0)) {
      setState(1982);
      typeIdList();
    }
    setState(1985);
    match(CPP14Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdListContext ------------------------------------------------------------------

CPP14Parser::TypeIdListContext::TypeIdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPP14Parser::TheTypeIdContext *> CPP14Parser::TypeIdListContext::theTypeId() {
  return getRuleContexts<CPP14Parser::TheTypeIdContext>();
}

CPP14Parser::TheTypeIdContext* CPP14Parser::TypeIdListContext::theTypeId(size_t i) {
  return getRuleContext<CPP14Parser::TheTypeIdContext>(i);
}

std::vector<tree::TerminalNode *> CPP14Parser::TypeIdListContext::Ellipsis() {
  return getTokens(CPP14Parser::Ellipsis);
}

tree::TerminalNode* CPP14Parser::TypeIdListContext::Ellipsis(size_t i) {
  return getToken(CPP14Parser::Ellipsis, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::TypeIdListContext::Comma() {
  return getTokens(CPP14Parser::Comma);
}

tree::TerminalNode* CPP14Parser::TypeIdListContext::Comma(size_t i) {
  return getToken(CPP14Parser::Comma, i);
}


size_t CPP14Parser::TypeIdListContext::getRuleIndex() const {
  return CPP14Parser::RuleTypeIdList;
}

void CPP14Parser::TypeIdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIdList(this);
}

void CPP14Parser::TypeIdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIdList(this);
}


antlrcpp::Any CPP14Parser::TypeIdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTypeIdList(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TypeIdListContext* CPP14Parser::typeIdList() {
  TypeIdListContext *_localctx = _tracker.createInstance<TypeIdListContext>(_ctx, getState());
  enterRule(_localctx, 370, CPP14Parser::RuleTypeIdList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1987);
    theTypeId();
    setState(1989);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPP14Parser::Ellipsis) {
      setState(1988);
      match(CPP14Parser::Ellipsis);
    }
    setState(1998);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPP14Parser::Comma) {
      setState(1991);
      match(CPP14Parser::Comma);
      setState(1992);
      theTypeId();
      setState(1994);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPP14Parser::Ellipsis) {
        setState(1993);
        match(CPP14Parser::Ellipsis);
      }
      setState(2000);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoeExceptSpecificationContext ------------------------------------------------------------------

CPP14Parser::NoeExceptSpecificationContext::NoeExceptSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::NoeExceptSpecificationContext::Noexcept() {
  return getToken(CPP14Parser::Noexcept, 0);
}

tree::TerminalNode* CPP14Parser::NoeExceptSpecificationContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConstantExpressionContext* CPP14Parser::NoeExceptSpecificationContext::constantExpression() {
  return getRuleContext<CPP14Parser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CPP14Parser::NoeExceptSpecificationContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NoeExceptSpecificationContext::getRuleIndex() const {
  return CPP14Parser::RuleNoeExceptSpecification;
}

void CPP14Parser::NoeExceptSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoeExceptSpecification(this);
}

void CPP14Parser::NoeExceptSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoeExceptSpecification(this);
}


antlrcpp::Any CPP14Parser::NoeExceptSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitNoeExceptSpecification(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::NoeExceptSpecificationContext* CPP14Parser::noeExceptSpecification() {
  NoeExceptSpecificationContext *_localctx = _tracker.createInstance<NoeExceptSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 372, CPP14Parser::RuleNoeExceptSpecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2007);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 291, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2001);
      match(CPP14Parser::Noexcept);
      setState(2002);
      match(CPP14Parser::LeftParen);
      setState(2003);
      constantExpression();
      setState(2004);
      match(CPP14Parser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2006);
      match(CPP14Parser::Noexcept);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheOperatorContext ------------------------------------------------------------------

CPP14Parser::TheOperatorContext::TheOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::New() {
  return getToken(CPP14Parser::New, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::LeftBracket() {
  return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::RightBracket() {
  return getToken(CPP14Parser::RightBracket, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Delete() {
  return getToken(CPP14Parser::Delete, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Plus() {
  return getToken(CPP14Parser::Plus, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Minus() {
  return getToken(CPP14Parser::Minus, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Star() {
  return getToken(CPP14Parser::Star, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Div() {
  return getToken(CPP14Parser::Div, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Mod() {
  return getToken(CPP14Parser::Mod, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Caret() {
  return getToken(CPP14Parser::Caret, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::And() {
  return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Or() {
  return getToken(CPP14Parser::Or, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Tilde() {
  return getToken(CPP14Parser::Tilde, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Not() {
  return getToken(CPP14Parser::Not, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Assign() {
  return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Less() {
  return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::GreaterEqual() {
  return getToken(CPP14Parser::GreaterEqual, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::PlusAssign() {
  return getToken(CPP14Parser::PlusAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::MinusAssign() {
  return getToken(CPP14Parser::MinusAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::StarAssign() {
  return getToken(CPP14Parser::StarAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::ModAssign() {
  return getToken(CPP14Parser::ModAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::XorAssign() {
  return getToken(CPP14Parser::XorAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::AndAssign() {
  return getToken(CPP14Parser::AndAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::OrAssign() {
  return getToken(CPP14Parser::OrAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::LeftShift() {
  return getToken(CPP14Parser::LeftShift, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::RightShift() {
  return getToken(CPP14Parser::RightShift, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::RightShiftAssign() {
  return getToken(CPP14Parser::RightShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::LeftShiftAssign() {
  return getToken(CPP14Parser::LeftShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Equal() {
  return getToken(CPP14Parser::Equal, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::NotEqual() {
  return getToken(CPP14Parser::NotEqual, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::LessEqual() {
  return getToken(CPP14Parser::LessEqual, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::AndAnd() {
  return getToken(CPP14Parser::AndAnd, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::OrOr() {
  return getToken(CPP14Parser::OrOr, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::PlusPlus() {
  return getToken(CPP14Parser::PlusPlus, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::MinusMinus() {
  return getToken(CPP14Parser::MinusMinus, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Comma() {
  return getToken(CPP14Parser::Comma, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::ArrowStar() {
  return getToken(CPP14Parser::ArrowStar, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::Arrow() {
  return getToken(CPP14Parser::Arrow, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::LeftParen() {
  return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::TheOperatorContext::RightParen() {
  return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::TheOperatorContext::getRuleIndex() const {
  return CPP14Parser::RuleTheOperator;
}

void CPP14Parser::TheOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheOperator(this);
}

void CPP14Parser::TheOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPP14ParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheOperator(this);
}


antlrcpp::Any CPP14Parser::TheOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CPP14ParserVisitor*>(visitor))
    return parserVisitor->visitTheOperator(this);
  else
    return visitor->visitChildren(this);
}

CPP14Parser::TheOperatorContext* CPP14Parser::theOperator() {
  TheOperatorContext *_localctx = _tracker.createInstance<TheOperatorContext>(_ctx, getState());
  enterRule(_localctx, 374, CPP14Parser::RuleTheOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2059);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2009);
      match(CPP14Parser::New);
      setState(2012);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
      case 1: {
        setState(2010);
        match(CPP14Parser::LeftBracket);
        setState(2011);
        match(CPP14Parser::RightBracket);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2014);
      match(CPP14Parser::Delete);
      setState(2017);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
      case 1: {
        setState(2015);
        match(CPP14Parser::LeftBracket);
        setState(2016);
        match(CPP14Parser::RightBracket);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2019);
      match(CPP14Parser::Plus);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2020);
      match(CPP14Parser::Minus);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2021);
      match(CPP14Parser::Star);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2022);
      match(CPP14Parser::Div);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2023);
      match(CPP14Parser::Mod);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2024);
      match(CPP14Parser::Caret);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2025);
      match(CPP14Parser::And);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2026);
      match(CPP14Parser::Or);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2027);
      match(CPP14Parser::Tilde);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2028);
      match(CPP14Parser::Not);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2029);
      match(CPP14Parser::Assign);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2030);
      match(CPP14Parser::Less);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2031);
      match(CPP14Parser::GreaterEqual);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2032);
      match(CPP14Parser::PlusAssign);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2033);
      match(CPP14Parser::MinusAssign);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2034);
      match(CPP14Parser::StarAssign);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2035);
      match(CPP14Parser::Assign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2036);
      match(CPP14Parser::ModAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2037);
      match(CPP14Parser::XorAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2038);
      match(CPP14Parser::AndAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2039);
      match(CPP14Parser::OrAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2040);
      match(CPP14Parser::LeftShift);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2041);
      match(CPP14Parser::RightShift);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2042);
      match(CPP14Parser::RightShiftAssign);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2043);
      match(CPP14Parser::LeftShiftAssign);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2044);
      match(CPP14Parser::Equal);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2045);
      match(CPP14Parser::NotEqual);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2046);
      match(CPP14Parser::LessEqual);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2047);
      match(CPP14Parser::GreaterEqual);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2048);
      match(CPP14Parser::AndAnd);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2049);
      match(CPP14Parser::OrOr);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2050);
      match(CPP14Parser::PlusPlus);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2051);
      match(CPP14Parser::MinusMinus);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2052);
      match(CPP14Parser::Comma);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2053);
      match(CPP14Parser::ArrowStar);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2054);
      match(CPP14Parser::Arrow);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2055);
      match(CPP14Parser::LeftParen);
      setState(2056);
      match(CPP14Parser::RightParen);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2057);
      match(CPP14Parser::LeftBracket);
      setState(2058);
      match(CPP14Parser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CPP14Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return nestedNameSpecifierSempred(dynamic_cast<NestedNameSpecifierContext *>(context), predicateIndex);
    case 15: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 25: return noPointerNewDeclaratorSempred(dynamic_cast<NoPointerNewDeclaratorContext *>(context), predicateIndex);
    case 113: return noPointerDeclaratorSempred(dynamic_cast<NoPointerDeclaratorContext *>(context), predicateIndex);
    case 124: return noPointerAbstractDeclaratorSempred(dynamic_cast<NoPointerAbstractDeclaratorContext *>(context), predicateIndex);
    case 126: return noPointerAbstractPackDeclaratorSempred(dynamic_cast<NoPointerAbstractPackDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool CPP14Parser::noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CPP14Parser::_decisionToDFA;
atn::PredictionContextCache CPP14Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CPP14Parser::_atn;
std::vector<uint16_t> CPP14Parser::_serializedATN;

std::vector<std::string> CPP14Parser::_ruleNames = {
  "translationUnit", "primaryExpression", "idExpression", "unqualifiedId", 
  "qualifiedId", "nestedNameSpecifier", "lambdaExpression", "lambdaIntroducer", 
  "lambdaCapture", "captureDefault", "captureList", "capture", "simpleCapture", 
  "initcapture", "lambdaDeclarator", "postfixExpression", "typeIdOfTheTypeId", 
  "expressionList", "pseudoDestructorName", "unaryExpression", "unaryOperator", 
  "newExpression", "newPlacement", "newTypeId", "newDeclarator", "noPointerNewDeclarator", 
  "newInitializer", "deleteExpression", "noExceptExpression", "castExpression", 
  "pointerMemberExpression", "multiplicativeExpression", "additiveExpression", 
  "shiftExpression", "shiftOperator", "relationalExpression", "equalityExpression", 
  "andExpression", "exclusiveOrExpression", "inclusiveOrExpression", "logicalAndExpression", 
  "logicalOrExpression", "conditionalExpression", "assignmentExpression", 
  "assignmentOperator", "expression", "constantExpression", "statement", 
  "labeledStatement", "expressionStatement", "compoundStatement", "statementSeq", 
  "selectionStatement", "condition", "iterationStatement", "forInitStatement", 
  "forRangeDeclaration", "forRangeInitializer", "jumpStatement", "declarationStatement", 
  "declarationseq", "declaration", "blockDeclaration", "aliasDeclaration", 
  "simpleDeclaration", "staticAssertDeclaration", "emptyDeclaration", "attributeDeclaration", 
  "declSpecifier", "declSpecifierSeq", "storageClassSpecifier", "functionSpecifier", 
  "typedefName", "typeSpecifier", "trailingTypeSpecifier", "typeSpecifierSeq", 
  "trailingTypeSpecifierSeq", "simpleTypeSpecifier", "theTypeName", "decltypeSpecifier", 
  "elaboratedTypeSpecifier", "enumName", "enumSpecifier", "enumHead", "opaqueEnumDeclaration", 
  "enumkey", "enumbase", "enumeratorList", "enumeratorDefinition", "enumerator", 
  "namespaceName", "originalNamespaceName", "namespaceDefinition", "namespaceAlias", 
  "namespaceAliasDefinition", "qualifiednamespacespecifier", "usingDeclaration", 
  "usingDirective", "asmDefinition", "linkageSpecification", "attributeSpecifierSeq", 
  "attributeSpecifier", "alignmentspecifier", "attributeList", "attribute", 
  "attributeNamespace", "attributeArgumentClause", "balancedTokenSeq", "balancedtoken", 
  "initDeclaratorList", "initDeclarator", "declarator", "pointerDeclarator", 
  "noPointerDeclarator", "parametersAndQualifiers", "trailingReturnType", 
  "pointerOperator", "cvqualifierseq", "cvQualifier", "refqualifier", "declaratorid", 
  "theTypeId", "abstractDeclarator", "pointerAbstractDeclarator", "noPointerAbstractDeclarator", 
  "abstractPackDeclarator", "noPointerAbstractPackDeclarator", "parameterDeclarationClause", 
  "parameterDeclarationList", "parameterDeclaration", "functionDefinition", 
  "functionBody", "initializer", "braceOrEqualInitializer", "initializerClause", 
  "initializerList", "bracedInitList", "className", "classSpecifier", "classHead", 
  "classHeadName", "classVirtSpecifier", "classKey", "memberSpecification", 
  "memberdeclaration", "memberDeclaratorList", "memberDeclarator", "virtualSpecifierSeq", 
  "virtualSpecifier", "pureSpecifier", "baseClause", "baseSpecifierList", 
  "baseSpecifier", "classOrDeclType", "baseTypeSpecifier", "accessSpecifier", 
  "conversionFunctionId", "conversionTypeId", "conversionDeclarator", "constructorInitializer", 
  "memInitializerList", "memInitializer", "meminitializerid", "operatorFunctionId", 
  "literalOperatorId", "templateDeclaration", "templateparameterList", "templateParameter", 
  "typeParameter", "simpleTemplateId", "templateId", "templateName", "templateArgumentList", 
  "templateArgument", "typeNameSpecifier", "explicitInstantiation", "explicitSpecialization", 
  "tryBlock", "functionTryBlock", "handlerSeq", "handler", "exceptionDeclaration", 
  "throwExpression", "exceptionSpecification", "dynamicExceptionSpecification", 
  "typeIdList", "noeExceptSpecification", "theOperator"
};

std::vector<std::string> CPP14Parser::_literalNames = {
  "", "", "", "", "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", 
  "'break'", "'case'", "'catch'", "'char'", "'char16_t'", "'char32_t'", 
  "'class'", "'const'", "'constexpr'", "'const_cast'", "'continue'", "'decltype'", 
  "'default'", "'delete'", "'do'", "'double'", "'dynamic_cast'", "'else'", 
  "'enum'", "'explicit'", "'export'", "'extern'", "'false'", "'final'", 
  "'float'", "'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", 
  "'long'", "'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", 
  "'operator'", "'override'", "'private'", "'protected'", "'public'", "'register'", 
  "'reinterpret_cast'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", 
  "'static_assert'", "'static_cast'", "'struct'", "'switch'", "'template'", 
  "'this'", "'thread_local'", "'throw'", "'true'", "'try'", "'typedef'", 
  "'typeid'", "'typename'", "'union'", "'unsigned'", "'using'", "'virtual'", 
  "'void'", "'volatile'", "'wchar_t'", "'while'", "'('", "')'", "'['", "']'", 
  "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", "'|'", 
  "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", "'%='", 
  "'^='", "'&='", "'|='", "'<<'", "'>>'", "'<<='", "'>>='", "'=='", "'!='", 
  "'<='", "'>='", "", "", "'++'", "'--'", "','", "'->*'", "'->'", "'?'", 
  "':'", "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> CPP14Parser::_symbolicNames = {
  "", "Literal", "MultiLineMacro", "Directive", "Alignas", "Alignof", "Asm", 
  "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", "Char32", 
  "Class", "Const", "Constexpr", "Const_cast", "Continue", "Decltype", "Default", 
  "Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", 
  "Export", "Extern", "False_", "Final", "Float", "For", "Friend", "Goto", 
  "If", "Inline", "Int", "Long", "Mutable", "Namespace", "New", "Noexcept", 
  "Nullptr", "Operator", "Override", "Private", "Protected", "Public", "Register", 
  "Reinterpret_cast", "Return", "Short", "Signed", "Sizeof", "Static", "Static_assert", 
  "Static_cast", "Struct", "Switch", "Template", "This", "Thread_local", 
  "Throw", "True_", "Try", "Typedef", "Typeid_", "Typename_", "Union", "Unsigned", 
  "Using", "Virtual", "Void", "Volatile", "Wchar", "While", "LeftParen", 
  "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
  "Plus", "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", 
  "Not", "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign", 
  "DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShift", 
  "RightShift", "LeftShiftAssign", "RightShiftAssign", "Equal", "NotEqual", 
  "LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus", "MinusMinus", 
  "Comma", "ArrowStar", "Arrow", "Question", "Colon", "Doublecolon", "Semi", 
  "Dot", "DotStar", "Ellipsis", "Identifier", "IntegerLiteral", "DecimalLiteral", 
  "OctalLiteral", "HexadecimalLiteral", "BinaryLiteral", "Integersuffix", 
  "CharacterLiteral", "FloatingLiteral", "StringLiteral", "BooleanLiteral", 
  "PointerLiteral", "UserDefinedLiteral", "UserDefinedIntegerLiteral", "UserDefinedFloatingLiteral", 
  "UserDefinedStringLiteral", "UserDefinedCharacterLiteral", "Whitespace", 
  "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary CPP14Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CPP14Parser::_tokenNames;

CPP14Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x96, 0x810, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 0x9, 0xaa, 
    0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 0x9, 0xad, 0x4, 
    0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 0x9, 0xb0, 0x4, 0xb1, 
    0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 0x9, 0xb3, 0x4, 0xb4, 0x9, 
    0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 
    0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 
    0xbb, 0x9, 0xbb, 0x4, 0xbc, 0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x3, 0x2, 
    0x5, 0x2, 0x17c, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x181, 
    0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x182, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x18c, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x190, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x199, 0xa, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x19c, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1a0, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x1a8, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x1af, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1b2, 0xa, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x1b5, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x1b8, 0xb, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1bc, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x1c2, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x1ca, 0xa, 0xa, 0x5, 0xa, 0x1cc, 
    0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0x1d3, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1d6, 0xb, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x1d9, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1dd, 0xa, 0xd, 
    0x3, 0xe, 0x5, 0xe, 0x1e0, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1e4, 
    0xa, 0xe, 0x3, 0xf, 0x5, 0xf, 0x1e7, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1f0, 0xa, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0x1f3, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x1f6, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1f9, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1ff, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x203, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x207, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0x215, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x219, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x21f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x226, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x22c, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x230, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x234, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x237, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x5, 0x14, 0x23e, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x243, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0x250, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x257, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x5, 0x15, 0x263, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0x26d, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x5, 0x17, 
    0x272, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x276, 0xa, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x27d, 
    0xa, 0x17, 0x3, 0x17, 0x5, 0x17, 0x280, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x288, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x28c, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x28f, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x296, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x29d, 0xa, 0x1b, 0x7, 0x1b, 0x29f, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x2a2, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x2a6, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2aa, 0xa, 0x1c, 
    0x3, 0x1d, 0x5, 0x1d, 0x2ad, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x2b2, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x2c1, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x2c6, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 
    0x2c9, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2ce, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x2d1, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0x2d6, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x2d9, 
    0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x2df, 
    0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2e2, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x2e9, 0xa, 0x25, 0xc, 0x25, 
    0xe, 0x25, 0x2ec, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 
    0x2f1, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x2f4, 0xb, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x2f9, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
    0x2fc, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x301, 
    0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x304, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x7, 0x29, 0x309, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x30c, 
    0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x311, 0xa, 0x2a, 
    0xc, 0x2a, 0xe, 0x2a, 0x314, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x7, 0x2b, 0x319, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x31c, 0xb, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 
    0x2c, 0x324, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x32c, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 0x333, 0xa, 0x2f, 0xc, 0x2f, 
    0xe, 0x2f, 0x336, 0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x33c, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x344, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 
    0x347, 0xa, 0x31, 0x3, 0x32, 0x5, 0x32, 0x34a, 0xa, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x350, 0xa, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x5, 0x33, 0x356, 0xa, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x35c, 0xa, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x35, 0x6, 0x35, 0x361, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 
    0x362, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x5, 0x36, 0x36c, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x374, 0xa, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x5, 0x37, 0x378, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x37f, 0xa, 0x37, 0x5, 0x37, 0x381, 
    0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 
    0x38, 0x395, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x399, 0xa, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x39f, 
    0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3a4, 0xa, 0x38, 
    0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x3a8, 0xa, 0x39, 0x3, 0x3a, 0x5, 0x3a, 
    0x3ab, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x5, 0x3b, 0x3b2, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x5, 0x3c, 0x3b9, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 
    0x3bd, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x6, 0x3e, 0x3c4, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x3c5, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x3d1, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 
    0x40, 0x3db, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x3e0, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 
    0x5, 0x42, 0x3e7, 0xa, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3ea, 0xa, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3ef, 0xa, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x3f4, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x409, 0xa, 0x46, 
    0x3, 0x47, 0x6, 0x47, 0x40c, 0xa, 0x47, 0xd, 0x47, 0xe, 0x47, 0x40d, 
    0x3, 0x47, 0x5, 0x47, 0x411, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 
    0x4b, 0x41c, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x5, 0x4c, 0x422, 0xa, 0x4c, 0x3, 0x4d, 0x6, 0x4d, 0x425, 0xa, 0x4d, 
    0xd, 0x4d, 0xe, 0x4d, 0x426, 0x3, 0x4d, 0x5, 0x4d, 0x42a, 0xa, 0x4d, 
    0x3, 0x4e, 0x6, 0x4e, 0x42d, 0xa, 0x4e, 0xd, 0x4e, 0xe, 0x4e, 0x42e, 
    0x3, 0x4e, 0x5, 0x4e, 0x432, 0xa, 0x4e, 0x3, 0x4f, 0x5, 0x4f, 0x435, 
    0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x44b, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x451, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x457, 0xa, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x45d, 0xa, 0x52, 0x3, 0x52, 0x5, 0x52, 
    0x460, 0xa, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 
    0x466, 0xa, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x46a, 0xa, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x46e, 0xa, 0x52, 0x3, 0x52, 0x5, 0x52, 
    0x471, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x5, 0x54, 0x479, 0xa, 0x54, 0x5, 0x54, 0x47b, 0xa, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x481, 0xa, 0x55, 
    0x3, 0x55, 0x5, 0x55, 0x484, 0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 0x487, 
    0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 0x48a, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 
    0x5, 0x56, 0x48e, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x492, 
    0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x498, 
    0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 
    0x59, 0x7, 0x59, 0x4a0, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x4a3, 0xb, 
    0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x4a8, 0xa, 0x5a, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x4ae, 0xa, 0x5c, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x5, 0x5e, 0x4b3, 0xa, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x4b8, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x5, 0x5e, 0x4bc, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x61, 0x5, 0x61, 0x4c9, 0xa, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 
    0x3, 0x62, 0x5, 0x62, 0x4cf, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 
    0x4d3, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x5, 0x63, 
    0x4d9, 0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x4de, 
    0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 
    0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x3, 0x65, 0x5, 0x65, 0x4ed, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 
    0x4f1, 0xa, 0x65, 0x3, 0x66, 0x6, 0x66, 0x4f4, 0xa, 0x66, 0xd, 0x66, 
    0xe, 0x66, 0x4f5, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x4fb, 
    0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x500, 0xa, 0x67, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x506, 0xa, 0x68, 
    0x3, 0x68, 0x5, 0x68, 0x509, 0xa, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 
    0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x510, 0xa, 0x69, 0xc, 0x69, 0xe, 0x69, 
    0x513, 0xb, 0x69, 0x3, 0x69, 0x5, 0x69, 0x516, 0xa, 0x69, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x51b, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x5, 0x6a, 0x51f, 0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 
    0x5, 0x6c, 0x525, 0xa, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x6, 0x6d, 
    0x52a, 0xa, 0x6d, 0xd, 0x6d, 0xe, 0x6d, 0x52b, 0x3, 0x6e, 0x3, 0x6e, 
    0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
    0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x6, 0x6e, 0x53b, 
    0xa, 0x6e, 0xd, 0x6e, 0xe, 0x6e, 0x53c, 0x5, 0x6e, 0x53f, 0xa, 0x6e, 
    0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x544, 0xa, 0x6f, 0xc, 0x6f, 
    0xe, 0x6f, 0x547, 0xb, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 0x54b, 
    0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x5, 
    0x71, 0x552, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x556, 0xa, 
    0x72, 0x7, 0x72, 0x558, 0xa, 0x72, 0xc, 0x72, 0xe, 0x72, 0x55b, 0xb, 
    0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 
    0x562, 0xa, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 
    0x568, 0xa, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 
    0x56e, 0xa, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x572, 0xa, 0x73, 
    0x5, 0x73, 0x574, 0xa, 0x73, 0x7, 0x73, 0x576, 0xa, 0x73, 0xc, 0x73, 
    0xe, 0x73, 0x579, 0xb, 0x73, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x57d, 
    0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x581, 0xa, 0x74, 0x3, 0x74, 
    0x5, 0x74, 0x584, 0xa, 0x74, 0x3, 0x74, 0x5, 0x74, 0x587, 0xa, 0x74, 
    0x3, 0x74, 0x5, 0x74, 0x58a, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x5, 0x75, 0x58f, 0xa, 0x75, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x593, 
    0xa, 0x76, 0x3, 0x76, 0x5, 0x76, 0x596, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 
    0x5, 0x76, 0x59a, 0xa, 0x76, 0x3, 0x76, 0x5, 0x76, 0x59d, 0xa, 0x76, 
    0x5, 0x76, 0x59f, 0xa, 0x76, 0x3, 0x77, 0x6, 0x77, 0x5a2, 0xa, 0x77, 
    0xd, 0x77, 0xe, 0x77, 0x5a3, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 
    0x3, 0x7a, 0x5, 0x7a, 0x5ab, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 
    0x3, 0x7b, 0x5, 0x7b, 0x5b1, 0xa, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 
    0x5b5, 0xa, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 
    0x5bb, 0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x6, 0x7d, 0x5bf, 0xa, 0x7d, 
    0xd, 0x7d, 0xe, 0x7d, 0x5c0, 0x3, 0x7d, 0x5, 0x7d, 0x5c4, 0xa, 0x7d, 
    0x5, 0x7d, 0x5c6, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x5, 0x7e, 0x5cc, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5d0, 
    0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5d6, 
    0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 
    0x7e, 0x5dd, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5e1, 0xa, 
    0x7e, 0x5, 0x7e, 0x5e3, 0xa, 0x7e, 0x7, 0x7e, 0x5e5, 0xa, 0x7e, 0xc, 
    0x7e, 0xe, 0x7e, 0x5e8, 0xb, 0x7e, 0x3, 0x7f, 0x7, 0x7f, 0x5eb, 0xa, 
    0x7f, 0xc, 0x7f, 0xe, 0x7f, 0x5ee, 0xb, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 
    0x80, 0x5, 0x80, 0x5f9, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 
    0x5fd, 0xa, 0x80, 0x5, 0x80, 0x5ff, 0xa, 0x80, 0x7, 0x80, 0x601, 0xa, 
    0x80, 0xc, 0x80, 0xe, 0x80, 0x604, 0xb, 0x80, 0x3, 0x81, 0x3, 0x81, 
    0x5, 0x81, 0x608, 0xa, 0x81, 0x3, 0x81, 0x5, 0x81, 0x60b, 0xa, 0x81, 
    0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x7, 0x82, 0x610, 0xa, 0x82, 0xc, 0x82, 
    0xe, 0x82, 0x613, 0xb, 0x82, 0x3, 0x83, 0x5, 0x83, 0x616, 0xa, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x61b, 0xa, 0x83, 0x5, 0x83, 
    0x61d, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x621, 0xa, 0x83, 
    0x3, 0x84, 0x5, 0x84, 0x624, 0xa, 0x84, 0x3, 0x84, 0x5, 0x84, 0x627, 
    0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x62b, 0xa, 0x84, 0x3, 0x84, 
    0x3, 0x84, 0x3, 0x85, 0x5, 0x85, 0x630, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x637, 0xa, 0x85, 0x3, 0x86, 
    0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x63e, 0xa, 0x86, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x643, 0xa, 0x87, 0x3, 0x88, 
    0x3, 0x88, 0x5, 0x88, 0x647, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 
    0x64b, 0xa, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x650, 
    0xa, 0x89, 0x7, 0x89, 0x652, 0xa, 0x89, 0xc, 0x89, 0xe, 0x89, 0x655, 
    0xb, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x65a, 0xa, 0x8a, 
    0x5, 0x8a, 0x65c, 0xa, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
    0x5, 0x8b, 0x662, 0xa, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 
    0x667, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 
    0x66d, 0xa, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x671, 0xa, 0x8d, 
    0x5, 0x8d, 0x673, 0xa, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x676, 0xa, 0x8d, 
    0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x67a, 0xa, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 
    0x5, 0x8d, 0x67e, 0xa, 0x8d, 0x5, 0x8d, 0x680, 0xa, 0x8d, 0x5, 0x8d, 
    0x682, 0xa, 0x8d, 0x3, 0x8e, 0x5, 0x8e, 0x685, 0xa, 0x8e, 0x3, 0x8e, 
    0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 0x3, 
    0x91, 0x3, 0x91, 0x3, 0x91, 0x6, 0x91, 0x691, 0xa, 0x91, 0xd, 0x91, 
    0xe, 0x91, 0x692, 0x3, 0x92, 0x5, 0x92, 0x696, 0xa, 0x92, 0x3, 0x92, 
    0x5, 0x92, 0x699, 0xa, 0x92, 0x3, 0x92, 0x5, 0x92, 0x69c, 0xa, 0x92, 
    0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 
    0x92, 0x5, 0x92, 0x6a5, 0xa, 0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 
    0x7, 0x93, 0x6aa, 0xa, 0x93, 0xc, 0x93, 0xe, 0x93, 0x6ad, 0xb, 0x93, 
    0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x6b1, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 
    0x6b4, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x6b7, 0xa, 0x94, 0x5, 0x94, 
    0x6b9, 0xa, 0x94, 0x3, 0x94, 0x5, 0x94, 0x6bc, 0xa, 0x94, 0x3, 0x94, 
    0x5, 0x94, 0x6bf, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x6c3, 
    0xa, 0x94, 0x3, 0x95, 0x6, 0x95, 0x6c6, 0xa, 0x95, 0xd, 0x95, 0xe, 0x95, 
    0x6c7, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 
    0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x6d5, 
    0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x6da, 0xa, 0x99, 
    0x7, 0x99, 0x6dc, 0xa, 0x99, 0xc, 0x99, 0xe, 0x99, 0x6df, 0xb, 0x99, 
    0x3, 0x9a, 0x5, 0x9a, 0x6e2, 0xa, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
    0x5, 0x9a, 0x6e7, 0xa, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 
    0x6ec, 0xa, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x6f0, 0xa, 0x9a, 
    0x3, 0x9b, 0x5, 0x9b, 0x6f3, 0xa, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 
    0x6f7, 0xa, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 
    0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x702, 0xa, 0x9f, 
    0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x706, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 
    0x3, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x70d, 0xa, 0xa2, 0x3, 0xa2, 
    0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x712, 0xa, 0xa2, 0x7, 0xa2, 0x714, 
    0xa, 0xa2, 0xc, 0xa2, 0xe, 0xa2, 0x717, 0xb, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 
    0x3, 0xa3, 0x5, 0xa3, 0x71c, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 
    0x720, 0xa, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x5, 0xa4, 0x724, 0xa, 0xa4, 
    0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 
    0xa6, 0x5, 0xa6, 0x72d, 0xa, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 
    0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x7, 
    0xa8, 0x738, 0xa, 0xa8, 0xc, 0xa8, 0xe, 0xa8, 0x73b, 0xb, 0xa8, 0x3, 
    0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x73f, 0xa, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 
    0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x746, 0xa, 0xaa, 0x3, 0xaa, 
    0x3, 0xaa, 0x5, 0xaa, 0x74a, 0xa, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x74d, 
    0xa, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x750, 0xa, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 
    0x753, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x757, 0xa, 0xaa, 
    0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x75c, 0xa, 0xab, 0x3, 0xab, 
    0x3, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x763, 0xa, 0xac, 
    0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x767, 0xa, 0xac, 0x3, 0xac, 0x3, 0xac, 
    0x5, 0xac, 0x76b, 0xa, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 
    0x5, 0xae, 0x771, 0xa, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 
    0x776, 0xa, 0xae, 0x7, 0xae, 0x778, 0xa, 0xae, 0xc, 0xae, 0xe, 0xae, 
    0x77b, 0xb, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x780, 
    0xa, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x786, 
    0xa, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x789, 0xa, 0xb0, 0x3, 0xb1, 0x5, 0xb1, 
    0x78c, 0xa, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 
    0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
    0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x79c, 0xa, 0xb4, 0x3, 0xb4, 
    0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 0x6, 0xb5, 0x7a2, 0xa, 0xb5, 0xd, 0xb5, 
    0xe, 0xb5, 0x7a3, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 
    0x3, 0xb6, 0x3, 0xb7, 0x5, 0xb7, 0x7ad, 0xa, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
    0x3, 0xb7, 0x5, 0xb7, 0x7b2, 0xa, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x7b5, 
    0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x7b9, 0xa, 0xb8, 0x3, 0xb9, 
    0x3, 0xb9, 0x5, 0xb9, 0x7bd, 0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
    0x5, 0xba, 0x7c2, 0xa, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 
    0x5, 0xbb, 0x7c8, 0xa, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 
    0x7cd, 0xa, 0xbb, 0x7, 0xbb, 0x7cf, 0xa, 0xbb, 0xc, 0xbb, 0xe, 0xbb, 
    0x7d2, 0xb, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
    0x3, 0xbc, 0x5, 0xbc, 0x7da, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x5, 0xbd, 0x7df, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 
    0x7e4, 0xa, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
    0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
    0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
    0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x80e, 0xa, 0xbd, 0x3, 0xbd, 
    0x2, 0x8, 0xc, 0x20, 0x34, 0xe4, 0xfa, 0xfe, 0xbe, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
    0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
    0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
    0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
    0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
    0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 
    0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 
    0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 
    0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 
    0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 
    0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 
    0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 
    0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 
    0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 
    0x174, 0x176, 0x178, 0x2, 0x17, 0x4, 0x2, 0x5d, 0x5d, 0x70, 0x70, 0x6, 
    0x2, 0x14, 0x14, 0x1b, 0x1b, 0x36, 0x36, 0x3d, 0x3d, 0x4, 0x2, 0x7a, 
    0x7a, 0x7f, 0x7f, 0x3, 0x2, 0x76, 0x77, 0x4, 0x2, 0x57, 0x59, 0x5d, 
    0x60, 0x4, 0x2, 0x79, 0x79, 0x80, 0x80, 0x3, 0x2, 0x59, 0x5b, 0x3, 0x2, 
    0x57, 0x58, 0x3, 0x2, 0x6c, 0x6d, 0x4, 0x2, 0x62, 0x63, 0x72, 0x73, 
    0x3, 0x2, 0x70, 0x71, 0x5, 0x2, 0x61, 0x61, 0x64, 0x6b, 0x6e, 0x6f, 
    0x7, 0x2, 0x20, 0x20, 0x2b, 0x2b, 0x35, 0x35, 0x3b, 0x3b, 0x42, 0x42, 
    0x5, 0x2, 0x1e, 0x1e, 0x28, 0x28, 0x4c, 0x4c, 0x4, 0x2, 0x11, 0x11, 
    0x3e, 0x3e, 0x3, 0x2, 0x51, 0x56, 0x4, 0x2, 0x5d, 0x5d, 0x74, 0x74, 
    0x4, 0x2, 0x12, 0x12, 0x4e, 0x4e, 0x3, 0x2, 0x17, 0x18, 0x4, 0x2, 0x22, 
    0x22, 0x31, 0x31, 0x3, 0x2, 0x32, 0x34, 0x2, 0x8f4, 0x2, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x19b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x19d, 0x3, 0x2, 0x2, 
    0x2, 0xc, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x1cd, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1dc, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e6, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x20, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x238, 0x3, 0x2, 0x2, 0x2, 0x24, 0x23a, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x26c, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x271, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x281, 0x3, 0x2, 0x2, 0x2, 0x30, 0x285, 0x3, 0x2, 0x2, 0x2, 0x32, 0x28e, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x290, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2a9, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x2b5, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2c2, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2d2, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x2e5, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x2f5, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x50, 0x305, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x54, 0x315, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x58, 0x32b, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x32f, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x337, 0x3, 0x2, 0x2, 0x2, 0x60, 0x346, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x349, 0x3, 0x2, 0x2, 0x2, 0x64, 0x355, 0x3, 0x2, 0x2, 0x2, 0x66, 0x359, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x360, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x373, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x380, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x3a3, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x72, 0x3aa, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x76, 0x3bc, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x3d0, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x80, 0x3dc, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x84, 0x3f5, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3ff, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x408, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x40b, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x412, 0x3, 0x2, 0x2, 0x2, 0x90, 0x414, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x416, 0x3, 0x2, 0x2, 0x2, 0x94, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x421, 0x3, 0x2, 0x2, 0x2, 0x98, 0x424, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x42c, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x450, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x452, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x470, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x472, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x474, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0x47e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x48b, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0x495, 0x3, 0x2, 0x2, 0x2, 0xae, 0x499, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0x49c, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x4a9, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x4af, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x4bf, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x4c8, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x4d8, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0x4f3, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0xce, 0x501, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0x50c, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x51a, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0x520, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x522, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0x529, 0x3, 0x2, 0x2, 0x2, 0xda, 0x53e, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0x540, 0x3, 0x2, 0x2, 0x2, 0xde, 0x548, 0x3, 0x2, 0x2, 0x2, 
    0xe0, 0x551, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x559, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0x567, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x57a, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x58b, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0x59e, 0x3, 0x2, 0x2, 0x2, 0xec, 0x5a1, 0x3, 
    0x2, 0x2, 0x2, 0xee, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x5a7, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x5ae, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x5c5, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0x5f1, 0x3, 0x2, 0x2, 0x2, 0x100, 0x605, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x60c, 0x3, 0x2, 0x2, 0x2, 0x104, 0x615, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x623, 0x3, 0x2, 0x2, 0x2, 0x108, 0x636, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x63d, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x642, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x646, 0x3, 0x2, 0x2, 0x2, 0x110, 0x648, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x656, 0x3, 0x2, 0x2, 0x2, 0x114, 0x661, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x663, 0x3, 0x2, 0x2, 0x2, 0x118, 0x681, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x684, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x688, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x68a, 0x3, 0x2, 0x2, 0x2, 0x120, 0x690, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x6a4, 0x3, 0x2, 0x2, 0x2, 0x124, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x6c2, 0x3, 0x2, 0x2, 0x2, 0x128, 0x6c5, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x6c9, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x6cb, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x6cf, 0x3, 0x2, 0x2, 0x2, 0x130, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0x132, 
    0x6e1, 0x3, 0x2, 0x2, 0x2, 0x134, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x6f8, 0x3, 0x2, 0x2, 0x2, 0x138, 0x6fa, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x6fc, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x703, 0x3, 0x2, 0x2, 0x2, 0x140, 0x707, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x70a, 0x3, 0x2, 0x2, 0x2, 0x144, 0x718, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x723, 0x3, 0x2, 0x2, 0x2, 0x148, 0x725, 0x3, 0x2, 0x2, 0x2, 0x14a, 
    0x728, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x734, 0x3, 0x2, 0x2, 0x2, 0x150, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x749, 0x3, 0x2, 0x2, 0x2, 0x154, 0x758, 0x3, 0x2, 0x2, 0x2, 0x156, 
    0x76a, 0x3, 0x2, 0x2, 0x2, 0x158, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x76e, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x781, 0x3, 0x2, 0x2, 0x2, 0x160, 0x78b, 0x3, 0x2, 0x2, 0x2, 0x162, 
    0x790, 0x3, 0x2, 0x2, 0x2, 0x164, 0x795, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x799, 0x3, 0x2, 0x2, 0x2, 0x168, 0x7a1, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x7a5, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x16e, 
    0x7b6, 0x3, 0x2, 0x2, 0x2, 0x170, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x7be, 0x3, 0x2, 0x2, 0x2, 0x174, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x7d9, 0x3, 0x2, 0x2, 0x2, 0x178, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x17a, 
    0x17c, 0x5, 0x7a, 0x3e, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17b, 
    0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 
    0x17e, 0x7, 0x2, 0x2, 0x3, 0x17e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x181, 
    0x7, 0x3, 0x2, 0x2, 0x180, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 
    0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 
    0x3, 0x2, 0x2, 0x2, 0x183, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x184, 0x18c, 
    0x7, 0x41, 0x2, 0x2, 0x185, 0x186, 0x7, 0x51, 0x2, 0x2, 0x186, 0x187, 
    0x5, 0x5c, 0x2f, 0x2, 0x187, 0x188, 0x7, 0x52, 0x2, 0x2, 0x188, 0x18c, 
    0x3, 0x2, 0x2, 0x2, 0x189, 0x18c, 0x5, 0x6, 0x4, 0x2, 0x18a, 0x18c, 
    0x5, 0xe, 0x8, 0x2, 0x18b, 0x180, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x184, 
    0x3, 0x2, 0x2, 0x2, 0x18b, 0x185, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 
    0x3, 0x2, 0x2, 0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x18d, 0x190, 0x5, 0x8, 0x5, 0x2, 0x18e, 0x190, 0x5, 
    0xa, 0x6, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18e, 0x3, 
    0x2, 0x2, 0x2, 0x190, 0x7, 0x3, 0x2, 0x2, 0x2, 0x191, 0x19c, 0x7, 0x82, 
    0x2, 0x2, 0x192, 0x19c, 0x5, 0x148, 0xa5, 0x2, 0x193, 0x19c, 0x5, 0x13a, 
    0x9e, 0x2, 0x194, 0x19c, 0x5, 0x14a, 0xa6, 0x2, 0x195, 0x198, 0x7, 0x5f, 
    0x2, 0x2, 0x196, 0x199, 0x5, 0x114, 0x8b, 0x2, 0x197, 0x199, 0x5, 0xa0, 
    0x51, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x156, 
    0xac, 0x2, 0x19b, 0x191, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x193, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x195, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19a, 0x3, 0x2, 
    0x2, 0x2, 0x19c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x5, 0xc, 0x7, 
    0x2, 0x19e, 0x1a0, 0x7, 0x40, 0x2, 0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x1a1, 0x1a2, 0x5, 0x8, 0x5, 0x2, 0x1a2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a7, 0x8, 0x7, 0x1, 0x2, 0x1a4, 0x1a8, 0x5, 0x9e, 0x50, 0x2, 
    0x1a5, 0x1a8, 0x5, 0xb6, 0x5c, 0x2, 0x1a6, 0x1a8, 0x5, 0xa0, 0x51, 0x2, 
    0x1a7, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x7d, 0x2, 0x2, 
    0x1aa, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1b1, 0xc, 0x3, 0x2, 0x2, 
    0x1ac, 0x1b2, 0x7, 0x82, 0x2, 0x2, 0x1ad, 0x1af, 0x7, 0x40, 0x2, 0x2, 
    0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0x154, 0xab, 0x2, 
    0x1b1, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b5, 0x7, 0x7d, 0x2, 0x2, 
    0x1b4, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1bb, 0x5, 0x10, 0x9, 0x2, 0x1ba, 0x1bc, 0x5, 0x1e, 0x10, 0x2, 0x1bb, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
    0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x5, 0x66, 0x34, 0x2, 0x1be, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c1, 0x7, 0x53, 0x2, 0x2, 0x1c0, 0x1c2, 
    0x5, 0x12, 0xa, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 
    0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 
    0x7, 0x54, 0x2, 0x2, 0x1c4, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1cc, 
    0x5, 0x16, 0xc, 0x2, 0x1c6, 0x1c9, 0x5, 0x14, 0xb, 0x2, 0x1c7, 0x1c8, 
    0x7, 0x78, 0x2, 0x2, 0x1c8, 0x1ca, 0x5, 0x16, 0xc, 0x2, 0x1c9, 0x1c7, 
    0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cc, 
    0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c6, 
    0x3, 0x2, 0x2, 0x2, 0x1cc, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x9, 
    0x2, 0x2, 0x2, 0x1ce, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d4, 0x5, 0x18, 
    0xd, 0x2, 0x1d0, 0x1d1, 0x7, 0x78, 0x2, 0x2, 0x1d1, 0x1d3, 0x5, 0x18, 
    0xd, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 
    0x2, 0x2, 0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1d9, 0x7, 0x81, 0x2, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 
    0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x1da, 0x1dd, 0x5, 0x1a, 0xe, 0x2, 0x1db, 0x1dd, 0x5, 0x1c, 0xf, 
    0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1dd, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e0, 0x7, 0x5d, 0x2, 
    0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 
    0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e4, 0x7, 0x82, 0x2, 
    0x2, 0x1e2, 0x1e4, 0x7, 0x41, 0x2, 0x2, 0x1e3, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x1e7, 0x7, 0x5d, 0x2, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1e9, 0x7, 0x82, 0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x10a, 0x86, 0x2, 
    0x1ea, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x51, 0x2, 0x2, 
    0x1ec, 0x1ed, 0x5, 0x100, 0x81, 0x2, 0x1ed, 0x1ef, 0x7, 0x52, 0x2, 0x2, 
    0x1ee, 0x1f0, 0x7, 0x2b, 0x2, 0x2, 0x1ef, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f2, 0x3, 0x2, 0x2, 0x2, 
    0x1f1, 0x1f3, 0x5, 0x170, 0xb9, 0x2, 0x1f2, 0x1f1, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f6, 0x5, 0xca, 0x66, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 
    0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f8, 0x3, 0x2, 0x2, 0x2, 
    0x1f7, 0x1f9, 0x5, 0xe8, 0x75, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
    0x1fb, 0x8, 0x11, 0x1, 0x2, 0x1fb, 0x219, 0x5, 0x4, 0x3, 0x2, 0x1fc, 
    0x1ff, 0x5, 0x9c, 0x4f, 0x2, 0x1fd, 0x1ff, 0x5, 0x15e, 0xb0, 0x2, 0x1fe, 
    0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
    0x206, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x7, 0x51, 0x2, 0x2, 0x201, 
    0x203, 0x5, 0x24, 0x13, 0x2, 0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x202, 
    0x203, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 
    0x207, 0x7, 0x52, 0x2, 0x2, 0x205, 0x207, 0x5, 0x112, 0x8a, 0x2, 0x206, 
    0x200, 0x3, 0x2, 0x2, 0x2, 0x206, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 
    0x219, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x9, 0x3, 0x2, 0x2, 0x209, 
    0x20a, 0x7, 0x62, 0x2, 0x2, 0x20a, 0x20b, 0x5, 0xf4, 0x7b, 0x2, 0x20b, 
    0x20c, 0x7, 0x63, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0x51, 0x2, 0x2, 0x20d, 
    0x20e, 0x5, 0x5c, 0x2f, 0x2, 0x20e, 0x20f, 0x7, 0x52, 0x2, 0x2, 0x20f, 
    0x219, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x5, 0x22, 0x12, 0x2, 0x211, 
    0x214, 0x7, 0x51, 0x2, 0x2, 0x212, 0x215, 0x5, 0x5c, 0x2f, 0x2, 0x213, 
    0x215, 0x5, 0xf4, 0x7b, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 0x2, 0x214, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 
    0x217, 0x7, 0x52, 0x2, 0x2, 0x217, 0x219, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x1fa, 0x3, 0x2, 0x2, 0x2, 0x218, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x208, 0x3, 0x2, 0x2, 0x2, 0x218, 0x210, 0x3, 0x2, 0x2, 0x2, 0x219, 
    0x235, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0xc, 0x9, 0x2, 0x2, 0x21b, 
    0x21e, 0x7, 0x53, 0x2, 0x2, 0x21c, 0x21f, 0x5, 0x5c, 0x2f, 0x2, 0x21d, 
    0x21f, 0x5, 0x112, 0x8a, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 0x220, 
    0x221, 0x7, 0x54, 0x2, 0x2, 0x221, 0x234, 0x3, 0x2, 0x2, 0x2, 0x222, 
    0x223, 0xc, 0x8, 0x2, 0x2, 0x223, 0x225, 0x7, 0x51, 0x2, 0x2, 0x224, 
    0x226, 0x5, 0x24, 0x13, 0x2, 0x225, 0x224, 0x3, 0x2, 0x2, 0x2, 0x225, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 
    0x234, 0x7, 0x52, 0x2, 0x2, 0x228, 0x229, 0xc, 0x6, 0x2, 0x2, 0x229, 
    0x22f, 0x9, 0x4, 0x2, 0x2, 0x22a, 0x22c, 0x7, 0x40, 0x2, 0x2, 0x22b, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 
    0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x230, 0x5, 0x6, 0x4, 0x2, 0x22e, 
    0x230, 0x5, 0x26, 0x14, 0x2, 0x22f, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22f, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 0x234, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x232, 0xc, 0x5, 0x2, 0x2, 0x232, 0x234, 0x9, 0x5, 0x2, 0x2, 0x233, 
    0x21a, 0x3, 0x2, 0x2, 0x2, 0x233, 0x222, 0x3, 0x2, 0x2, 0x2, 0x233, 
    0x228, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x234, 
    0x237, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 
    0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x21, 0x3, 0x2, 0x2, 0x2, 0x237, 0x235, 
    0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x7, 0x47, 0x2, 0x2, 0x239, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x5, 0x110, 0x89, 0x2, 0x23b, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x23c, 0x23e, 0x5, 0xc, 0x7, 0x2, 0x23d, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x242, 
    0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x5, 0x9e, 0x50, 0x2, 0x240, 0x241, 
    0x7, 0x7d, 0x2, 0x2, 0x241, 0x243, 0x3, 0x2, 0x2, 0x2, 0x242, 0x23f, 
    0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 
    0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 0x5f, 0x2, 0x2, 0x245, 0x250, 
    0x5, 0x9e, 0x50, 0x2, 0x246, 0x247, 0x5, 0xc, 0x7, 0x2, 0x247, 0x248, 
    0x7, 0x40, 0x2, 0x2, 0x248, 0x249, 0x5, 0x154, 0xab, 0x2, 0x249, 0x24a, 
    0x7, 0x7d, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x5f, 0x2, 0x2, 0x24b, 0x24c, 
    0x5, 0x9e, 0x50, 0x2, 0x24c, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 
    0x7, 0x5f, 0x2, 0x2, 0x24e, 0x250, 0x5, 0xa0, 0x51, 0x2, 0x24f, 0x23d, 
    0x3, 0x2, 0x2, 0x2, 0x24f, 0x246, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x24d, 
    0x3, 0x2, 0x2, 0x2, 0x250, 0x27, 0x3, 0x2, 0x2, 0x2, 0x251, 0x26d, 0x5, 
    0x20, 0x11, 0x2, 0x252, 0x257, 0x7, 0x76, 0x2, 0x2, 0x253, 0x257, 0x7, 
    0x77, 0x2, 0x2, 0x254, 0x257, 0x5, 0x2a, 0x16, 0x2, 0x255, 0x257, 0x7, 
    0x3a, 0x2, 0x2, 0x256, 0x252, 0x3, 0x2, 0x2, 0x2, 0x256, 0x253, 0x3, 
    0x2, 0x2, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x255, 0x3, 
    0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x26d, 0x5, 
    0x28, 0x15, 0x2, 0x259, 0x262, 0x7, 0x3a, 0x2, 0x2, 0x25a, 0x25b, 0x7, 
    0x51, 0x2, 0x2, 0x25b, 0x25c, 0x5, 0xf4, 0x7b, 0x2, 0x25c, 0x25d, 0x7, 
    0x52, 0x2, 0x2, 0x25d, 0x263, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 
    0x81, 0x2, 0x2, 0x25f, 0x260, 0x7, 0x51, 0x2, 0x2, 0x260, 0x261, 0x7, 
    0x82, 0x2, 0x2, 0x261, 0x263, 0x7, 0x52, 0x2, 0x2, 0x262, 0x25a, 0x3, 
    0x2, 0x2, 0x2, 0x262, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x263, 0x26d, 0x3, 
    0x2, 0x2, 0x2, 0x264, 0x265, 0x7, 0x7, 0x2, 0x2, 0x265, 0x266, 0x7, 
    0x51, 0x2, 0x2, 0x266, 0x267, 0x5, 0xf4, 0x7b, 0x2, 0x267, 0x268, 0x7, 
    0x52, 0x2, 0x2, 0x268, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26d, 0x5, 
    0x3a, 0x1e, 0x2, 0x26a, 0x26d, 0x5, 0x2c, 0x17, 0x2, 0x26b, 0x26d, 0x5, 
    0x38, 0x1d, 0x2, 0x26c, 0x251, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x26c, 0x259, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x26c, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x26c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x26f, 0x9, 0x6, 0x2, 0x2, 0x26f, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x270, 0x272, 0x7, 0x7d, 0x2, 0x2, 0x271, 0x270, 0x3, 0x2, 0x2, 
    0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 0x2, 
    0x2, 0x273, 0x275, 0x7, 0x2d, 0x2, 0x2, 0x274, 0x276, 0x5, 0x2e, 0x18, 
    0x2, 0x275, 0x274, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x277, 0x27d, 0x5, 0x30, 0x19, 
    0x2, 0x278, 0x279, 0x7, 0x51, 0x2, 0x2, 0x279, 0x27a, 0x5, 0xf4, 0x7b, 
    0x2, 0x27a, 0x27b, 0x7, 0x52, 0x2, 0x2, 0x27b, 0x27d, 0x3, 0x2, 0x2, 
    0x2, 0x27c, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x278, 0x3, 0x2, 0x2, 
    0x2, 0x27d, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x280, 0x5, 0x36, 0x1c, 
    0x2, 0x27f, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x7, 0x51, 0x2, 
    0x2, 0x282, 0x283, 0x5, 0x24, 0x13, 0x2, 0x283, 0x284, 0x7, 0x52, 0x2, 
    0x2, 0x284, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x285, 0x287, 0x5, 0x98, 0x4d, 
    0x2, 0x286, 0x288, 0x5, 0x32, 0x1a, 0x2, 0x287, 0x286, 0x3, 0x2, 0x2, 
    0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 0x2, 0x288, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x289, 0x28b, 0x5, 0xea, 0x76, 0x2, 0x28a, 0x28c, 0x5, 0x32, 0x1a, 0x2, 
    0x28b, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 
    0x28c, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28f, 0x5, 0x34, 0x1b, 0x2, 
    0x28e, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x33, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x8, 0x1b, 0x1, 0x2, 
    0x291, 0x292, 0x7, 0x53, 0x2, 0x2, 0x292, 0x293, 0x5, 0x5c, 0x2f, 0x2, 
    0x293, 0x295, 0x7, 0x54, 0x2, 0x2, 0x294, 0x296, 0x5, 0xca, 0x66, 0x2, 
    0x295, 0x294, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 
    0x296, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0xc, 0x3, 0x2, 0x2, 
    0x298, 0x299, 0x7, 0x53, 0x2, 0x2, 0x299, 0x29a, 0x5, 0x5e, 0x30, 0x2, 
    0x29a, 0x29c, 0x7, 0x54, 0x2, 0x2, 0x29b, 0x29d, 0x5, 0xca, 0x66, 0x2, 
    0x29c, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 0x2, 
    0x29d, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x297, 0x3, 0x2, 0x2, 0x2, 
    0x29f, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 0x2, 
    0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2a2, 
    0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a5, 0x7, 0x51, 0x2, 0x2, 0x2a4, 
    0x2a6, 0x5, 0x24, 0x13, 0x2, 0x2a5, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
    0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a7, 
    0x2aa, 0x7, 0x52, 0x2, 0x2, 0x2a8, 0x2aa, 0x5, 0x112, 0x8a, 0x2, 0x2a9, 
    0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ad, 0x7, 0x7d, 0x2, 0x2, 0x2ac, 
    0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
    0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b1, 0x7, 0x18, 0x2, 0x2, 0x2af, 
    0x2b0, 0x7, 0x53, 0x2, 0x2, 0x2b0, 0x2b2, 0x7, 0x54, 0x2, 0x2, 0x2b1, 
    0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
    0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x5, 0x3c, 0x1f, 0x2, 0x2b4, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x2e, 0x2, 0x2, 0x2b6, 
    0x2b7, 0x7, 0x51, 0x2, 0x2, 0x2b7, 0x2b8, 0x5, 0x5c, 0x2f, 0x2, 0x2b8, 
    0x2b9, 0x7, 0x52, 0x2, 0x2, 0x2b9, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
    0x2c1, 0x5, 0x28, 0x15, 0x2, 0x2bb, 0x2bc, 0x7, 0x51, 0x2, 0x2, 0x2bc, 
    0x2bd, 0x5, 0xf4, 0x7b, 0x2, 0x2bd, 0x2be, 0x7, 0x52, 0x2, 0x2, 0x2be, 
    0x2bf, 0x5, 0x3c, 0x1f, 0x2, 0x2bf, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
    0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2c1, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c7, 0x5, 0x3c, 0x1f, 0x2, 0x2c3, 
    0x2c4, 0x9, 0x7, 0x2, 0x2, 0x2c4, 0x2c6, 0x5, 0x3c, 0x1f, 0x2, 0x2c5, 
    0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
    0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cf, 
    0x5, 0x3e, 0x20, 0x2, 0x2cb, 0x2cc, 0x9, 0x8, 0x2, 0x2, 0x2cc, 0x2ce, 
    0x5, 0x3e, 0x20, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d1, 
    0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 
    0x3, 0x2, 0x2, 0x2, 0x2d0, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cf, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d7, 0x5, 0x40, 0x21, 0x2, 0x2d3, 0x2d4, 0x9, 
    0x9, 0x2, 0x2, 0x2d4, 0x2d6, 0x5, 0x40, 0x21, 0x2, 0x2d5, 0x2d3, 0x3, 
    0x2, 0x2, 0x2, 0x2d6, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 0x3, 
    0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2e0, 0x5, 0x42, 
    0x22, 0x2, 0x2db, 0x2dc, 0x5, 0x46, 0x24, 0x2, 0x2dc, 0x2dd, 0x5, 0x42, 
    0x22, 0x2, 0x2dd, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2db, 0x3, 0x2, 
    0x2, 0x2, 0x2df, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2de, 0x3, 0x2, 
    0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x2e2, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x9, 0xa, 0x2, 
    0x2, 0x2e4, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2ea, 0x5, 0x44, 0x23, 
    0x2, 0x2e6, 0x2e7, 0x9, 0xb, 0x2, 0x2, 0x2e7, 0x2e9, 0x5, 0x44, 0x23, 
    0x2, 0x2e8, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ec, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x3, 0x2, 0x2, 
    0x2, 0x2eb, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 0x2, 
    0x2ed, 0x2f2, 0x5, 0x48, 0x25, 0x2, 0x2ee, 0x2ef, 0x9, 0xc, 0x2, 0x2, 
    0x2ef, 0x2f1, 0x5, 0x48, 0x25, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 0x2, 
    0x2f1, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f0, 0x3, 0x2, 0x2, 0x2, 
    0x2f2, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2f4, 
    0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2fa, 0x5, 0x4a, 0x26, 0x2, 0x2f6, 
    0x2f7, 0x7, 0x5d, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0x4a, 0x26, 0x2, 0x2f8, 
    0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fa, 
    0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fb, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x302, 
    0x5, 0x4c, 0x27, 0x2, 0x2fe, 0x2ff, 0x7, 0x5c, 0x2, 0x2, 0x2ff, 0x301, 
    0x5, 0x4c, 0x27, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 0x304, 
    0x3, 0x2, 0x2, 0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 
    0x3, 0x2, 0x2, 0x2, 0x303, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x304, 0x302, 0x3, 
    0x2, 0x2, 0x2, 0x305, 0x30a, 0x5, 0x4e, 0x28, 0x2, 0x306, 0x307, 0x7, 
    0x5e, 0x2, 0x2, 0x307, 0x309, 0x5, 0x4e, 0x28, 0x2, 0x308, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x309, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x308, 0x3, 
    0x2, 0x2, 0x2, 0x30a, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x30c, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x312, 0x5, 0x50, 
    0x29, 0x2, 0x30e, 0x30f, 0x7, 0x74, 0x2, 0x2, 0x30f, 0x311, 0x5, 0x50, 
    0x29, 0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x311, 0x314, 0x3, 0x2, 
    0x2, 0x2, 0x312, 0x310, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x3, 0x2, 
    0x2, 0x2, 0x313, 0x53, 0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x31a, 0x5, 0x52, 0x2a, 0x2, 0x316, 0x317, 0x7, 0x75, 0x2, 
    0x2, 0x317, 0x319, 0x5, 0x52, 0x2a, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x318, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x31c, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x323, 0x5, 0x54, 0x2b, 0x2, 
    0x31e, 0x31f, 0x7, 0x7b, 0x2, 0x2, 0x31f, 0x320, 0x5, 0x5c, 0x2f, 0x2, 
    0x320, 0x321, 0x7, 0x7c, 0x2, 0x2, 0x321, 0x322, 0x5, 0x58, 0x2d, 0x2, 
    0x322, 0x324, 0x3, 0x2, 0x2, 0x2, 0x323, 0x31e, 0x3, 0x2, 0x2, 0x2, 
    0x323, 0x324, 0x3, 0x2, 0x2, 0x2, 0x324, 0x57, 0x3, 0x2, 0x2, 0x2, 0x325, 
    0x32c, 0x5, 0x56, 0x2c, 0x2, 0x326, 0x327, 0x5, 0x54, 0x2b, 0x2, 0x327, 
    0x328, 0x5, 0x5a, 0x2e, 0x2, 0x328, 0x329, 0x5, 0x10e, 0x88, 0x2, 0x329, 
    0x32c, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x16e, 0xb8, 0x2, 0x32b, 
    0x325, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x326, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32a, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 
    0x9, 0xd, 0x2, 0x2, 0x32e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x334, 0x5, 
    0x58, 0x2d, 0x2, 0x330, 0x331, 0x7, 0x78, 0x2, 0x2, 0x331, 0x333, 0x5, 
    0x58, 0x2d, 0x2, 0x332, 0x330, 0x3, 0x2, 0x2, 0x2, 0x333, 0x336, 0x3, 
    0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x3, 
    0x2, 0x2, 0x2, 0x335, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x336, 0x334, 0x3, 0x2, 
    0x2, 0x2, 0x337, 0x338, 0x5, 0x56, 0x2c, 0x2, 0x338, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x339, 0x347, 0x5, 0x62, 0x32, 0x2, 0x33a, 0x33c, 0x5, 0xca, 
    0x66, 0x2, 0x33b, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x3, 0x2, 
    0x2, 0x2, 0x33c, 0x343, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x344, 0x5, 0x64, 
    0x33, 0x2, 0x33e, 0x344, 0x5, 0x66, 0x34, 0x2, 0x33f, 0x344, 0x5, 0x6a, 
    0x36, 0x2, 0x340, 0x344, 0x5, 0x6e, 0x38, 0x2, 0x341, 0x344, 0x5, 0x76, 
    0x3c, 0x2, 0x342, 0x344, 0x5, 0x164, 0xb3, 0x2, 0x343, 0x33d, 0x3, 0x2, 
    0x2, 0x2, 0x343, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x343, 0x33f, 0x3, 0x2, 
    0x2, 0x2, 0x343, 0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x341, 0x3, 0x2, 
    0x2, 0x2, 0x343, 0x342, 0x3, 0x2, 0x2, 0x2, 0x344, 0x347, 0x3, 0x2, 
    0x2, 0x2, 0x345, 0x347, 0x5, 0x78, 0x3d, 0x2, 0x346, 0x339, 0x3, 0x2, 
    0x2, 0x2, 0x346, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x346, 0x345, 0x3, 0x2, 
    0x2, 0x2, 0x347, 0x61, 0x3, 0x2, 0x2, 0x2, 0x348, 0x34a, 0x5, 0xca, 
    0x66, 0x2, 0x349, 0x348, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x3, 0x2, 
    0x2, 0x2, 0x34a, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x350, 0x7, 0x82, 
    0x2, 0x2, 0x34c, 0x34d, 0x7, 0xc, 0x2, 0x2, 0x34d, 0x350, 0x5, 0x5e, 
    0x30, 0x2, 0x34e, 0x350, 0x7, 0x17, 0x2, 0x2, 0x34f, 0x34b, 0x3, 0x2, 
    0x2, 0x2, 0x34f, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x34e, 0x3, 0x2, 
    0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 0x7, 0x7c, 
    0x2, 0x2, 0x352, 0x353, 0x5, 0x60, 0x31, 0x2, 0x353, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x354, 0x356, 0x5, 0x5c, 0x2f, 0x2, 0x355, 0x354, 0x3, 0x2, 
    0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 0x3, 0x2, 
    0x2, 0x2, 0x357, 0x358, 0x7, 0x7e, 0x2, 0x2, 0x358, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x359, 0x35b, 0x7, 0x55, 0x2, 0x2, 0x35a, 0x35c, 0x5, 0x68, 
    0x35, 0x2, 0x35b, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x3, 0x2, 
    0x2, 0x2, 0x35c, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x7, 0x56, 
    0x2, 0x2, 0x35e, 0x67, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x361, 0x5, 0x60, 
    0x31, 0x2, 0x360, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 
    0x2, 0x2, 0x362, 0x360, 0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 0x3, 0x2, 
    0x2, 0x2, 0x363, 0x69, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x7, 0x27, 
    0x2, 0x2, 0x365, 0x366, 0x7, 0x51, 0x2, 0x2, 0x366, 0x367, 0x5, 0x6c, 
    0x37, 0x2, 0x367, 0x368, 0x7, 0x52, 0x2, 0x2, 0x368, 0x36b, 0x5, 0x60, 
    0x31, 0x2, 0x369, 0x36a, 0x7, 0x1c, 0x2, 0x2, 0x36a, 0x36c, 0x5, 0x60, 
    0x31, 0x2, 0x36b, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x3, 0x2, 
    0x2, 0x2, 0x36c, 0x374, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x3f, 
    0x2, 0x2, 0x36e, 0x36f, 0x7, 0x51, 0x2, 0x2, 0x36f, 0x370, 0x5, 0x6c, 
    0x37, 0x2, 0x370, 0x371, 0x7, 0x52, 0x2, 0x2, 0x371, 0x372, 0x5, 0x60, 
    0x31, 0x2, 0x372, 0x374, 0x3, 0x2, 0x2, 0x2, 0x373, 0x364, 0x3, 0x2, 
    0x2, 0x2, 0x373, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x374, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x375, 0x381, 0x5, 0x5c, 0x2f, 0x2, 0x376, 0x378, 0x5, 0xca, 0x66, 
    0x2, 0x377, 0x376, 0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 0x3, 0x2, 0x2, 
    0x2, 0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x37a, 0x5, 0x8c, 0x47, 
    0x2, 0x37a, 0x37e, 0x5, 0xe0, 0x71, 0x2, 0x37b, 0x37c, 0x7, 0x61, 0x2, 
    0x2, 0x37c, 0x37f, 0x5, 0x10e, 0x88, 0x2, 0x37d, 0x37f, 0x5, 0x112, 
    0x8a, 0x2, 0x37e, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37d, 0x3, 0x2, 
    0x2, 0x2, 0x37f, 0x381, 0x3, 0x2, 0x2, 0x2, 0x380, 0x375, 0x3, 0x2, 
    0x2, 0x2, 0x380, 0x377, 0x3, 0x2, 0x2, 0x2, 0x381, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x382, 0x383, 0x7, 0x50, 0x2, 0x2, 0x383, 0x384, 0x7, 0x51, 0x2, 
    0x2, 0x384, 0x385, 0x5, 0x6c, 0x37, 0x2, 0x385, 0x386, 0x7, 0x52, 0x2, 
    0x2, 0x386, 0x387, 0x5, 0x60, 0x31, 0x2, 0x387, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x388, 0x389, 0x7, 0x19, 0x2, 0x2, 0x389, 0x38a, 0x5, 0x60, 0x31, 
    0x2, 0x38a, 0x38b, 0x7, 0x50, 0x2, 0x2, 0x38b, 0x38c, 0x7, 0x51, 0x2, 
    0x2, 0x38c, 0x38d, 0x5, 0x5c, 0x2f, 0x2, 0x38d, 0x38e, 0x7, 0x52, 0x2, 
    0x2, 0x38e, 0x38f, 0x7, 0x7e, 0x2, 0x2, 0x38f, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x390, 0x391, 0x7, 0x24, 0x2, 0x2, 0x391, 0x39e, 0x7, 0x51, 0x2, 
    0x2, 0x392, 0x394, 0x5, 0x70, 0x39, 0x2, 0x393, 0x395, 0x5, 0x6c, 0x37, 
    0x2, 0x394, 0x393, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x3, 0x2, 0x2, 
    0x2, 0x395, 0x396, 0x3, 0x2, 0x2, 0x2, 0x396, 0x398, 0x7, 0x7e, 0x2, 
    0x2, 0x397, 0x399, 0x5, 0x5c, 0x2f, 0x2, 0x398, 0x397, 0x3, 0x2, 0x2, 
    0x2, 0x398, 0x399, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39f, 0x3, 0x2, 0x2, 
    0x2, 0x39a, 0x39b, 0x5, 0x72, 0x3a, 0x2, 0x39b, 0x39c, 0x7, 0x7c, 0x2, 
    0x2, 0x39c, 0x39d, 0x5, 0x74, 0x3b, 0x2, 0x39d, 0x39f, 0x3, 0x2, 0x2, 
    0x2, 0x39e, 0x392, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39a, 0x3, 0x2, 0x2, 
    0x2, 0x39f, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x7, 0x52, 0x2, 
    0x2, 0x3a1, 0x3a2, 0x5, 0x60, 0x31, 0x2, 0x3a2, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x3a3, 0x382, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x388, 0x3, 0x2, 0x2, 
    0x2, 0x3a3, 0x390, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x3a5, 0x3a8, 0x5, 0x64, 0x33, 0x2, 0x3a6, 0x3a8, 0x5, 0x82, 0x42, 0x2, 
    0x3a7, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a7, 0x3a6, 0x3, 0x2, 0x2, 0x2, 
    0x3a8, 0x71, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ab, 0x5, 0xca, 0x66, 0x2, 
    0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 
    0x3ab, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0x8c, 0x47, 0x2, 
    0x3ad, 0x3ae, 0x5, 0xe0, 0x71, 0x2, 0x3ae, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x3af, 0x3b2, 0x5, 0x5c, 0x2f, 0x2, 0x3b0, 0x3b2, 0x5, 0x112, 0x8a, 
    0x2, 0x3b1, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b0, 0x3, 0x2, 0x2, 
    0x2, 0x3b2, 0x75, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3bd, 0x7, 0xb, 0x2, 0x2, 
    0x3b4, 0x3bd, 0x7, 0x15, 0x2, 0x2, 0x3b5, 0x3b8, 0x7, 0x37, 0x2, 0x2, 
    0x3b6, 0x3b9, 0x5, 0x5c, 0x2f, 0x2, 0x3b7, 0x3b9, 0x5, 0x112, 0x8a, 
    0x2, 0x3b8, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b7, 0x3, 0x2, 0x2, 
    0x2, 0x3b8, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3bd, 0x3, 0x2, 0x2, 
    0x2, 0x3ba, 0x3bb, 0x7, 0x26, 0x2, 0x2, 0x3bb, 0x3bd, 0x7, 0x82, 0x2, 
    0x2, 0x3bc, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3b4, 0x3, 0x2, 0x2, 
    0x2, 0x3bc, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3ba, 0x3, 0x2, 0x2, 
    0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x7e, 0x2, 
    0x2, 0x3bf, 0x77, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x7e, 0x40, 
    0x2, 0x3c1, 0x79, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c4, 0x5, 0x7c, 0x3f, 
    0x2, 0x3c3, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 0x3, 0x2, 0x2, 
    0x2, 0x3c5, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x3, 0x2, 0x2, 
    0x2, 0x3c6, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3d1, 0x5, 0x7e, 0x40, 
    0x2, 0x3c8, 0x3d1, 0x5, 0x106, 0x84, 0x2, 0x3c9, 0x3d1, 0x5, 0x14c, 
    0xa7, 0x2, 0x3ca, 0x3d1, 0x5, 0x160, 0xb1, 0x2, 0x3cb, 0x3d1, 0x5, 0x162, 
    0xb2, 0x2, 0x3cc, 0x3d1, 0x5, 0xc8, 0x65, 0x2, 0x3cd, 0x3d1, 0x5, 0xba, 
    0x5e, 0x2, 0x3ce, 0x3d1, 0x5, 0x86, 0x44, 0x2, 0x3cf, 0x3d1, 0x5, 0x88, 
    0x45, 0x2, 0x3d0, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c8, 0x3, 0x2, 
    0x2, 0x2, 0x3d0, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3ca, 0x3, 0x2, 
    0x2, 0x2, 0x3d0, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3cc, 0x3, 0x2, 
    0x2, 0x2, 0x3d0, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3ce, 0x3, 0x2, 
    0x2, 0x2, 0x3d0, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x3d2, 0x3db, 0x5, 0x82, 0x42, 0x2, 0x3d3, 0x3db, 0x5, 0xc6, 0x64, 
    0x2, 0x3d4, 0x3db, 0x5, 0xbe, 0x60, 0x2, 0x3d5, 0x3db, 0x5, 0xc2, 0x62, 
    0x2, 0x3d6, 0x3db, 0x5, 0xc4, 0x63, 0x2, 0x3d7, 0x3db, 0x5, 0x84, 0x43, 
    0x2, 0x3d8, 0x3db, 0x5, 0x80, 0x41, 0x2, 0x3d9, 0x3db, 0x5, 0xaa, 0x56, 
    0x2, 0x3da, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d3, 0x3, 0x2, 0x2, 
    0x2, 0x3da, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d5, 0x3, 0x2, 0x2, 
    0x2, 0x3da, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d7, 0x3, 0x2, 0x2, 
    0x2, 0x3da, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d9, 0x3, 0x2, 0x2, 
    0x2, 0x3db, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x7, 0x4b, 0x2, 
    0x2, 0x3dd, 0x3df, 0x7, 0x82, 0x2, 0x2, 0x3de, 0x3e0, 0x5, 0xca, 0x66, 
    0x2, 0x3df, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 
    0x2, 0x3e0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x7, 0x61, 0x2, 
    0x2, 0x3e2, 0x3e3, 0x5, 0xf4, 0x7b, 0x2, 0x3e3, 0x3e4, 0x7, 0x7e, 0x2, 
    0x2, 0x3e4, 0x81, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e7, 0x5, 0x8c, 0x47, 
    0x2, 0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0x3, 0x2, 0x2, 
    0x2, 0x3e7, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3ea, 0x5, 0xdc, 0x6f, 
    0x2, 0x3e9, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x3, 0x2, 0x2, 
    0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3f4, 0x7, 0x7e, 0x2, 
    0x2, 0x3ec, 0x3ee, 0x5, 0xca, 0x66, 0x2, 0x3ed, 0x3ef, 0x5, 0x8c, 0x47, 
    0x2, 0x3ee, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 
    0x2, 0x3ef, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x5, 0xdc, 0x6f, 
    0x2, 0x3f1, 0x3f2, 0x7, 0x7e, 0x2, 0x2, 0x3f2, 0x3f4, 0x3, 0x2, 0x2, 
    0x2, 0x3f3, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3ec, 0x3, 0x2, 0x2, 
    0x2, 0x3f4, 0x83, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x7, 0x3c, 0x2, 
    0x2, 0x3f6, 0x3f7, 0x7, 0x51, 0x2, 0x2, 0x3f7, 0x3f8, 0x5, 0x5e, 0x30, 
    0x2, 0x3f8, 0x3f9, 0x7, 0x78, 0x2, 0x2, 0x3f9, 0x3fa, 0x7, 0x8b, 0x2, 
    0x2, 0x3fa, 0x3fb, 0x7, 0x52, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x7e, 0x2, 
    0x2, 0x3fc, 0x85, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x7, 0x7e, 0x2, 
    0x2, 0x3fe, 0x87, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x5, 0xca, 0x66, 
    0x2, 0x400, 0x401, 0x7, 0x7e, 0x2, 0x2, 0x401, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x402, 0x409, 0x5, 0x8e, 0x48, 0x2, 0x403, 0x409, 0x5, 0x94, 0x4b, 
    0x2, 0x404, 0x409, 0x5, 0x90, 0x49, 0x2, 0x405, 0x409, 0x7, 0x25, 0x2, 
    0x2, 0x406, 0x409, 0x7, 0x46, 0x2, 0x2, 0x407, 0x409, 0x7, 0x13, 0x2, 
    0x2, 0x408, 0x402, 0x3, 0x2, 0x2, 0x2, 0x408, 0x403, 0x3, 0x2, 0x2, 
    0x2, 0x408, 0x404, 0x3, 0x2, 0x2, 0x2, 0x408, 0x405, 0x3, 0x2, 0x2, 
    0x2, 0x408, 0x406, 0x3, 0x2, 0x2, 0x2, 0x408, 0x407, 0x3, 0x2, 0x2, 
    0x2, 0x409, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40c, 0x5, 0x8a, 0x46, 
    0x2, 0x40b, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x3, 0x2, 0x2, 
    0x2, 0x40d, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 0x3, 0x2, 0x2, 
    0x2, 0x40e, 0x410, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x411, 0x5, 0xca, 0x66, 
    0x2, 0x410, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 
    0x2, 0x411, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x412, 0x413, 0x9, 0xe, 0x2, 0x2, 
    0x413, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 0x9, 0xf, 0x2, 0x2, 0x415, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x7, 0x82, 0x2, 0x2, 0x417, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x418, 0x41c, 0x5, 0x96, 0x4c, 0x2, 0x419, 
    0x41c, 0x5, 0x116, 0x8c, 0x2, 0x41a, 0x41c, 0x5, 0xa6, 0x54, 0x2, 0x41b, 
    0x418, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x419, 0x3, 0x2, 0x2, 0x2, 0x41b, 
    0x41a, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x95, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x422, 
    0x5, 0x9c, 0x4f, 0x2, 0x41e, 0x422, 0x5, 0xa2, 0x52, 0x2, 0x41f, 0x422, 
    0x5, 0x15e, 0xb0, 0x2, 0x420, 0x422, 0x5, 0xee, 0x78, 0x2, 0x421, 0x41d, 
    0x3, 0x2, 0x2, 0x2, 0x421, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x421, 0x41f, 
    0x3, 0x2, 0x2, 0x2, 0x421, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x423, 0x425, 0x5, 0x94, 0x4b, 0x2, 0x424, 0x423, 0x3, 
    0x2, 0x2, 0x2, 0x425, 0x426, 0x3, 0x2, 0x2, 0x2, 0x426, 0x424, 0x3, 
    0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x429, 0x3, 
    0x2, 0x2, 0x2, 0x428, 0x42a, 0x5, 0xca, 0x66, 0x2, 0x429, 0x428, 0x3, 
    0x2, 0x2, 0x2, 0x429, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x42b, 0x42d, 0x5, 0x96, 0x4c, 0x2, 0x42c, 0x42b, 0x3, 0x2, 
    0x2, 0x2, 0x42d, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42c, 0x3, 0x2, 
    0x2, 0x2, 0x42e, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x431, 0x3, 0x2, 
    0x2, 0x2, 0x430, 0x432, 0x5, 0xca, 0x66, 0x2, 0x431, 0x430, 0x3, 0x2, 
    0x2, 0x2, 0x431, 0x432, 0x3, 0x2, 0x2, 0x2, 0x432, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0x433, 0x435, 0x5, 0xc, 0x7, 0x2, 0x434, 0x433, 0x3, 0x2, 0x2, 
    0x2, 0x434, 0x435, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x3, 0x2, 0x2, 
    0x2, 0x436, 0x44b, 0x5, 0x9e, 0x50, 0x2, 0x437, 0x438, 0x5, 0xc, 0x7, 
    0x2, 0x438, 0x439, 0x7, 0x40, 0x2, 0x2, 0x439, 0x43a, 0x5, 0x154, 0xab, 
    0x2, 0x43a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x44b, 0x7, 0xe, 0x2, 
    0x2, 0x43c, 0x44b, 0x7, 0xf, 0x2, 0x2, 0x43d, 0x44b, 0x7, 0x10, 0x2, 
    0x2, 0x43e, 0x44b, 0x7, 0x4f, 0x2, 0x2, 0x43f, 0x44b, 0x7, 0xa, 0x2, 
    0x2, 0x440, 0x44b, 0x7, 0x38, 0x2, 0x2, 0x441, 0x44b, 0x7, 0x29, 0x2, 
    0x2, 0x442, 0x44b, 0x7, 0x2a, 0x2, 0x2, 0x443, 0x44b, 0x7, 0x39, 0x2, 
    0x2, 0x444, 0x44b, 0x7, 0x4a, 0x2, 0x2, 0x445, 0x44b, 0x7, 0x23, 0x2, 
    0x2, 0x446, 0x44b, 0x7, 0x1a, 0x2, 0x2, 0x447, 0x44b, 0x7, 0x4d, 0x2, 
    0x2, 0x448, 0x44b, 0x7, 0x9, 0x2, 0x2, 0x449, 0x44b, 0x5, 0xa0, 0x51, 
    0x2, 0x44a, 0x434, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x437, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x43c, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x43e, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x440, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x441, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x442, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x443, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x444, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x445, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x446, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x447, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x448, 0x3, 0x2, 0x2, 
    0x2, 0x44a, 0x449, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x44c, 0x451, 0x5, 0x114, 0x8b, 0x2, 0x44d, 0x451, 0x5, 0xa4, 0x53, 
    0x2, 0x44e, 0x451, 0x5, 0x92, 0x4a, 0x2, 0x44f, 0x451, 0x5, 0x154, 0xab, 
    0x2, 0x450, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44d, 0x3, 0x2, 0x2, 
    0x2, 0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44f, 0x3, 0x2, 0x2, 
    0x2, 0x451, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x7, 0x16, 0x2, 
    0x2, 0x453, 0x456, 0x7, 0x51, 0x2, 0x2, 0x454, 0x457, 0x5, 0x5c, 0x2f, 
    0x2, 0x455, 0x457, 0x7, 0x9, 0x2, 0x2, 0x456, 0x454, 0x3, 0x2, 0x2, 
    0x2, 0x456, 0x455, 0x3, 0x2, 0x2, 0x2, 0x457, 0x458, 0x3, 0x2, 0x2, 
    0x2, 0x458, 0x459, 0x7, 0x52, 0x2, 0x2, 0x459, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x45a, 0x469, 0x5, 0x11e, 0x90, 0x2, 0x45b, 0x45d, 0x5, 0xca, 0x66, 
    0x2, 0x45c, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45d, 0x3, 0x2, 0x2, 
    0x2, 0x45d, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x460, 0x5, 0xc, 0x7, 
    0x2, 0x45f, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x461, 0x3, 0x2, 0x2, 0x2, 0x461, 0x46a, 0x7, 0x82, 0x2, 
    0x2, 0x462, 0x46a, 0x5, 0x154, 0xab, 0x2, 0x463, 0x465, 0x5, 0xc, 0x7, 
    0x2, 0x464, 0x466, 0x7, 0x40, 0x2, 0x2, 0x465, 0x464, 0x3, 0x2, 0x2, 
    0x2, 0x465, 0x466, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 0x3, 0x2, 0x2, 
    0x2, 0x467, 0x468, 0x5, 0x154, 0xab, 0x2, 0x468, 0x46a, 0x3, 0x2, 0x2, 
    0x2, 0x469, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x469, 0x462, 0x3, 0x2, 0x2, 
    0x2, 0x469, 0x463, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x471, 0x3, 0x2, 0x2, 
    0x2, 0x46b, 0x46d, 0x7, 0x1d, 0x2, 0x2, 0x46c, 0x46e, 0x5, 0xc, 0x7, 
    0x2, 0x46d, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x3, 0x2, 0x2, 
    0x2, 0x46e, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x471, 0x7, 0x82, 0x2, 
    0x2, 0x470, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46b, 0x3, 0x2, 0x2, 
    0x2, 0x471, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x7, 0x82, 0x2, 
    0x2, 0x473, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 0x5, 0xa8, 0x55, 
    0x2, 0x475, 0x47a, 0x7, 0x55, 0x2, 0x2, 0x476, 0x478, 0x5, 0xb0, 0x59, 
    0x2, 0x477, 0x479, 0x7, 0x78, 0x2, 0x2, 0x478, 0x477, 0x3, 0x2, 0x2, 
    0x2, 0x478, 0x479, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47b, 0x3, 0x2, 0x2, 
    0x2, 0x47a, 0x476, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47b, 0x3, 0x2, 0x2, 
    0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x47d, 0x7, 0x56, 0x2, 
    0x2, 0x47d, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x480, 0x5, 0xac, 0x57, 
    0x2, 0x47f, 0x481, 0x5, 0xca, 0x66, 0x2, 0x480, 0x47f, 0x3, 0x2, 0x2, 
    0x2, 0x480, 0x481, 0x3, 0x2, 0x2, 0x2, 0x481, 0x486, 0x3, 0x2, 0x2, 
    0x2, 0x482, 0x484, 0x5, 0xc, 0x7, 0x2, 0x483, 0x482, 0x3, 0x2, 0x2, 
    0x2, 0x483, 0x484, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 
    0x2, 0x485, 0x487, 0x7, 0x82, 0x2, 0x2, 0x486, 0x483, 0x3, 0x2, 0x2, 
    0x2, 0x486, 0x487, 0x3, 0x2, 0x2, 0x2, 0x487, 0x489, 0x3, 0x2, 0x2, 
    0x2, 0x488, 0x48a, 0x5, 0xae, 0x58, 0x2, 0x489, 0x488, 0x3, 0x2, 0x2, 
    0x2, 0x489, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48a, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x48b, 0x48d, 0x5, 0xac, 0x57, 0x2, 0x48c, 0x48e, 0x5, 0xca, 0x66, 0x2, 
    0x48d, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 0x3, 0x2, 0x2, 0x2, 
    0x48e, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x491, 0x7, 0x82, 0x2, 0x2, 
    0x490, 0x492, 0x5, 0xae, 0x58, 0x2, 0x491, 0x490, 0x3, 0x2, 0x2, 0x2, 
    0x491, 0x492, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x3, 0x2, 0x2, 0x2, 
    0x493, 0x494, 0x7, 0x7e, 0x2, 0x2, 0x494, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x495, 0x497, 0x7, 0x1d, 0x2, 0x2, 0x496, 0x498, 0x9, 0x10, 0x2, 0x2, 
    0x497, 0x496, 0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 0x2, 0x2, 
    0x498, 0xad, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x7, 0x7c, 0x2, 0x2, 
    0x49a, 0x49b, 0x5, 0x98, 0x4d, 0x2, 0x49b, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x49c, 0x4a1, 0x5, 0xb2, 0x5a, 0x2, 0x49d, 0x49e, 0x7, 0x78, 0x2, 0x2, 
    0x49e, 0x4a0, 0x5, 0xb2, 0x5a, 0x2, 0x49f, 0x49d, 0x3, 0x2, 0x2, 0x2, 
    0x4a0, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x49f, 0x3, 0x2, 0x2, 0x2, 
    0x4a1, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x4a3, 
    0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a7, 0x5, 0xb4, 0x5b, 0x2, 0x4a5, 
    0x4a6, 0x7, 0x61, 0x2, 0x2, 0x4a6, 0x4a8, 0x5, 0x5e, 0x30, 0x2, 0x4a7, 
    0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4a8, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 0x7, 0x82, 0x2, 0x2, 0x4aa, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ae, 0x5, 0xb8, 0x5d, 0x2, 0x4ac, 
    0x4ae, 0x5, 0xbc, 0x5f, 0x2, 0x4ad, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ad, 
    0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 
    0x7, 0x82, 0x2, 0x2, 0x4b0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b3, 
    0x7, 0x28, 0x2, 0x2, 0x4b2, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 
    0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b7, 
    0x7, 0x2c, 0x2, 0x2, 0x4b5, 0x4b8, 0x7, 0x82, 0x2, 0x2, 0x4b6, 0x4b8, 
    0x5, 0xb8, 0x5d, 0x2, 0x4b7, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b6, 
    0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b9, 
    0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4bb, 0x7, 0x55, 0x2, 0x2, 0x4ba, 0x4bc, 
    0x5, 0x7a, 0x3e, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4bc, 
    0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 
    0x7, 0x56, 0x2, 0x2, 0x4be, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 
    0x7, 0x82, 0x2, 0x2, 0x4c0, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c2, 
    0x7, 0x2c, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 0x82, 0x2, 0x2, 0x4c3, 0x4c4, 
    0x7, 0x61, 0x2, 0x2, 0x4c4, 0x4c5, 0x5, 0xc0, 0x61, 0x2, 0x4c5, 0x4c6, 
    0x7, 0x7e, 0x2, 0x2, 0x4c6, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c9, 
    0x5, 0xc, 0x7, 0x2, 0x4c8, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 
    0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 
    0x5, 0xb6, 0x5c, 0x2, 0x4cb, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4d2, 
    0x7, 0x4b, 0x2, 0x2, 0x4cd, 0x4cf, 0x7, 0x48, 0x2, 0x2, 0x4ce, 0x4cd, 
    0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4d0, 
    0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d3, 0x5, 0xc, 0x7, 0x2, 0x4d1, 0x4d3, 
    0x7, 0x7d, 0x2, 0x2, 0x4d2, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d1, 
    0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 
    0x5, 0x8, 0x5, 0x2, 0x4d5, 0x4d6, 0x7, 0x7e, 0x2, 0x2, 0x4d6, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d9, 0x5, 0xca, 0x66, 0x2, 0x4d8, 0x4d7, 
    0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4da, 
    0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x7, 0x4b, 0x2, 0x2, 0x4db, 0x4dd, 
    0x7, 0x2c, 0x2, 0x2, 0x4dc, 0x4de, 0x5, 0xc, 0x7, 0x2, 0x4dd, 0x4dc, 
    0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4df, 
    0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e0, 0x5, 0xb6, 0x5c, 0x2, 0x4e0, 0x4e1, 
    0x7, 0x7e, 0x2, 0x2, 0x4e1, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e3, 
    0x7, 0x8, 0x2, 0x2, 0x4e3, 0x4e4, 0x7, 0x51, 0x2, 0x2, 0x4e4, 0x4e5, 
    0x7, 0x8b, 0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0x52, 0x2, 0x2, 0x4e6, 0x4e7, 
    0x7, 0x7e, 0x2, 0x2, 0x4e7, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 
    0x7, 0x20, 0x2, 0x2, 0x4e9, 0x4f0, 0x7, 0x8b, 0x2, 0x2, 0x4ea, 0x4ec, 
    0x7, 0x55, 0x2, 0x2, 0x4eb, 0x4ed, 0x5, 0x7a, 0x3e, 0x2, 0x4ec, 0x4eb, 
    0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4ee, 
    0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4f1, 0x7, 0x56, 0x2, 0x2, 0x4ef, 0x4f1, 
    0x5, 0x7c, 0x3f, 0x2, 0x4f0, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4ef, 
    0x3, 0x2, 0x2, 0x2, 0x4f1, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f4, 0x5, 
    0xcc, 0x67, 0x2, 0x4f3, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f5, 0x3, 
    0x2, 0x2, 0x2, 0x4f5, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f6, 0x3, 
    0x2, 0x2, 0x2, 0x4f6, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x7, 0x53, 
    0x2, 0x2, 0x4f8, 0x4fa, 0x7, 0x53, 0x2, 0x2, 0x4f9, 0x4fb, 0x5, 0xd0, 
    0x69, 0x2, 0x4fa, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 0x3, 0x2, 
    0x2, 0x2, 0x4fb, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0x7, 0x54, 
    0x2, 0x2, 0x4fd, 0x500, 0x7, 0x54, 0x2, 0x2, 0x4fe, 0x500, 0x5, 0xce, 
    0x68, 0x2, 0x4ff, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x4fe, 0x3, 0x2, 
    0x2, 0x2, 0x500, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x501, 0x502, 0x7, 0x6, 0x2, 
    0x2, 0x502, 0x505, 0x7, 0x51, 0x2, 0x2, 0x503, 0x506, 0x5, 0xf4, 0x7b, 
    0x2, 0x504, 0x506, 0x5, 0x5e, 0x30, 0x2, 0x505, 0x503, 0x3, 0x2, 0x2, 
    0x2, 0x505, 0x504, 0x3, 0x2, 0x2, 0x2, 0x506, 0x508, 0x3, 0x2, 0x2, 
    0x2, 0x507, 0x509, 0x7, 0x81, 0x2, 0x2, 0x508, 0x507, 0x3, 0x2, 0x2, 
    0x2, 0x508, 0x509, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 0x3, 0x2, 0x2, 
    0x2, 0x50a, 0x50b, 0x7, 0x52, 0x2, 0x2, 0x50b, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0x50c, 0x511, 0x5, 0xd2, 0x6a, 0x2, 0x50d, 0x50e, 0x7, 0x78, 0x2, 
    0x2, 0x50e, 0x510, 0x5, 0xd2, 0x6a, 0x2, 0x50f, 0x50d, 0x3, 0x2, 0x2, 
    0x2, 0x510, 0x513, 0x3, 0x2, 0x2, 0x2, 0x511, 0x50f, 0x3, 0x2, 0x2, 
    0x2, 0x511, 0x512, 0x3, 0x2, 0x2, 0x2, 0x512, 0x515, 0x3, 0x2, 0x2, 
    0x2, 0x513, 0x511, 0x3, 0x2, 0x2, 0x2, 0x514, 0x516, 0x7, 0x81, 0x2, 
    0x2, 0x515, 0x514, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 0x3, 0x2, 0x2, 
    0x2, 0x516, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x5, 0xd4, 0x6b, 
    0x2, 0x518, 0x519, 0x7, 0x7d, 0x2, 0x2, 0x519, 0x51b, 0x3, 0x2, 0x2, 
    0x2, 0x51a, 0x517, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x51b, 0x3, 0x2, 0x2, 
    0x2, 0x51b, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51e, 0x7, 0x82, 0x2, 
    0x2, 0x51d, 0x51f, 0x5, 0xd6, 0x6c, 0x2, 0x51e, 0x51d, 0x3, 0x2, 0x2, 
    0x2, 0x51e, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x51f, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0x520, 0x521, 0x7, 0x82, 0x2, 0x2, 0x521, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0x522, 0x524, 0x7, 0x51, 0x2, 0x2, 0x523, 0x525, 0x5, 0xd8, 0x6d, 0x2, 
    0x524, 0x523, 0x3, 0x2, 0x2, 0x2, 0x524, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x525, 0x526, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x7, 0x52, 0x2, 0x2, 
    0x527, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x528, 0x52a, 0x5, 0xda, 0x6e, 0x2, 
    0x529, 0x528, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52b, 0x3, 0x2, 0x2, 0x2, 
    0x52b, 0x529, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x52c, 0x3, 0x2, 0x2, 0x2, 
    0x52c, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52e, 0x7, 0x51, 0x2, 0x2, 
    0x52e, 0x52f, 0x5, 0xd8, 0x6d, 0x2, 0x52f, 0x530, 0x7, 0x52, 0x2, 0x2, 
    0x530, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x531, 0x532, 0x7, 0x53, 0x2, 0x2, 
    0x532, 0x533, 0x5, 0xd8, 0x6d, 0x2, 0x533, 0x534, 0x7, 0x54, 0x2, 0x2, 
    0x534, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x535, 0x536, 0x7, 0x55, 0x2, 0x2, 
    0x536, 0x537, 0x5, 0xd8, 0x6d, 0x2, 0x537, 0x538, 0x7, 0x56, 0x2, 0x2, 
    0x538, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53b, 0xa, 0x11, 0x2, 0x2, 
    0x53a, 0x539, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53c, 0x3, 0x2, 0x2, 0x2, 
    0x53c, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x3, 0x2, 0x2, 0x2, 
    0x53d, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x52d, 0x3, 0x2, 0x2, 0x2, 
    0x53e, 0x531, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x535, 0x3, 0x2, 0x2, 0x2, 
    0x53e, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53f, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x540, 
    0x545, 0x5, 0xde, 0x70, 0x2, 0x541, 0x542, 0x7, 0x78, 0x2, 0x2, 0x542, 
    0x544, 0x5, 0xde, 0x70, 0x2, 0x543, 0x541, 0x3, 0x2, 0x2, 0x2, 0x544, 
    0x547, 0x3, 0x2, 0x2, 0x2, 0x545, 0x543, 0x3, 0x2, 0x2, 0x2, 0x545, 
    0x546, 0x3, 0x2, 0x2, 0x2, 0x546, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x547, 0x545, 
    0x3, 0x2, 0x2, 0x2, 0x548, 0x54a, 0x5, 0xe0, 0x71, 0x2, 0x549, 0x54b, 
    0x5, 0x10a, 0x86, 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 
    0x3, 0x2, 0x2, 0x2, 0x54b, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x552, 0x5, 
    0xe2, 0x72, 0x2, 0x54d, 0x54e, 0x5, 0xe4, 0x73, 0x2, 0x54e, 0x54f, 0x5, 
    0xe6, 0x74, 0x2, 0x54f, 0x550, 0x5, 0xe8, 0x75, 0x2, 0x550, 0x552, 0x3, 
    0x2, 0x2, 0x2, 0x551, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x551, 0x54d, 0x3, 
    0x2, 0x2, 0x2, 0x552, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x553, 0x555, 0x5, 0xea, 
    0x76, 0x2, 0x554, 0x556, 0x7, 0x12, 0x2, 0x2, 0x555, 0x554, 0x3, 0x2, 
    0x2, 0x2, 0x555, 0x556, 0x3, 0x2, 0x2, 0x2, 0x556, 0x558, 0x3, 0x2, 
    0x2, 0x2, 0x557, 0x553, 0x3, 0x2, 0x2, 0x2, 0x558, 0x55b, 0x3, 0x2, 
    0x2, 0x2, 0x559, 0x557, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55a, 0x3, 0x2, 
    0x2, 0x2, 0x55a, 0x55c, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x559, 0x3, 0x2, 
    0x2, 0x2, 0x55c, 0x55d, 0x5, 0xe4, 0x73, 0x2, 0x55d, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0x55e, 0x55f, 0x8, 0x73, 0x1, 0x2, 0x55f, 0x561, 0x5, 0xf2, 
    0x7a, 0x2, 0x560, 0x562, 0x5, 0xca, 0x66, 0x2, 0x561, 0x560, 0x3, 0x2, 
    0x2, 0x2, 0x561, 0x562, 0x3, 0x2, 0x2, 0x2, 0x562, 0x568, 0x3, 0x2, 
    0x2, 0x2, 0x563, 0x564, 0x7, 0x51, 0x2, 0x2, 0x564, 0x565, 0x5, 0xe2, 
    0x72, 0x2, 0x565, 0x566, 0x7, 0x52, 0x2, 0x2, 0x566, 0x568, 0x3, 0x2, 
    0x2, 0x2, 0x567, 0x55e, 0x3, 0x2, 0x2, 0x2, 0x567, 0x563, 0x3, 0x2, 
    0x2, 0x2, 0x568, 0x577, 0x3, 0x2, 0x2, 0x2, 0x569, 0x573, 0xc, 0x4, 
    0x2, 0x2, 0x56a, 0x574, 0x5, 0xe6, 0x74, 0x2, 0x56b, 0x56d, 0x7, 0x53, 
    0x2, 0x2, 0x56c, 0x56e, 0x5, 0x5e, 0x30, 0x2, 0x56d, 0x56c, 0x3, 0x2, 
    0x2, 0x2, 0x56d, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x56f, 0x3, 0x2, 
    0x2, 0x2, 0x56f, 0x571, 0x7, 0x54, 0x2, 0x2, 0x570, 0x572, 0x5, 0xca, 
    0x66, 0x2, 0x571, 0x570, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 0x3, 0x2, 
    0x2, 0x2, 0x572, 0x574, 0x3, 0x2, 0x2, 0x2, 0x573, 0x56a, 0x3, 0x2, 
    0x2, 0x2, 0x573, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x574, 0x576, 0x3, 0x2, 
    0x2, 0x2, 0x575, 0x569, 0x3, 0x2, 0x2, 0x2, 0x576, 0x579, 0x3, 0x2, 
    0x2, 0x2, 0x577, 0x575, 0x3, 0x2, 0x2, 0x2, 0x577, 0x578, 0x3, 0x2, 
    0x2, 0x2, 0x578, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x579, 0x577, 0x3, 0x2, 0x2, 
    0x2, 0x57a, 0x57c, 0x7, 0x51, 0x2, 0x2, 0x57b, 0x57d, 0x5, 0x100, 0x81, 
    0x2, 0x57c, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 0x3, 0x2, 0x2, 
    0x2, 0x57d, 0x57e, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x580, 0x7, 0x52, 0x2, 
    0x2, 0x57f, 0x581, 0x5, 0xec, 0x77, 0x2, 0x580, 0x57f, 0x3, 0x2, 0x2, 
    0x2, 0x580, 0x581, 0x3, 0x2, 0x2, 0x2, 0x581, 0x583, 0x3, 0x2, 0x2, 
    0x2, 0x582, 0x584, 0x5, 0xf0, 0x79, 0x2, 0x583, 0x582, 0x3, 0x2, 0x2, 
    0x2, 0x583, 0x584, 0x3, 0x2, 0x2, 0x2, 0x584, 0x586, 0x3, 0x2, 0x2, 
    0x2, 0x585, 0x587, 0x5, 0x170, 0xb9, 0x2, 0x586, 0x585, 0x3, 0x2, 0x2, 
    0x2, 0x586, 0x587, 0x3, 0x2, 0x2, 0x2, 0x587, 0x589, 0x3, 0x2, 0x2, 
    0x2, 0x588, 0x58a, 0x5, 0xca, 0x66, 0x2, 0x589, 0x588, 0x3, 0x2, 0x2, 
    0x2, 0x589, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x58a, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0x58b, 0x58c, 0x7, 0x7a, 0x2, 0x2, 0x58c, 0x58e, 0x5, 0x9a, 0x4e, 0x2, 
    0x58d, 0x58f, 0x5, 0xf6, 0x7c, 0x2, 0x58e, 0x58d, 0x3, 0x2, 0x2, 0x2, 
    0x58e, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x58f, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x590, 
    0x592, 0x9, 0x12, 0x2, 0x2, 0x591, 0x593, 0x5, 0xca, 0x66, 0x2, 0x592, 
    0x591, 0x3, 0x2, 0x2, 0x2, 0x592, 0x593, 0x3, 0x2, 0x2, 0x2, 0x593, 
    0x59f, 0x3, 0x2, 0x2, 0x2, 0x594, 0x596, 0x5, 0xc, 0x7, 0x2, 0x595, 
    0x594, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 0x3, 0x2, 0x2, 0x2, 0x596, 
    0x597, 0x3, 0x2, 0x2, 0x2, 0x597, 0x599, 0x7, 0x59, 0x2, 0x2, 0x598, 
    0x59a, 0x5, 0xca, 0x66, 0x2, 0x599, 0x598, 0x3, 0x2, 0x2, 0x2, 0x599, 
    0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x59b, 
    0x59d, 0x5, 0xec, 0x77, 0x2, 0x59c, 0x59b, 0x3, 0x2, 0x2, 0x2, 0x59c, 
    0x59d, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x59f, 0x3, 0x2, 0x2, 0x2, 0x59e, 
    0x590, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x595, 0x3, 0x2, 0x2, 0x2, 0x59f, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a2, 0x5, 0xee, 0x78, 0x2, 0x5a1, 
    0x5a0, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a3, 
    0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a4, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a6, 0x9, 0x13, 0x2, 0x2, 0x5a6, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x9, 0x12, 0x2, 0x2, 0x5a8, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5ab, 0x7, 0x81, 0x2, 0x2, 0x5aa, 
    0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x5ab, 
    0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0x5, 0x6, 0x4, 0x2, 0x5ad, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5b0, 0x5, 0x98, 0x4d, 0x2, 0x5af, 
    0x5b1, 0x5, 0xf6, 0x7c, 0x2, 0x5b0, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5b0, 
    0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5b1, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5bb, 
    0x5, 0xf8, 0x7d, 0x2, 0x5b3, 0x5b5, 0x5, 0xfa, 0x7e, 0x2, 0x5b4, 0x5b3, 
    0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b6, 
    0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x5, 0xe6, 0x74, 0x2, 0x5b7, 0x5b8, 
    0x5, 0xe8, 0x75, 0x2, 0x5b8, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5bb, 
    0x5, 0xfc, 0x7f, 0x2, 0x5ba, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b4, 
    0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0x5bc, 0x5c6, 0x5, 0xfa, 0x7e, 0x2, 0x5bd, 0x5bf, 0x5, 
    0xea, 0x76, 0x2, 0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 0x3, 
    0x2, 0x2, 0x2, 0x5c0, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 0x3, 
    0x2, 0x2, 0x2, 0x5c1, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c4, 0x5, 
    0xfa, 0x7e, 0x2, 0x5c3, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c4, 0x3, 
    0x2, 0x2, 0x2, 0x5c4, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5bc, 0x3, 
    0x2, 0x2, 0x2, 0x5c5, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0x5c7, 0x5c8, 0x8, 0x7e, 0x1, 0x2, 0x5c8, 0x5d6, 0x5, 0xe6, 
    0x74, 0x2, 0x5c9, 0x5cb, 0x7, 0x53, 0x2, 0x2, 0x5ca, 0x5cc, 0x5, 0x5e, 
    0x30, 0x2, 0x5cb, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cc, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5cf, 0x7, 0x54, 
    0x2, 0x2, 0x5ce, 0x5d0, 0x5, 0xca, 0x66, 0x2, 0x5cf, 0x5ce, 0x3, 0x2, 
    0x2, 0x2, 0x5cf, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d6, 0x3, 0x2, 
    0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0x51, 0x2, 0x2, 0x5d2, 0x5d3, 0x5, 0xf8, 
    0x7d, 0x2, 0x5d3, 0x5d4, 0x7, 0x52, 0x2, 0x2, 0x5d4, 0x5d6, 0x3, 0x2, 
    0x2, 0x2, 0x5d5, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5c9, 0x3, 0x2, 
    0x2, 0x2, 0x5d5, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5e6, 0x3, 0x2, 
    0x2, 0x2, 0x5d7, 0x5e2, 0xc, 0x6, 0x2, 0x2, 0x5d8, 0x5e3, 0x5, 0xe6, 
    0x74, 0x2, 0x5d9, 0x5da, 0x5, 0xfa, 0x7e, 0x2, 0x5da, 0x5dc, 0x7, 0x53, 
    0x2, 0x2, 0x5db, 0x5dd, 0x5, 0x5e, 0x30, 0x2, 0x5dc, 0x5db, 0x3, 0x2, 
    0x2, 0x2, 0x5dc, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x3, 0x2, 
    0x2, 0x2, 0x5de, 0x5e0, 0x7, 0x54, 0x2, 0x2, 0x5df, 0x5e1, 0x5, 0xca, 
    0x66, 0x2, 0x5e0, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e1, 0x3, 0x2, 
    0x2, 0x2, 0x5e1, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5d8, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e5, 0x3, 0x2, 
    0x2, 0x2, 0x5e4, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e8, 0x3, 0x2, 
    0x2, 0x2, 0x5e6, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 0x3, 0x2, 
    0x2, 0x2, 0x5e7, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e6, 0x3, 0x2, 0x2, 
    0x2, 0x5e9, 0x5eb, 0x5, 0xea, 0x76, 0x2, 0x5ea, 0x5e9, 0x3, 0x2, 0x2, 
    0x2, 0x5eb, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ea, 0x3, 0x2, 0x2, 
    0x2, 0x5ec, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ef, 0x3, 0x2, 0x2, 
    0x2, 0x5ee, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 0x5, 0xfe, 0x80, 
    0x2, 0x5f0, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5f2, 0x8, 0x80, 0x1, 
    0x2, 0x5f2, 0x5f3, 0x7, 0x81, 0x2, 0x2, 0x5f3, 0x602, 0x3, 0x2, 0x2, 
    0x2, 0x5f4, 0x5fe, 0xc, 0x4, 0x2, 0x2, 0x5f5, 0x5ff, 0x5, 0xe6, 0x74, 
    0x2, 0x5f6, 0x5f8, 0x7, 0x53, 0x2, 0x2, 0x5f7, 0x5f9, 0x5, 0x5e, 0x30, 
    0x2, 0x5f8, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f9, 0x3, 0x2, 0x2, 
    0x2, 0x5f9, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fc, 0x7, 0x54, 0x2, 
    0x2, 0x5fb, 0x5fd, 0x5, 0xca, 0x66, 0x2, 0x5fc, 0x5fb, 0x3, 0x2, 0x2, 
    0x2, 0x5fc, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5ff, 0x3, 0x2, 0x2, 
    0x2, 0x5fe, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5f6, 0x3, 0x2, 0x2, 
    0x2, 0x5ff, 0x601, 0x3, 0x2, 0x2, 0x2, 0x600, 0x5f4, 0x3, 0x2, 0x2, 
    0x2, 0x601, 0x604, 0x3, 0x2, 0x2, 0x2, 0x602, 0x600, 0x3, 0x2, 0x2, 
    0x2, 0x602, 0x603, 0x3, 0x2, 0x2, 0x2, 0x603, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x604, 0x602, 0x3, 0x2, 0x2, 0x2, 0x605, 0x60a, 0x5, 0x102, 0x82, 0x2, 
    0x606, 0x608, 0x7, 0x78, 0x2, 0x2, 0x607, 0x606, 0x3, 0x2, 0x2, 0x2, 
    0x607, 0x608, 0x3, 0x2, 0x2, 0x2, 0x608, 0x609, 0x3, 0x2, 0x2, 0x2, 
    0x609, 0x60b, 0x7, 0x81, 0x2, 0x2, 0x60a, 0x607, 0x3, 0x2, 0x2, 0x2, 
    0x60a, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x60c, 0x611, 0x5, 0x104, 0x83, 0x2, 0x60d, 0x60e, 0x7, 0x78, 0x2, 0x2, 
    0x60e, 0x610, 0x5, 0x104, 0x83, 0x2, 0x60f, 0x60d, 0x3, 0x2, 0x2, 0x2, 
    0x610, 0x613, 0x3, 0x2, 0x2, 0x2, 0x611, 0x60f, 0x3, 0x2, 0x2, 0x2, 
    0x611, 0x612, 0x3, 0x2, 0x2, 0x2, 0x612, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x613, 0x611, 0x3, 0x2, 0x2, 0x2, 0x614, 0x616, 0x5, 0xca, 0x66, 0x2, 
    0x615, 0x614, 0x3, 0x2, 0x2, 0x2, 0x615, 0x616, 0x3, 0x2, 0x2, 0x2, 
    0x616, 0x617, 0x3, 0x2, 0x2, 0x2, 0x617, 0x61c, 0x5, 0x8c, 0x47, 0x2, 
    0x618, 0x61d, 0x5, 0xe0, 0x71, 0x2, 0x619, 0x61b, 0x5, 0xf6, 0x7c, 0x2, 
    0x61a, 0x619, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61b, 0x3, 0x2, 0x2, 0x2, 
    0x61b, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x618, 0x3, 0x2, 0x2, 0x2, 
    0x61c, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x620, 0x3, 0x2, 0x2, 0x2, 
    0x61e, 0x61f, 0x7, 0x61, 0x2, 0x2, 0x61f, 0x621, 0x5, 0x10e, 0x88, 0x2, 
    0x620, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x3, 0x2, 0x2, 0x2, 
    0x621, 0x105, 0x3, 0x2, 0x2, 0x2, 0x622, 0x624, 0x5, 0xca, 0x66, 0x2, 
    0x623, 0x622, 0x3, 0x2, 0x2, 0x2, 0x623, 0x624, 0x3, 0x2, 0x2, 0x2, 
    0x624, 0x626, 0x3, 0x2, 0x2, 0x2, 0x625, 0x627, 0x5, 0x8c, 0x47, 0x2, 
    0x626, 0x625, 0x3, 0x2, 0x2, 0x2, 0x626, 0x627, 0x3, 0x2, 0x2, 0x2, 
    0x627, 0x628, 0x3, 0x2, 0x2, 0x2, 0x628, 0x62a, 0x5, 0xe0, 0x71, 0x2, 
    0x629, 0x62b, 0x5, 0x128, 0x95, 0x2, 0x62a, 0x629, 0x3, 0x2, 0x2, 0x2, 
    0x62a, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x62b, 0x62c, 0x3, 0x2, 0x2, 0x2, 
    0x62c, 0x62d, 0x5, 0x108, 0x85, 0x2, 0x62d, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x62e, 0x630, 0x5, 0x140, 0xa1, 0x2, 0x62f, 0x62e, 0x3, 0x2, 0x2, 0x2, 
    0x62f, 0x630, 0x3, 0x2, 0x2, 0x2, 0x630, 0x631, 0x3, 0x2, 0x2, 0x2, 
    0x631, 0x637, 0x5, 0x66, 0x34, 0x2, 0x632, 0x637, 0x5, 0x166, 0xb4, 
    0x2, 0x633, 0x634, 0x7, 0x61, 0x2, 0x2, 0x634, 0x635, 0x9, 0x14, 0x2, 
    0x2, 0x635, 0x637, 0x7, 0x7e, 0x2, 0x2, 0x636, 0x62f, 0x3, 0x2, 0x2, 
    0x2, 0x636, 0x632, 0x3, 0x2, 0x2, 0x2, 0x636, 0x633, 0x3, 0x2, 0x2, 
    0x2, 0x637, 0x109, 0x3, 0x2, 0x2, 0x2, 0x638, 0x63e, 0x5, 0x10c, 0x87, 
    0x2, 0x639, 0x63a, 0x7, 0x51, 0x2, 0x2, 0x63a, 0x63b, 0x5, 0x24, 0x13, 
    0x2, 0x63b, 0x63c, 0x7, 0x52, 0x2, 0x2, 0x63c, 0x63e, 0x3, 0x2, 0x2, 
    0x2, 0x63d, 0x638, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x639, 0x3, 0x2, 0x2, 
    0x2, 0x63e, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x63f, 0x640, 0x7, 0x61, 0x2, 
    0x2, 0x640, 0x643, 0x5, 0x10e, 0x88, 0x2, 0x641, 0x643, 0x5, 0x112, 
    0x8a, 0x2, 0x642, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x642, 0x641, 0x3, 0x2, 
    0x2, 0x2, 0x643, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x644, 0x647, 0x5, 0x58, 
    0x2d, 0x2, 0x645, 0x647, 0x5, 0x112, 0x8a, 0x2, 0x646, 0x644, 0x3, 0x2, 
    0x2, 0x2, 0x646, 0x645, 0x3, 0x2, 0x2, 0x2, 0x647, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x648, 0x64a, 0x5, 0x10e, 0x88, 0x2, 0x649, 0x64b, 0x7, 0x81, 
    0x2, 0x2, 0x64a, 0x649, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x3, 0x2, 
    0x2, 0x2, 0x64b, 0x653, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 0x7, 0x78, 
    0x2, 0x2, 0x64d, 0x64f, 0x5, 0x10e, 0x88, 0x2, 0x64e, 0x650, 0x7, 0x81, 
    0x2, 0x2, 0x64f, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x650, 0x3, 0x2, 
    0x2, 0x2, 0x650, 0x652, 0x3, 0x2, 0x2, 0x2, 0x651, 0x64c, 0x3, 0x2, 
    0x2, 0x2, 0x652, 0x655, 0x3, 0x2, 0x2, 0x2, 0x653, 0x651, 0x3, 0x2, 
    0x2, 0x2, 0x653, 0x654, 0x3, 0x2, 0x2, 0x2, 0x654, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x655, 0x653, 0x3, 0x2, 0x2, 0x2, 0x656, 0x65b, 0x7, 0x55, 
    0x2, 0x2, 0x657, 0x659, 0x5, 0x110, 0x89, 0x2, 0x658, 0x65a, 0x7, 0x78, 
    0x2, 0x2, 0x659, 0x658, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65a, 0x3, 0x2, 
    0x2, 0x2, 0x65a, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x657, 0x3, 0x2, 
    0x2, 0x2, 0x65b, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65c, 0x65d, 0x3, 0x2, 
    0x2, 0x2, 0x65d, 0x65e, 0x7, 0x56, 0x2, 0x2, 0x65e, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x65f, 0x662, 0x7, 0x82, 0x2, 0x2, 0x660, 0x662, 0x5, 0x154, 
    0xab, 0x2, 0x661, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x661, 0x660, 0x3, 0x2, 
    0x2, 0x2, 0x662, 0x115, 0x3, 0x2, 0x2, 0x2, 0x663, 0x664, 0x5, 0x118, 
    0x8d, 0x2, 0x664, 0x666, 0x7, 0x55, 0x2, 0x2, 0x665, 0x667, 0x5, 0x120, 
    0x91, 0x2, 0x666, 0x665, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x3, 0x2, 
    0x2, 0x2, 0x667, 0x668, 0x3, 0x2, 0x2, 0x2, 0x668, 0x669, 0x7, 0x56, 
    0x2, 0x2, 0x669, 0x117, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66c, 0x5, 0x11e, 
    0x90, 0x2, 0x66b, 0x66d, 0x5, 0xca, 0x66, 0x2, 0x66c, 0x66b, 0x3, 0x2, 
    0x2, 0x2, 0x66c, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x672, 0x3, 0x2, 
    0x2, 0x2, 0x66e, 0x670, 0x5, 0x11a, 0x8e, 0x2, 0x66f, 0x671, 0x5, 0x11c, 
    0x8f, 0x2, 0x670, 0x66f, 0x3, 0x2, 0x2, 0x2, 0x670, 0x671, 0x3, 0x2, 
    0x2, 0x2, 0x671, 0x673, 0x3, 0x2, 0x2, 0x2, 0x672, 0x66e, 0x3, 0x2, 
    0x2, 0x2, 0x672, 0x673, 0x3, 0x2, 0x2, 0x2, 0x673, 0x675, 0x3, 0x2, 
    0x2, 0x2, 0x674, 0x676, 0x5, 0x12e, 0x98, 0x2, 0x675, 0x674, 0x3, 0x2, 
    0x2, 0x2, 0x675, 0x676, 0x3, 0x2, 0x2, 0x2, 0x676, 0x682, 0x3, 0x2, 
    0x2, 0x2, 0x677, 0x679, 0x7, 0x49, 0x2, 0x2, 0x678, 0x67a, 0x5, 0xca, 
    0x66, 0x2, 0x679, 0x678, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67a, 0x3, 0x2, 
    0x2, 0x2, 0x67a, 0x67f, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67d, 0x5, 0x11a, 
    0x8e, 0x2, 0x67c, 0x67e, 0x5, 0x11c, 0x8f, 0x2, 0x67d, 0x67c, 0x3, 0x2, 
    0x2, 0x2, 0x67d, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x680, 0x3, 0x2, 
    0x2, 0x2, 0x67f, 0x67b, 0x3, 0x2, 0x2, 0x2, 0x67f, 0x680, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x682, 0x3, 0x2, 0x2, 0x2, 0x681, 0x66a, 0x3, 0x2, 
    0x2, 0x2, 0x681, 0x677, 0x3, 0x2, 0x2, 0x2, 0x682, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x683, 0x685, 0x5, 0xc, 0x7, 0x2, 0x684, 0x683, 0x3, 0x2, 
    0x2, 0x2, 0x684, 0x685, 0x3, 0x2, 0x2, 0x2, 0x685, 0x686, 0x3, 0x2, 
    0x2, 0x2, 0x686, 0x687, 0x5, 0x114, 0x8b, 0x2, 0x687, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x688, 0x689, 0x7, 0x22, 0x2, 0x2, 0x689, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x68a, 0x68b, 0x9, 0x10, 0x2, 0x2, 0x68b, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x68c, 0x691, 0x5, 0x122, 0x92, 0x2, 0x68d, 0x68e, 0x5, 0x138, 
    0x9d, 0x2, 0x68e, 0x68f, 0x7, 0x7c, 0x2, 0x2, 0x68f, 0x691, 0x3, 0x2, 
    0x2, 0x2, 0x690, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x690, 0x68d, 0x3, 0x2, 
    0x2, 0x2, 0x691, 0x692, 0x3, 0x2, 0x2, 0x2, 0x692, 0x690, 0x3, 0x2, 
    0x2, 0x2, 0x692, 0x693, 0x3, 0x2, 0x2, 0x2, 0x693, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x694, 0x696, 0x5, 0xca, 0x66, 0x2, 0x695, 0x694, 0x3, 0x2, 
    0x2, 0x2, 0x695, 0x696, 0x3, 0x2, 0x2, 0x2, 0x696, 0x698, 0x3, 0x2, 
    0x2, 0x2, 0x697, 0x699, 0x5, 0x8c, 0x47, 0x2, 0x698, 0x697, 0x3, 0x2, 
    0x2, 0x2, 0x698, 0x699, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69b, 0x3, 0x2, 
    0x2, 0x2, 0x69a, 0x69c, 0x5, 0x124, 0x93, 0x2, 0x69b, 0x69a, 0x3, 0x2, 
    0x2, 0x2, 0x69b, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x69d, 0x3, 0x2, 
    0x2, 0x2, 0x69d, 0x6a5, 0x7, 0x7e, 0x2, 0x2, 0x69e, 0x6a5, 0x5, 0x106, 
    0x84, 0x2, 0x69f, 0x6a5, 0x5, 0xc2, 0x62, 0x2, 0x6a0, 0x6a5, 0x5, 0x84, 
    0x43, 0x2, 0x6a1, 0x6a5, 0x5, 0x14c, 0xa7, 0x2, 0x6a2, 0x6a5, 0x5, 0x80, 
    0x41, 0x2, 0x6a3, 0x6a5, 0x5, 0x86, 0x44, 0x2, 0x6a4, 0x695, 0x3, 0x2, 
    0x2, 0x2, 0x6a4, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x69f, 0x3, 0x2, 
    0x2, 0x2, 0x6a4, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a1, 0x3, 0x2, 
    0x2, 0x2, 0x6a4, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a3, 0x3, 0x2, 
    0x2, 0x2, 0x6a5, 0x123, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6ab, 0x5, 0x126, 
    0x94, 0x2, 0x6a7, 0x6a8, 0x7, 0x78, 0x2, 0x2, 0x6a8, 0x6aa, 0x5, 0x126, 
    0x94, 0x2, 0x6a9, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ad, 0x3, 0x2, 
    0x2, 0x2, 0x6ab, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6ac, 0x3, 0x2, 
    0x2, 0x2, 0x6ac, 0x125, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6ab, 0x3, 0x2, 
    0x2, 0x2, 0x6ae, 0x6b8, 0x5, 0xe0, 0x71, 0x2, 0x6af, 0x6b1, 0x5, 0x128, 
    0x95, 0x2, 0x6b0, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6b1, 0x3, 0x2, 
    0x2, 0x2, 0x6b1, 0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b4, 0x5, 0x12c, 
    0x97, 0x2, 0x6b3, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0x6b4, 0x3, 0x2, 
    0x2, 0x2, 0x6b4, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0x6b7, 0x5, 0x10c, 
    0x87, 0x2, 0x6b6, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b7, 0x3, 0x2, 
    0x2, 0x2, 0x6b7, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6b0, 0x3, 0x2, 
    0x2, 0x2, 0x6b8, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6c3, 0x3, 0x2, 
    0x2, 0x2, 0x6ba, 0x6bc, 0x7, 0x82, 0x2, 0x2, 0x6bb, 0x6ba, 0x3, 0x2, 
    0x2, 0x2, 0x6bb, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6be, 0x3, 0x2, 
    0x2, 0x2, 0x6bd, 0x6bf, 0x5, 0xca, 0x66, 0x2, 0x6be, 0x6bd, 0x3, 0x2, 
    0x2, 0x2, 0x6be, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6c0, 0x3, 0x2, 
    0x2, 0x2, 0x6c0, 0x6c1, 0x7, 0x7c, 0x2, 0x2, 0x6c1, 0x6c3, 0x5, 0x5e, 
    0x30, 0x2, 0x6c2, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6bb, 0x3, 0x2, 
    0x2, 0x2, 0x6c3, 0x127, 0x3, 0x2, 0x2, 0x2, 0x6c4, 0x6c6, 0x5, 0x12a, 
    0x96, 0x2, 0x6c5, 0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 
    0x2, 0x2, 0x6c7, 0x6c5, 0x3, 0x2, 0x2, 0x2, 0x6c7, 0x6c8, 0x3, 0x2, 
    0x2, 0x2, 0x6c8, 0x129, 0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6ca, 0x9, 0x15, 
    0x2, 0x2, 0x6ca, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 0x7, 0x61, 
    0x2, 0x2, 0x6cc, 0x6cd, 0x7, 0x85, 0x2, 0x2, 0x6cd, 0x6ce, 0x8, 0x97, 
    0x1, 0x2, 0x6ce, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d0, 0x7, 0x7c, 
    0x2, 0x2, 0x6d0, 0x6d1, 0x5, 0x130, 0x99, 0x2, 0x6d1, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x6d2, 0x6d4, 0x5, 0x132, 0x9a, 0x2, 0x6d3, 0x6d5, 0x7, 0x81, 
    0x2, 0x2, 0x6d4, 0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 0x3, 0x2, 
    0x2, 0x2, 0x6d5, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x7, 0x78, 
    0x2, 0x2, 0x6d7, 0x6d9, 0x5, 0x132, 0x9a, 0x2, 0x6d8, 0x6da, 0x7, 0x81, 
    0x2, 0x2, 0x6d9, 0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6da, 0x3, 0x2, 
    0x2, 0x2, 0x6da, 0x6dc, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6d6, 0x3, 0x2, 
    0x2, 0x2, 0x6dc, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6db, 0x3, 0x2, 
    0x2, 0x2, 0x6dd, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x6df, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e2, 0x5, 0xca, 
    0x66, 0x2, 0x6e1, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e2, 0x3, 0x2, 
    0x2, 0x2, 0x6e2, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6e3, 0x6f0, 0x5, 0x136, 
    0x9c, 0x2, 0x6e4, 0x6e6, 0x7, 0x4c, 0x2, 0x2, 0x6e5, 0x6e7, 0x5, 0x138, 
    0x9d, 0x2, 0x6e6, 0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e7, 0x3, 0x2, 
    0x2, 0x2, 0x6e7, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6f0, 0x5, 0x136, 
    0x9c, 0x2, 0x6e9, 0x6eb, 0x5, 0x138, 0x9d, 0x2, 0x6ea, 0x6ec, 0x7, 0x4c, 
    0x2, 0x2, 0x6eb, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ec, 0x3, 0x2, 
    0x2, 0x2, 0x6ec, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6ee, 0x5, 0x136, 
    0x9c, 0x2, 0x6ee, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6e3, 0x3, 0x2, 
    0x2, 0x2, 0x6ef, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6ef, 0x6e9, 0x3, 0x2, 
    0x2, 0x2, 0x6f0, 0x133, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f3, 0x5, 0xc, 
    0x7, 0x2, 0x6f2, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x3, 0x2, 
    0x2, 0x2, 0x6f3, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f7, 0x5, 0x114, 
    0x8b, 0x2, 0x6f5, 0x6f7, 0x5, 0xa0, 0x51, 0x2, 0x6f6, 0x6f2, 0x3, 0x2, 
    0x2, 0x2, 0x6f6, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x6f8, 0x6f9, 0x5, 0x134, 0x9b, 0x2, 0x6f9, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x6fa, 0x6fb, 0x9, 0x16, 0x2, 0x2, 0x6fb, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x6fc, 0x6fd, 0x7, 0x30, 0x2, 0x2, 0x6fd, 0x6fe, 0x5, 0x13c, 
    0x9f, 0x2, 0x6fe, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x701, 0x5, 0x98, 
    0x4d, 0x2, 0x700, 0x702, 0x5, 0x13e, 0xa0, 0x2, 0x701, 0x700, 0x3, 0x2, 
    0x2, 0x2, 0x701, 0x702, 0x3, 0x2, 0x2, 0x2, 0x702, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x703, 0x705, 0x5, 0xea, 0x76, 0x2, 0x704, 0x706, 0x5, 0x13e, 
    0xa0, 0x2, 0x705, 0x704, 0x3, 0x2, 0x2, 0x2, 0x705, 0x706, 0x3, 0x2, 
    0x2, 0x2, 0x706, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x707, 0x708, 0x7, 0x7c, 
    0x2, 0x2, 0x708, 0x709, 0x5, 0x142, 0xa2, 0x2, 0x709, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x70a, 0x70c, 0x5, 0x144, 0xa3, 0x2, 0x70b, 0x70d, 0x7, 0x81, 
    0x2, 0x2, 0x70c, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70d, 0x3, 0x2, 
    0x2, 0x2, 0x70d, 0x715, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x70f, 0x7, 0x78, 
    0x2, 0x2, 0x70f, 0x711, 0x5, 0x144, 0xa3, 0x2, 0x710, 0x712, 0x7, 0x81, 
    0x2, 0x2, 0x711, 0x710, 0x3, 0x2, 0x2, 0x2, 0x711, 0x712, 0x3, 0x2, 
    0x2, 0x2, 0x712, 0x714, 0x3, 0x2, 0x2, 0x2, 0x713, 0x70e, 0x3, 0x2, 
    0x2, 0x2, 0x714, 0x717, 0x3, 0x2, 0x2, 0x2, 0x715, 0x713, 0x3, 0x2, 
    0x2, 0x2, 0x715, 0x716, 0x3, 0x2, 0x2, 0x2, 0x716, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x717, 0x715, 0x3, 0x2, 0x2, 0x2, 0x718, 0x71f, 0x5, 0x146, 
    0xa4, 0x2, 0x719, 0x71b, 0x7, 0x51, 0x2, 0x2, 0x71a, 0x71c, 0x5, 0x24, 
    0x13, 0x2, 0x71b, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x71c, 0x3, 0x2, 
    0x2, 0x2, 0x71c, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x720, 0x7, 0x52, 
    0x2, 0x2, 0x71e, 0x720, 0x5, 0x112, 0x8a, 0x2, 0x71f, 0x719, 0x3, 0x2, 
    0x2, 0x2, 0x71f, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x720, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x721, 0x724, 0x5, 0x134, 0x9b, 0x2, 0x722, 0x724, 0x7, 0x82, 
    0x2, 0x2, 0x723, 0x721, 0x3, 0x2, 0x2, 0x2, 0x723, 0x722, 0x3, 0x2, 
    0x2, 0x2, 0x724, 0x147, 0x3, 0x2, 0x2, 0x2, 0x725, 0x726, 0x7, 0x30, 
    0x2, 0x2, 0x726, 0x727, 0x5, 0x178, 0xbd, 0x2, 0x727, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x728, 0x72c, 0x7, 0x30, 0x2, 0x2, 0x729, 0x72a, 0x7, 0x8b, 
    0x2, 0x2, 0x72a, 0x72d, 0x7, 0x82, 0x2, 0x2, 0x72b, 0x72d, 0x7, 0x91, 
    0x2, 0x2, 0x72c, 0x729, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72b, 0x3, 0x2, 
    0x2, 0x2, 0x72d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 0x7, 0x40, 
    0x2, 0x2, 0x72f, 0x730, 0x7, 0x62, 0x2, 0x2, 0x730, 0x731, 0x5, 0x14e, 
    0xa8, 0x2, 0x731, 0x732, 0x7, 0x63, 0x2, 0x2, 0x732, 0x733, 0x5, 0x7c, 
    0x3f, 0x2, 0x733, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x734, 0x739, 0x5, 0x150, 
    0xa9, 0x2, 0x735, 0x736, 0x7, 0x78, 0x2, 0x2, 0x736, 0x738, 0x5, 0x150, 
    0xa9, 0x2, 0x737, 0x735, 0x3, 0x2, 0x2, 0x2, 0x738, 0x73b, 0x3, 0x2, 
    0x2, 0x2, 0x739, 0x737, 0x3, 0x2, 0x2, 0x2, 0x739, 0x73a, 0x3, 0x2, 
    0x2, 0x2, 0x73a, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x739, 0x3, 0x2, 
    0x2, 0x2, 0x73c, 0x73f, 0x5, 0x152, 0xaa, 0x2, 0x73d, 0x73f, 0x5, 0x104, 
    0x83, 0x2, 0x73e, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x73d, 0x3, 0x2, 
    0x2, 0x2, 0x73f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x740, 0x741, 0x7, 0x40, 
    0x2, 0x2, 0x741, 0x742, 0x7, 0x62, 0x2, 0x2, 0x742, 0x743, 0x5, 0x14e, 
    0xa8, 0x2, 0x743, 0x744, 0x7, 0x63, 0x2, 0x2, 0x744, 0x746, 0x3, 0x2, 
    0x2, 0x2, 0x745, 0x740, 0x3, 0x2, 0x2, 0x2, 0x745, 0x746, 0x3, 0x2, 
    0x2, 0x2, 0x746, 0x747, 0x3, 0x2, 0x2, 0x2, 0x747, 0x74a, 0x7, 0x11, 
    0x2, 0x2, 0x748, 0x74a, 0x7, 0x48, 0x2, 0x2, 0x749, 0x745, 0x3, 0x2, 
    0x2, 0x2, 0x749, 0x748, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x756, 0x3, 0x2, 
    0x2, 0x2, 0x74b, 0x74d, 0x7, 0x81, 0x2, 0x2, 0x74c, 0x74b, 0x3, 0x2, 
    0x2, 0x2, 0x74c, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74f, 0x3, 0x2, 
    0x2, 0x2, 0x74e, 0x750, 0x7, 0x82, 0x2, 0x2, 0x74f, 0x74e, 0x3, 0x2, 
    0x2, 0x2, 0x74f, 0x750, 0x3, 0x2, 0x2, 0x2, 0x750, 0x757, 0x3, 0x2, 
    0x2, 0x2, 0x751, 0x753, 0x7, 0x82, 0x2, 0x2, 0x752, 0x751, 0x3, 0x2, 
    0x2, 0x2, 0x752, 0x753, 0x3, 0x2, 0x2, 0x2, 0x753, 0x754, 0x3, 0x2, 
    0x2, 0x2, 0x754, 0x755, 0x7, 0x61, 0x2, 0x2, 0x755, 0x757, 0x5, 0xf4, 
    0x7b, 0x2, 0x756, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x756, 0x752, 0x3, 0x2, 
    0x2, 0x2, 0x757, 0x153, 0x3, 0x2, 0x2, 0x2, 0x758, 0x759, 0x5, 0x158, 
    0xad, 0x2, 0x759, 0x75b, 0x7, 0x62, 0x2, 0x2, 0x75a, 0x75c, 0x5, 0x15a, 
    0xae, 0x2, 0x75b, 0x75a, 0x3, 0x2, 0x2, 0x2, 0x75b, 0x75c, 0x3, 0x2, 
    0x2, 0x2, 0x75c, 0x75d, 0x3, 0x2, 0x2, 0x2, 0x75d, 0x75e, 0x7, 0x63, 
    0x2, 0x2, 0x75e, 0x155, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x76b, 0x5, 0x154, 
    0xab, 0x2, 0x760, 0x763, 0x5, 0x148, 0xa5, 0x2, 0x761, 0x763, 0x5, 0x14a, 
    0xa6, 0x2, 0x762, 0x760, 0x3, 0x2, 0x2, 0x2, 0x762, 0x761, 0x3, 0x2, 
    0x2, 0x2, 0x763, 0x764, 0x3, 0x2, 0x2, 0x2, 0x764, 0x766, 0x7, 0x62, 
    0x2, 0x2, 0x765, 0x767, 0x5, 0x15a, 0xae, 0x2, 0x766, 0x765, 0x3, 0x2, 
    0x2, 0x2, 0x766, 0x767, 0x3, 0x2, 0x2, 0x2, 0x767, 0x768, 0x3, 0x2, 
    0x2, 0x2, 0x768, 0x769, 0x7, 0x63, 0x2, 0x2, 0x769, 0x76b, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x762, 0x3, 0x2, 
    0x2, 0x2, 0x76b, 0x157, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76d, 0x7, 0x82, 
    0x2, 0x2, 0x76d, 0x159, 0x3, 0x2, 0x2, 0x2, 0x76e, 0x770, 0x5, 0x15c, 
    0xaf, 0x2, 0x76f, 0x771, 0x7, 0x81, 0x2, 0x2, 0x770, 0x76f, 0x3, 0x2, 
    0x2, 0x2, 0x770, 0x771, 0x3, 0x2, 0x2, 0x2, 0x771, 0x779, 0x3, 0x2, 
    0x2, 0x2, 0x772, 0x773, 0x7, 0x78, 0x2, 0x2, 0x773, 0x775, 0x5, 0x15c, 
    0xaf, 0x2, 0x774, 0x776, 0x7, 0x81, 0x2, 0x2, 0x775, 0x774, 0x3, 0x2, 
    0x2, 0x2, 0x775, 0x776, 0x3, 0x2, 0x2, 0x2, 0x776, 0x778, 0x3, 0x2, 
    0x2, 0x2, 0x777, 0x772, 0x3, 0x2, 0x2, 0x2, 0x778, 0x77b, 0x3, 0x2, 
    0x2, 0x2, 0x779, 0x777, 0x3, 0x2, 0x2, 0x2, 0x779, 0x77a, 0x3, 0x2, 
    0x2, 0x2, 0x77a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x77b, 0x779, 0x3, 0x2, 
    0x2, 0x2, 0x77c, 0x780, 0x5, 0xf4, 0x7b, 0x2, 0x77d, 0x780, 0x5, 0x5e, 
    0x30, 0x2, 0x77e, 0x780, 0x5, 0x6, 0x4, 0x2, 0x77f, 0x77c, 0x3, 0x2, 
    0x2, 0x2, 0x77f, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x77e, 0x3, 0x2, 
    0x2, 0x2, 0x780, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x781, 0x782, 0x7, 0x48, 
    0x2, 0x2, 0x782, 0x788, 0x5, 0xc, 0x7, 0x2, 0x783, 0x789, 0x7, 0x82, 
    0x2, 0x2, 0x784, 0x786, 0x7, 0x40, 0x2, 0x2, 0x785, 0x784, 0x3, 0x2, 
    0x2, 0x2, 0x785, 0x786, 0x3, 0x2, 0x2, 0x2, 0x786, 0x787, 0x3, 0x2, 
    0x2, 0x2, 0x787, 0x789, 0x5, 0x154, 0xab, 0x2, 0x788, 0x783, 0x3, 0x2, 
    0x2, 0x2, 0x788, 0x785, 0x3, 0x2, 0x2, 0x2, 0x789, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x78a, 0x78c, 0x7, 0x20, 0x2, 0x2, 0x78b, 0x78a, 0x3, 0x2, 
    0x2, 0x2, 0x78b, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78c, 0x78d, 0x3, 0x2, 
    0x2, 0x2, 0x78d, 0x78e, 0x7, 0x40, 0x2, 0x2, 0x78e, 0x78f, 0x5, 0x7c, 
    0x3f, 0x2, 0x78f, 0x161, 0x3, 0x2, 0x2, 0x2, 0x790, 0x791, 0x7, 0x40, 
    0x2, 0x2, 0x791, 0x792, 0x7, 0x62, 0x2, 0x2, 0x792, 0x793, 0x7, 0x63, 
    0x2, 0x2, 0x793, 0x794, 0x5, 0x7c, 0x3f, 0x2, 0x794, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x795, 0x796, 0x7, 0x45, 0x2, 0x2, 0x796, 0x797, 0x5, 0x66, 
    0x34, 0x2, 0x797, 0x798, 0x5, 0x168, 0xb5, 0x2, 0x798, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x799, 0x79b, 0x7, 0x45, 0x2, 0x2, 0x79a, 0x79c, 0x5, 0x140, 
    0xa1, 0x2, 0x79b, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79c, 0x3, 0x2, 
    0x2, 0x2, 0x79c, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x79d, 0x79e, 0x5, 0x66, 
    0x34, 0x2, 0x79e, 0x79f, 0x5, 0x168, 0xb5, 0x2, 0x79f, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x7a0, 0x7a2, 0x5, 0x16a, 0xb6, 0x2, 0x7a1, 0x7a0, 0x3, 0x2, 
    0x2, 0x2, 0x7a2, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a3, 0x7a1, 0x3, 0x2, 
    0x2, 0x2, 0x7a3, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x7a5, 0x7a6, 0x7, 0xd, 0x2, 0x2, 0x7a6, 0x7a7, 0x7, 0x51, 
    0x2, 0x2, 0x7a7, 0x7a8, 0x5, 0x16c, 0xb7, 0x2, 0x7a8, 0x7a9, 0x7, 0x52, 
    0x2, 0x2, 0x7a9, 0x7aa, 0x5, 0x66, 0x34, 0x2, 0x7aa, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x7ab, 0x7ad, 0x5, 0xca, 0x66, 0x2, 0x7ac, 0x7ab, 0x3, 0x2, 
    0x2, 0x2, 0x7ac, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 0x3, 0x2, 
    0x2, 0x2, 0x7ae, 0x7b1, 0x5, 0x98, 0x4d, 0x2, 0x7af, 0x7b2, 0x5, 0xe0, 
    0x71, 0x2, 0x7b0, 0x7b2, 0x5, 0xf6, 0x7c, 0x2, 0x7b1, 0x7af, 0x3, 0x2, 
    0x2, 0x2, 0x7b1, 0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7b2, 0x3, 0x2, 
    0x2, 0x2, 0x7b2, 0x7b5, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b5, 0x7, 0x81, 
    0x2, 0x2, 0x7b4, 0x7ac, 0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b3, 0x3, 0x2, 
    0x2, 0x2, 0x7b5, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b8, 0x7, 0x43, 
    0x2, 0x2, 0x7b7, 0x7b9, 0x5, 0x58, 0x2d, 0x2, 0x7b8, 0x7b7, 0x3, 0x2, 
    0x2, 0x2, 0x7b8, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x7ba, 0x7bd, 0x5, 0x172, 0xba, 0x2, 0x7bb, 0x7bd, 0x5, 0x176, 
    0xbc, 0x2, 0x7bc, 0x7ba, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bb, 0x3, 0x2, 
    0x2, 0x2, 0x7bd, 0x171, 0x3, 0x2, 0x2, 0x2, 0x7be, 0x7bf, 0x7, 0x43, 
    0x2, 0x2, 0x7bf, 0x7c1, 0x7, 0x51, 0x2, 0x2, 0x7c0, 0x7c2, 0x5, 0x174, 
    0xbb, 0x2, 0x7c1, 0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 
    0x2, 0x2, 0x7c2, 0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c4, 0x7, 0x52, 
    0x2, 0x2, 0x7c4, 0x173, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c7, 0x5, 0xf4, 
    0x7b, 0x2, 0x7c6, 0x7c8, 0x7, 0x81, 0x2, 0x2, 0x7c7, 0x7c6, 0x3, 0x2, 
    0x2, 0x2, 0x7c7, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7d0, 0x3, 0x2, 
    0x2, 0x2, 0x7c9, 0x7ca, 0x7, 0x78, 0x2, 0x2, 0x7ca, 0x7cc, 0x5, 0xf4, 
    0x7b, 0x2, 0x7cb, 0x7cd, 0x7, 0x81, 0x2, 0x2, 0x7cc, 0x7cb, 0x3, 0x2, 
    0x2, 0x2, 0x7cc, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7cf, 0x3, 0x2, 
    0x2, 0x2, 0x7ce, 0x7c9, 0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7d2, 0x3, 0x2, 
    0x2, 0x2, 0x7d0, 0x7ce, 0x3, 0x2, 0x2, 0x2, 0x7d0, 0x7d1, 0x3, 0x2, 
    0x2, 0x2, 0x7d1, 0x175, 0x3, 0x2, 0x2, 0x2, 0x7d2, 0x7d0, 0x3, 0x2, 
    0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0x2e, 0x2, 0x2, 0x7d4, 0x7d5, 0x7, 0x51, 
    0x2, 0x2, 0x7d5, 0x7d6, 0x5, 0x5e, 0x30, 0x2, 0x7d6, 0x7d7, 0x7, 0x52, 
    0x2, 0x2, 0x7d7, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7da, 0x7, 0x2e, 
    0x2, 0x2, 0x7d9, 0x7d3, 0x3, 0x2, 0x2, 0x2, 0x7d9, 0x7d8, 0x3, 0x2, 
    0x2, 0x2, 0x7da, 0x177, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7de, 0x7, 0x2d, 
    0x2, 0x2, 0x7dc, 0x7dd, 0x7, 0x53, 0x2, 0x2, 0x7dd, 0x7df, 0x7, 0x54, 
    0x2, 0x2, 0x7de, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7df, 0x3, 0x2, 
    0x2, 0x2, 0x7df, 0x80e, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e3, 0x7, 0x18, 
    0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0x53, 0x2, 0x2, 0x7e2, 0x7e4, 0x7, 0x54, 
    0x2, 0x2, 0x7e3, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x3, 0x2, 
    0x2, 0x2, 0x7e4, 0x80e, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x80e, 0x7, 0x57, 
    0x2, 0x2, 0x7e6, 0x80e, 0x7, 0x58, 0x2, 0x2, 0x7e7, 0x80e, 0x7, 0x59, 
    0x2, 0x2, 0x7e8, 0x80e, 0x7, 0x5a, 0x2, 0x2, 0x7e9, 0x80e, 0x7, 0x5b, 
    0x2, 0x2, 0x7ea, 0x80e, 0x7, 0x5c, 0x2, 0x2, 0x7eb, 0x80e, 0x7, 0x5d, 
    0x2, 0x2, 0x7ec, 0x80e, 0x7, 0x5e, 0x2, 0x2, 0x7ed, 0x80e, 0x7, 0x5f, 
    0x2, 0x2, 0x7ee, 0x80e, 0x7, 0x60, 0x2, 0x2, 0x7ef, 0x80e, 0x7, 0x61, 
    0x2, 0x2, 0x7f0, 0x80e, 0x7, 0x62, 0x2, 0x2, 0x7f1, 0x80e, 0x7, 0x73, 
    0x2, 0x2, 0x7f2, 0x80e, 0x7, 0x64, 0x2, 0x2, 0x7f3, 0x80e, 0x7, 0x65, 
    0x2, 0x2, 0x7f4, 0x80e, 0x7, 0x66, 0x2, 0x2, 0x7f5, 0x80e, 0x7, 0x61, 
    0x2, 0x2, 0x7f6, 0x80e, 0x7, 0x68, 0x2, 0x2, 0x7f7, 0x80e, 0x7, 0x69, 
    0x2, 0x2, 0x7f8, 0x80e, 0x7, 0x6a, 0x2, 0x2, 0x7f9, 0x80e, 0x7, 0x6b, 
    0x2, 0x2, 0x7fa, 0x80e, 0x7, 0x6c, 0x2, 0x2, 0x7fb, 0x80e, 0x7, 0x6d, 
    0x2, 0x2, 0x7fc, 0x80e, 0x7, 0x6f, 0x2, 0x2, 0x7fd, 0x80e, 0x7, 0x6e, 
    0x2, 0x2, 0x7fe, 0x80e, 0x7, 0x70, 0x2, 0x2, 0x7ff, 0x80e, 0x7, 0x71, 
    0x2, 0x2, 0x800, 0x80e, 0x7, 0x72, 0x2, 0x2, 0x801, 0x80e, 0x7, 0x73, 
    0x2, 0x2, 0x802, 0x80e, 0x7, 0x74, 0x2, 0x2, 0x803, 0x80e, 0x7, 0x75, 
    0x2, 0x2, 0x804, 0x80e, 0x7, 0x76, 0x2, 0x2, 0x805, 0x80e, 0x7, 0x77, 
    0x2, 0x2, 0x806, 0x80e, 0x7, 0x78, 0x2, 0x2, 0x807, 0x80e, 0x7, 0x79, 
    0x2, 0x2, 0x808, 0x80e, 0x7, 0x7a, 0x2, 0x2, 0x809, 0x80a, 0x7, 0x51, 
    0x2, 0x2, 0x80a, 0x80e, 0x7, 0x52, 0x2, 0x2, 0x80b, 0x80c, 0x7, 0x53, 
    0x2, 0x2, 0x80c, 0x80e, 0x7, 0x54, 0x2, 0x2, 0x80d, 0x7db, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7e0, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7e5, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7e7, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7e8, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7e9, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7ea, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7eb, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7ed, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7ee, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7ef, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7f1, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7f2, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7f3, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7f5, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7f7, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7f9, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7fb, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7fd, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x7ff, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x800, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x801, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x802, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x803, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x804, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x805, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x806, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x807, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x808, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x809, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x17b, 0x182, 0x18b, 0x18f, 0x198, 0x19b, 0x19f, 0x1a7, 
    0x1ae, 0x1b1, 0x1b6, 0x1bb, 0x1c1, 0x1c9, 0x1cb, 0x1d4, 0x1d8, 0x1dc, 
    0x1df, 0x1e3, 0x1e6, 0x1ef, 0x1f2, 0x1f5, 0x1f8, 0x1fe, 0x202, 0x206, 
    0x214, 0x218, 0x21e, 0x225, 0x22b, 0x22f, 0x233, 0x235, 0x23d, 0x242, 
    0x24f, 0x256, 0x262, 0x26c, 0x271, 0x275, 0x27c, 0x27f, 0x287, 0x28b, 
    0x28e, 0x295, 0x29c, 0x2a0, 0x2a5, 0x2a9, 0x2ac, 0x2b1, 0x2c0, 0x2c7, 
    0x2cf, 0x2d7, 0x2e0, 0x2ea, 0x2f2, 0x2fa, 0x302, 0x30a, 0x312, 0x31a, 
    0x323, 0x32b, 0x334, 0x33b, 0x343, 0x346, 0x349, 0x34f, 0x355, 0x35b, 
    0x362, 0x36b, 0x373, 0x377, 0x37e, 0x380, 0x394, 0x398, 0x39e, 0x3a3, 
    0x3a7, 0x3aa, 0x3b1, 0x3b8, 0x3bc, 0x3c5, 0x3d0, 0x3da, 0x3df, 0x3e6, 
    0x3e9, 0x3ee, 0x3f3, 0x408, 0x40d, 0x410, 0x41b, 0x421, 0x426, 0x429, 
    0x42e, 0x431, 0x434, 0x44a, 0x450, 0x456, 0x45c, 0x45f, 0x465, 0x469, 
    0x46d, 0x470, 0x478, 0x47a, 0x480, 0x483, 0x486, 0x489, 0x48d, 0x491, 
    0x497, 0x4a1, 0x4a7, 0x4ad, 0x4b2, 0x4b7, 0x4bb, 0x4c8, 0x4ce, 0x4d2, 
    0x4d8, 0x4dd, 0x4ec, 0x4f0, 0x4f5, 0x4fa, 0x4ff, 0x505, 0x508, 0x511, 
    0x515, 0x51a, 0x51e, 0x524, 0x52b, 0x53c, 0x53e, 0x545, 0x54a, 0x551, 
    0x555, 0x559, 0x561, 0x567, 0x56d, 0x571, 0x573, 0x577, 0x57c, 0x580, 
    0x583, 0x586, 0x589, 0x58e, 0x592, 0x595, 0x599, 0x59c, 0x59e, 0x5a3, 
    0x5aa, 0x5b0, 0x5b4, 0x5ba, 0x5c0, 0x5c3, 0x5c5, 0x5cb, 0x5cf, 0x5d5, 
    0x5dc, 0x5e0, 0x5e2, 0x5e6, 0x5ec, 0x5f8, 0x5fc, 0x5fe, 0x602, 0x607, 
    0x60a, 0x611, 0x615, 0x61a, 0x61c, 0x620, 0x623, 0x626, 0x62a, 0x62f, 
    0x636, 0x63d, 0x642, 0x646, 0x64a, 0x64f, 0x653, 0x659, 0x65b, 0x661, 
    0x666, 0x66c, 0x670, 0x672, 0x675, 0x679, 0x67d, 0x67f, 0x681, 0x684, 
    0x690, 0x692, 0x695, 0x698, 0x69b, 0x6a4, 0x6ab, 0x6b0, 0x6b3, 0x6b6, 
    0x6b8, 0x6bb, 0x6be, 0x6c2, 0x6c7, 0x6d4, 0x6d9, 0x6dd, 0x6e1, 0x6e6, 
    0x6eb, 0x6ef, 0x6f2, 0x6f6, 0x701, 0x705, 0x70c, 0x711, 0x715, 0x71b, 
    0x71f, 0x723, 0x72c, 0x739, 0x73e, 0x745, 0x749, 0x74c, 0x74f, 0x752, 
    0x756, 0x75b, 0x762, 0x766, 0x76a, 0x770, 0x775, 0x779, 0x77f, 0x785, 
    0x788, 0x78b, 0x79b, 0x7a3, 0x7ac, 0x7b1, 0x7b4, 0x7b8, 0x7bc, 0x7c1, 
    0x7c7, 0x7cc, 0x7d0, 0x7d9, 0x7de, 0x7e3, 0x80d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CPP14Parser::Initializer CPP14Parser::_init;
