/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {

	NSExpression* _collection;
	NSExpression* _variableExpression;
	NSPredicate* _subpredicate;

}
+(char)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)collection;
-(id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
-(id)variable;
-(char)_shouldUseParensWithDescription;
-(id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3 ;
-(id)variableExpression;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)predicate;
@end

