/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {

	void* _reserved2;
	unsigned long long _type;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType; 
@property (copy,readonly) NSArray * subpredicates; 
+(id)_operatorForType:(unsigned long long)arg1 ;
+(char)supportsSecureCoding;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
-(void)validate;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)predicateOperator;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)_predicateOperator;
-(id)_subpredicateDescription:(id)arg1 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)generateMetadataDescription;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)subpredicates;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(unsigned long long)compoundPredicateType;
@end

