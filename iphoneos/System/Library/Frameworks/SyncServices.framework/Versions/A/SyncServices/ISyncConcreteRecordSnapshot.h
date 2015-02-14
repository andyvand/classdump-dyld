/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISyncRecordSnapshot.h>

@class ISDRecordStore, ISDRecordIdMapper, NSArray, ISyncSession;

@interface ISyncConcreteRecordSnapshot : ISyncRecordSnapshot {

	ISDRecordStore* _truth;
	ISDRecordIdMapper* _mapper;
	NSArray* _entityNames;
	ISyncSession* _session;

}
-(void)dealloc;
-(id)recordStore;
-(id)initWithTruthRecordStore:(id)arg1 clientRecordIdMapper:(id)arg2 entityNames:(id)arg3 ;
-(id)recordsWithIdentifiers:(id)arg1 ;
-(id)initWithTruthRecordStore:(id)arg1 clientRecordIdMapper:(id)arg2 entityNames:(id)arg3 session:(id)arg4 ;
-(id)_recordIdMapper;
-(void)freeOSResources;
-(void)checkForCancelledSession;
-(id)_globalIdForLocalId:(id)arg1 ;
-(id)_localIdForGlobalId:(id)arg1 ;
-(id)recordsWithIdentifiers:(id)arg1 useUnformattedValues:(char)arg2 ;
-(id)recordsWithMatchingAttributes:(id)arg1 useUnformattedValues:(char)arg2 matchAll:(char)arg3 ;
-(id)recordsWithMatchingAttributes:(id)arg1 useUnformattedValues:(char)arg2 ;
-(id)_swapMapper:(id)arg1 ;
-(id)targetIdentifiersForRelationshipName:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(id)sourceIdentifiersForRelationshipName:(id)arg1 withTargetIdentifier:(id)arg2 ;
-(id)recordsWithMatchingAttributes:(id)arg1 ;
@end

