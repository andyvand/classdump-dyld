/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLConnection, NSSQLCore, NSSQLEntity, NSMutableArray, NSManagedObjectContext;

@interface NSSQLChannel : NSObject {

	NSSQLConnection* _connection;
	NSSQLCore* _sqlCore;
	NSSQLEntity* _currentEntity;
	NSMutableArray* _fetchProperties;
	NSManagedObjectContext* _currentMOCon;

}
-(char)isFetchInProgress;
-(id)sqlCore;
-(id)initWithSQLCore:(id)arg1 ;
-(void)endFetch;
-(void)bindTempTablesForStatementIfNecessary:(id)arg1 ;
-(void)endFetchAndRecycleStatement:(char)arg1 ;
-(id)_propertiesToFetch;
-(void)selectRowsWithFetchRequest:(id)arg1 ;
-(void)selectRowsWithStatement:(id)arg1 ;
-(void)selectRowsWithCachedStatement:(id)arg1 ;
-(char)selectCountWithFetchRequest:(id)arg1 ;
-(void)_openChannel;
-(void)_closeChannel;
-(void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)arg1 ;
-(id)connection;
-(void)finalize;
-(void)dealloc;
-(id)currentContext;
-(void)setCurrentContext:(id)arg1 ;
-(void)setCurrentEntity:(id)arg1 ;
@end

