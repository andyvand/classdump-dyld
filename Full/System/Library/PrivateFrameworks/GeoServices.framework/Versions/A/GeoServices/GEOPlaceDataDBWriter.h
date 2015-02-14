/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEOPlaceDataDBWriter : GEODBWriter {

	sqlite3_stmtRef _insertPhoneNumber;
	sqlite3_stmtRef _insertKeyString;
	sqlite3_stmtRef _deletePhoneNumberMappingStatement;
	sqlite3_stmtRef _deleteKeyStringStatement;
	char _canCreateDebugTable;

}
-(void)_openIfNecessary;
-(void)_setMUID:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2 ;
-(void)_populateDBKey:(GEOTileKey*)arg1 forMUID:(unsigned long long)arg2 ;
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)_deleteKeystringForKey:(GEOTileKey)arg1 ;
-(void)deletePlaceDataForKey:(GEOTileKey)arg1 ;
-(void)_createPhoneNumberTable;
-(void)_createKeyStringTable;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(void)deletePlaceDataForMUID:(unsigned long long)arg1 ;
-(void)deletePhoneNumberMapping;
-(void)performStatementPreparationTasks;
-(void)performTableCreationTasks;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

