/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MecabraCoreDataController, NSString, NSArray, NSURL;

@interface MecabraDatabaseImpl : NSObject {

	double _lastUpdateTime;
	char _sqliteDatabaseMigrated;
	MecabraCoreDataController* _databaseController;
	NSString* _type;
	NSArray* _uniqueKeys;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSArray * allEntries; 
@property (assign,nonatomic) double lastUpdateTime;                                       //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) char sqliteDatabaseMigrated;                                 //@synthesize sqliteDatabaseMigrated=_sqliteDatabaseMigrated - In the implementation block
@property (nonatomic,copy) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * uniqueKeys;                                        //@synthesize uniqueKeys=_uniqueKeys - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) MecabraCoreDataController * databaseController;              //@synthesize databaseController=_databaseController - In the implementation block
-(NSArray *)uniqueKeys;
-(void)deleteEntry:(id)arg1 ;
-(void)setUniqueKeys:(NSArray *)arg1 ;
-(void)setDatabaseController:(MecabraCoreDataController *)arg1 ;
-(MecabraCoreDataController *)databaseController;
-(id)databasePropertyForKey:(id)arg1 ;
-(void)setDatabaseProperty:(id)arg1 forKey:(id)arg2 ;
-(id)entriesToMerge;
-(void)clearStoredMergeEntries;
-(id)initWithURL:(id)arg1 type:(id)arg2 uniqueKeys:(id)arg3 ;
-(NSArray *)allEntries;
-(void)setValuesForEntry:(id)arg1 ;
-(void)removeDuplicatesForEntry:(id)arg1 sortDescriptors:(id)arg2 restrictToNumberOfElements:(unsigned long long)arg3 identifierKey:(id)arg4 uniqueKeys:(id)arg5 ;
-(double)lastUpdateTime;
-(void)setLastUpdateTime:(double)arg1 ;
-(char)sqliteDatabaseMigrated;
-(void)setSqliteDatabaseMigrated:(char)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)save;
@end

