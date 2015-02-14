/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _operatorType;
	unsigned long long _modifier;

}
+(id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(SEL)_getSelectorForType:(unsigned long long)arg1 ;
+(id)_getSymbolForType:(unsigned long long)arg1 ;
+(id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2 ;
+(char)supportsSecureCoding;
-(id)predicateFormat;
-(unsigned long long)operatorType;
-(char)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(char)performOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 ;
-(id)symbol;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SEL)selector;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)modifier;
-(void)_setOptions:(unsigned long long)arg1 ;
-(void)_setModifier:(unsigned long long)arg1 ;
@end

