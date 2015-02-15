/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLLimitIntermediate, NSSQLOrderIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {

	NSSQLEntity* _governingEntity;
	NSString* _governingAlias;
	NSString* _correlationToken;
	NSSQLWhereIntermediate* _whereClause;
	NSSQLLimitIntermediate* _limitClause;
	NSSQLOrderIntermediate* _orderIntermediate;

}
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(id)governingEntity;
-(id)whereIntermediate;
-(id)orderIntermediate;
-(id)governingAlias;
-(void)setWhereIntermediate:(id)arg1 ;
-(void)setOrderIntermediate:(id)arg1 ;
-(void)setLimitIntermediate:(id)arg1 ;
-(id)limitIntermediate;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(char)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(void)setGoverningAlias:(id)arg1 ;
-(void)setCorrelationToken:(id)arg1 ;
-(void)setGoverningEntity:(id)arg1 ;
-(void)dealloc;
@end

