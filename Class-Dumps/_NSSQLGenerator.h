//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSSQLAdapter, NSSQLStatement, NSSQLStoreMappingGenerator;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject
{
    NSSQLStatement *_statement;
    NSSQLAdapter *_adapter;
    NSMutableString *_sqlString;
    NSMutableDictionary *_aliasMap;
    NSSQLStoreMappingGenerator *_aliasNamer;
    NSMutableString *_joinClause;
    NSMutableString *_whereClause;
    NSMutableString *_selectList;
    NSMutableString *_orderByClause;
    BOOL _allowToManyKeyPath;
    BOOL _useDistinct;
    BOOL _autoDistinct;
    unsigned int _scopedByORPredicate;
    NSMutableArray *_comparisonPredicateScopedItem;
}

+ (void)initialize;
- (BOOL)foldComparisonPredicate:(id)arg1;
- (BOOL)_isForeignObjectExpression:(id)arg1;
- (void)setAutoDistinct:(BOOL)arg1;
- (BOOL)autoDistinct;
- (void)_preparePredicate:(id)arg1;
- (id)_reducedSubpredicates:(id)arg1;
- (void)prepareComparisonPredicate:(id)arg1;
- (BOOL)_isNullExpression:(id)arg1;
- (void)prepareEndsWith:(id)arg1;
- (void)prepareBeginsWith:(id)arg1;
- (void)_prepareSubstringWith:(id)arg1 wildStart:(BOOL)arg2 wildEnd:(BOOL)arg3;
- (void)prepareLike:(id)arg1;
- (void)prepareBetween:(id)arg1;
- (void)prepareMatches:(id)arg1;
- (void)prepareIn:(id)arg1 swap:(BOOL)arg2;
- (void)_preparePredicateExpression:(id)arg1;
- (BOOL)_prepareFunctionExpression:(id)arg1;
- (void)_appendWhereClauseForConstantCollection:(id)arg1;
- (void)_appendWhereClauseForExpressionCollection:(id)arg1;
- (void)_prepareString:(id)arg1 expressionPath:(id)arg2 sensitiveOptions:(unsigned int)arg3 wildStart:(BOOL)arg4 wildEnd:(BOOL)arg5 allowToMany:(BOOL)arg6;
- (id)_newWildSubStringForGlob:(id)arg1 wildStart:(BOOL)arg2 wildEnd:(BOOL)arg3;
- (void)_prepareConst:(id)arg1 inAttribute:(id)arg2 sensitiveOptions:(unsigned int)arg3;
- (void)_prepareConst:(id)arg1 inToMany:(id)arg2;
- (void)_prepareConst:(id)arg1 inManyToMany:(id)arg2;
- (void)prepareCountStatementWithFetchRequest:(id)arg1;
- (void)prepareSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2;
- (id)_newPredicateWithInheritanceForFetchRequest:(id)arg1;
- (void)prepareDeleteStatementWithRow:(id)arg1;
- (void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2;
- (void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2;
- (void)buildWhereClauseWithSimplePredicate:(id)arg1;
- (void)buildOrderByClauseWithSortDescriptors:(id)arg1;
- (void)appendClause:(id)arg1 forKeyPathExpression:(id)arg2 allowToMany:(BOOL)arg3;
- (void)appendClause:(id)arg1 forKeyPath:(id)arg2 allowToMany:(BOOL)arg3;
- (void)appendCountClause:(id)arg1 forToManyKeyPath:(id)arg2;
- (BOOL)isToManyCountKeyPath:(id)arg1;
- (id)addJoinForDirectToManyToMany:(id)arg1;
- (void)addJoinForManyToManyRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)addJoinForToManyRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)addJoinForToOneRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)appendClause:(id)arg1 forProperty:(id)arg2 keypath:(id)arg3;
- (void)buildWhereClauseWithSelectPredicate:(id)arg1;
- (void)prepareDeleteStatementWithCorrelation:(id)arg1;
- (void)prepareUpdateStatementWithCorrelation:(id)arg1;
- (void)prepareInsertStatementWithCorrelation:(id)arg1;
- (void)prepareInsertStatementWithRow:(id)arg1;
- (void)_appendWhereClauseForConstVal:(id)arg1;
- (void)_addBindVarForConstVal1:(id)arg1;
- (void)_addBindVarForConstVal2:(id)arg1;
- (unsigned int)sqlTypeForPropertyAtEndOfKeyPath:(id)arg1;
- (void)_preparePredicateOperator:(id)arg1;
- (id)_retainedPrimaryKeyNumberForObject:(id)arg1;
- (id)_retainedPrimaryKeyNumberForObjectID:(struct _NSScalarObjectID *)arg1;
- (void)appendLimitClauseToSQL:(unsigned int)arg1;
- (void)appendOrderByClauseToSQL;
- (void)appendWhereClauseToSQL;
- (void)appendJoinClauseToSQL;
- (void)appendSelectListToSQLForRequest:(id)arg1;
- (id)whereClause;
- (void)appendSQL:(id)arg1;
- (void)_startSQL:(id)arg1;
- (void)appendWhereClause:(id)arg1;
- (unsigned int)sqlTypeForExpressionConstantValue:(id)arg1;
- (id)sqlString;
- (id)initWithStatement:(id)arg1 forAdapter:(id)arg2;
- (void)dealloc;

@end

