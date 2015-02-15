/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDRecordIdMapper.h>

@class ISDRecordIdMapDatabase;

@interface ISDSqliteRecordIdMapper : ISDRecordIdMapper {

	ISDRecordIdMapDatabase* _mapDatabase;

}
+(id)defaultMapperFileName;
+(id)recordIdMapperInDataDirectory:(id)arg1 ;
+(void)setLegacyMode:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)resetState;
-(void)disableFlush;
-(void)setDirty:(char)arg1 ;
-(void)enableFlush;
-(void)vacuum;
-(void)replaceLocalId:(id)arg1 withLocalId:(id)arg2 ;
-(void)removeMappingsForGlobalIds:(id)arg1 ;
-(id)recordIdentifiersOfUnknownType;
-(char)isRecordIdentifierOfUnknownType:(id)arg1 ;
-(char)removeRecordIdentifierOfUnknownType:(id)arg1 ;
-(id)recordIdMapForLocalId:(id)arg1 isCached:(char*)arg2 ;
-(void)freeOSResources;
-(void)enableSqliteTracing:(id)arg1 ;
-(void)disableSqliteTracing;
-(char)commitMappings;
-(id)recordIdMapForGlobalId:(id)arg1 isCached:(char*)arg2 ;
-(char)hasMappingForLocalId:(id)arg1 useConstructedIdMap:(char)arg2 ;
-(void)removeMappingsForEntityNames:(id)arg1 truth:(id)arg2 ;
-(void)removeMappingForGlobalId:(id)arg1 ;
-(id)verboseDescription;
-(id)allLocalIds;
-(id)allGlobalIds;
-(char)hasMappingForGlobalId:(id)arg1 ;
-(void)replaceGlobalId:(id)arg1 withGlobalId:(id)arg2 ;
-(id)initRecordIdMapperWithPath:(id)arg1 ;
-(id)initRecordIdMapperInDataDirectory:(id)arg1 ;
-(char)commitMappings:(char)arg1 ;
-(char)_hasMappingForLocalId:(id)arg1 ;
-(void)flushMappingsIfNowIsAGoodTime;
@end

