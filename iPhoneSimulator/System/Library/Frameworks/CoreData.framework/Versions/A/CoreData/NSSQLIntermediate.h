/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}
+(char)isSimpleKeypath:(id)arg1 ;
+(char)expressionIsBasicKeypath:(id)arg1 ;
-(id)scope;
-(id)generateSQLStringInContext:(id)arg1 ;
-(char)isUpdateScoped;
-(char)isOrScoped;
-(id)initWithScope:(id)arg1 ;
-(char)isFunctionScoped;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(char)isSimpleKeypath:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)fetchIntermediate;
-(id)governingAlias;
-(char)isTargetColumnsScoped;
-(char)isHavingScoped;
-(char)expressionIsBasicKeypath:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(char)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)_lastScopedItem;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(char)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(char)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(char)arg2 inContext:(id)arg3 ;
@end

