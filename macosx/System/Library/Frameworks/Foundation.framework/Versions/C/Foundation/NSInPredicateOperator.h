/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {

	unsigned long long _flags;
	NSSubstringPredicateOperator* _stringVersion;

}
+(char)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2 ;
-(char)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)symbol;
-(id)stringVersion;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)_setOptions:(unsigned long long)arg1 ;
-(unsigned long long)flags;
@end

