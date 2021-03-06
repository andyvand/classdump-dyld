/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {

	NSExpression* _operand;
	SEL _selector;
	NSArray* _arguments;

}
+(char)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_mapKVCOperatorsToFunctionsInContext:(id)arg1 ;
-(void)allowEvaluation;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2 ;
-(id)function;
-(id)operand;
-(char)_shouldUseParensWithDescription;
-(id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4 ;
-(id)binaryOperatorForSelector;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)arguments;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
@end

