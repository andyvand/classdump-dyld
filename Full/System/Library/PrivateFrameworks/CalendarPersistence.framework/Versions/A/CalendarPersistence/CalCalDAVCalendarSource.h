/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalRemoteCalendarSource.h>

@class NSString, NSManagedObjectID, NSError, NSTimeZone, CALAddress;

@interface CalCalDAVCalendarSource : CalRemoteCalendarSource {

	NSString* _principalUID;
	NSManagedObjectID* _principalID;
	NSString* _cacheControllerPath;
	NSError* _lastOperationError;
	NSTimeZone* _timeZone;
	CALAddress* _ownerAddress;
	char _isOwnerMe;

}

@property (retain) NSManagedObjectID * principalID;              //@synthesize principalID=_principalID - In the implementation block
@property (retain) CALAddress * ownerAddress;                    //@synthesize ownerAddress=_ownerAddress - In the implementation block
@property (assign) char isOwnerMe;                               //@synthesize isOwnerMe=_isOwnerMe - In the implementation block
+(id)propertiesForListContents;
-(void)dealloc;
-(id)debugDescription;
-(id)timeZone;
-(void)setTimeZone:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(char)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)addEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)isOwnerMe;
-(id)backingPrincipal;
-(char)isSourceInSameAccount:(id)arg1 ;
-(char)isCalDAV;
-(char)isSourceInSameAccount:(id)arg1 ignoringOwner:(char)arg2 ;
-(char)hasCapability:(int)arg1 ;
-(id)meForSource;
-(id)freeBusyCache;
-(char)addEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)ownerForSource;
-(char)allowsSchedulingByMe;
-(char)isDelegate;
-(char)addEntities:(id)arg1 fromServer:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(char)addEntity:(id)arg1 fromServer:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(char)modifyEntity:(id)arg1 fromServer:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(char)modifyEntities:(id)arg1 fromServer:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(char)removeEntity:(id)arg1 fromServer:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(char)removeEntities:(id)arg1 fromServer:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(void)setOwnerAddress:(CALAddress *)arg1 ;
-(id)backingPrincipalInContext:(id)arg1 ;
-(CALAddress *)ownerAddress;
-(id)principalUID;
-(void)setPrincipalUID:(id)arg1 ;
-(char)hasNoPrincipal;
-(void)queueScanDropBoxContentsForEntity:(id)arg1 ;
-(void)setCacheControllerPath:(id)arg1 ;
-(NSManagedObjectID *)principalID;
-(void)setPrincipalID:(NSManagedObjectID *)arg1 ;
-(void)setIsOwnerMe:(char)arg1 ;
@end

