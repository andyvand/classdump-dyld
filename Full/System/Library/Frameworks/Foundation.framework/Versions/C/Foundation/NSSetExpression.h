/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSSetExpression : NSExpression {

	NSExpression* _left;
	NSExpression* _right;

}
+(char)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)leftExpression;
-(id)rightExpression;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
@end

