/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {

	NSSQLManyToMany* _relationship;
	id _inserts;
	id _deletes;
	id _masterUpdates;
	id _otherUpdates;

}

@property (readonly) NSSQLManyToMany * relationship;              //@synthesize relationship=_relationship - In the implementation block
-(NSSQLManyToMany *)relationship;
-(id)initForRelationship:(id)arg1 ;
-(void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4 ;
-(void)trackReorders:(id)arg1 forObjectWithID:(id)arg2 ;
-(char)hasInserts;
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(char)hasDeletes;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(char)hasMasterReorders;
-(void)enumerateMasterReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersPart2UsingBlock:(/*^block*/id)arg1 ;
-(char)hasReorders;
-(void)enumerateReordersUsingBlock:(/*^block*/id)arg1 ;
-(id)_organizeValues:(id)arg1 ;
-(void)dealloc;
@end

