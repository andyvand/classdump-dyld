/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSMutableSet, NSLock;

@interface GEODBWriter : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _versionQuery;
	sqlite3_stmtRef _versionInsert;
	sqlite3_stmtRef _editionQuery;
	sqlite3_stmtRef _editionDelete;
	sqlite3_stmtRef _editionInvalidate;
	sqlite3_stmtRef _editionUpdate;
	sqlite3_stmtRef _tileInsert;
	sqlite3_stmtRef _tileDelete;
	sqlite3_stmtRef _tileSize;
	sqlite3_stmtRef _sizeQuery;
	long long _lastRowID;
	unsigned long long _databaseSize;
	unsigned long long _maxDatabaseSize;
	char _closed;
	char _defunct;
	NSMutableArray* _writeList;
	NSMutableSet* _uncommitedWriteSet;
	unsigned long long _pendingWriteBytes;
	NSLock* _writeListLock;
	dispatch_queue_sRef _writeQueue;
	void* _editionMap;
	long long _evictionRowsThreshold;
	SCD_Struct_GE51* _expirationRecords;
	unsigned long long _expirationRecordCount;
	char _preloading;
	double _lastCheckedGeneralExpiration;
	unsigned long long _tileCacheMinimumWriteCount;
	unsigned long long _tileCacheMinimumWriteBytes;
	unsigned long long _tileCacheMaximumWriteCount;
	unsigned long long _tileCacheMaximumWriteBytes;

}

@property (nonatomic,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (assign) char closed; 
@property (nonatomic,readonly) unsigned long long databaseSize;               //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDatabaseSize;              //@synthesize maxDatabaseSize=_maxDatabaseSize - In the implementation block
-(void)_localeChanged:(id)arg1 ;
-(void)endPreloadSession;
-(void)_closeDB;
-(char)closed;
-(void)setClosed:(char)arg1 ;
-(void)setExpirationRecords:(SCD_Struct_GE51*)arg1 count:(unsigned long long)arg2 ;
-(void)_openIfNecessary;
-(void)addData:(id)arg1 forKey:(GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 ;
-(void)deleteData:(const GEOTileKey*)arg1 ;
-(char)prepareSingleStatement:(sqlite3_stmt*)arg1 forSql:(id)arg2 ;
-(void)_deviceLocked;
-(void)_editionUpdate:(id)arg1 ;
-(void)_openDBForceRecreate:(char)arg1 ;
-(void)_performWrites:(char)arg1 ;
-(void)_updateEdition:(unsigned)arg1 forTileset:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(char)arg4 ;
-(void)_writeVersion;
-(char)_readEditions;
-(void)_evict;
-(unsigned long long)_dbFileSize;
-(void)_assertDatabaseSize;
-(unsigned long long)_freeableDiskSpace;
-(void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(char)arg2 ;
-(char)_tileSetExpires:(unsigned)arg1 ;
-(void)_deleteKey:(GEOTileKey)arg1 ;
-(void)_dropWritesOnFloor:(id)arg1 ;
-(void)_writeEntry:(id)arg1 ;
-(void)flushPendingWrites;
-(void)_printDBStatus:(const char*)arg1 ;
-(void)calculateFreeableSizeWithHandler:(/*^block*/id)arg1 ;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(id)pendingWriteForKey:(GEOTileKey*)arg1 ;
-(void)pendingWritesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(unsigned long long)databaseSize;
-(unsigned long long)maxDatabaseSize;
-(void)setMaxDatabaseSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)_createTables;
-(void)_prepareStatements;
-(void)_updateSize;
@end

