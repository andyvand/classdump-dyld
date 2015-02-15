/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GEODBReader : NSObject {

	char _defunct;
	char _closed;
	int _editionUpdating;
	dispatch_queue_sRef _readQueue;
	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _tileQuery;
	sqlite3_stmtRef _versionQuery;
	SCD_Struct_GE51* _expirationRecords;
	unsigned long long _expirationRecordCount;

}

@property (assign) char closed; 
-(void)_databaseReset:(id)arg1 ;
-(void)_editionUpdateBegin:(id)arg1 ;
-(void)_editionUpdateEnd:(id)arg1 ;
-(void)_deviceLocking;
-(void)_closeDB;
-(void)_openDB;
-(id)_dataForKey:(GEOTileKey)arg1 isCurrent:(char*)arg2 eTag:(id*)arg3 ;
-(char)closed;
-(void)setClosed:(char)arg1 ;
-(id)dataForKey:(GEOTileKey*)arg1 isCurrent:(char*)arg2 eTag:(id*)arg3 ;
-(void)dataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)dataForKeys:(GEOTileKeyListRef)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)setExpirationRecords:(SCD_Struct_GE51*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

