/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSFaultHandler : NSObject
+(void)initialize;
+(char)accessInstanceVariablesDirectly;
-(id)initWithPersistenceStore:(id)arg1 ;
-(void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2 ;
-(id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)fulfillFault:(id)arg1 withContext:(id)arg2 ;
-(id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3 ;
-(id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3 ;
-(void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2 ;
@end

