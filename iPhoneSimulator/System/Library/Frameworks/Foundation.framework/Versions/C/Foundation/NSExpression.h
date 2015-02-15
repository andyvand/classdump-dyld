/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@class NSString, NSArray, NSPredicate;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedExpressionFlags : 31;
	}  _expressionFlags;
	unsigned reserved;
	unsigned long long _expressionType;

}

@property (readonly) unsigned long long expressionType; 
@property (retain,readonly) id constantValue; 
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSString * function; 
@property (copy,readonly) NSString * variable; 
@property (copy,readonly) NSExpression * operand; 
@property (copy,readonly) NSArray * arguments; 
@property (retain,readonly) id collection; 
@property (copy,readonly) NSPredicate * predicate; 
@property (copy,readonly) NSExpression * leftExpression; 
@property (copy,readonly) NSExpression * rightExpression; 
@property (copy,readonly) id expressionBlock; 
+(id)_newKeyPathExpressionForString:(id)arg1 ;
+(id)expressionWithFormat:(id)arg1 arguments:(_va_list_tag*)arg2 ;
+(id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)expressionWithFormat:(id)arg1 ;
+(id)expressionForVariable:(id)arg1 ;
+(id)expressionForSymbolicString:(id)arg1 ;
+(id)expressionForAggregate:(id)arg1 ;
+(id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
+(id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
+(id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2 ;
+(id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
+(id)expressionForUnionSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForIntersectSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForMinusSet:(id)arg1 with:(id)arg2 ;
+(id)expressionForBlock:(/*^block*/id)arg1 arguments:(id)arg2 ;
+(id)expressionForAnyKey;
+(id)expressionForConstantValue:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)expressionForEvaluatedObject;
+(id)expressionForKeyPath:(id)arg1 ;
+(id)expressionForFunction:(id)arg1 arguments:(id)arg2 ;
-(id)CKExpressionValue;
-(id)minimalFormInContext:(id)arg1 ;
-(id)initWithExpressionType:(unsigned long long)arg1 ;
-(void)allowEvaluation;
-(char)_allowsEvaluation;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)collection;
-(NSString *)variable;
-(NSString *)function;
-(NSExpression *)operand;
-(id)subexpression;
-(id)trueExpression;
-(id)falseExpression;
-(id)expressionBlock;
-(char)_shouldUseParensWithDescription;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SEL)selector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(NSArray *)arguments;
-(NSExpression *)leftExpression;
-(NSExpression *)rightExpression;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(unsigned long long)expressionType;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)constantValue;
-(NSPredicate *)predicate;
@end

