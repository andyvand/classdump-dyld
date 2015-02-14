/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface CalDAVETagCache : NSObject {

	NSMutableDictionary* _filenameToScheduleTagMap;
	NSMutableDictionary* _filenameToETagMap;
	NSMutableDictionary* _filenameToModifiedLocallyMap;
	NSMutableDictionary* _uidToFilenameMap;
	NSString* _cacheFilename;
	NSString* _cTag;
	char _inited;
	char _isDirty;

}
+(id)newCacheControllerAtDirectory:(id)arg1 ;
+(id)localPrincipalPathForUID:(id)arg1 ;
+(id)newCacheControllerForPrincipalUID:(id)arg1 calendarUID:(id)arg2 ;
+(id)newCacheControllerForPrincipalInboxWithUID:(id)arg1 ;
+(id)newCacheControllerForPrincipalNotificationCollectionWithUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)cTag;
-(id)_initWithDirectory:(id)arg1 ;
-(id)etagForFilename:(id)arg1 ;
-(id)scheduleTagForFilename:(id)arg1 ;
-(id)filenameForUID:(id)arg1 ;
-(id)allFilenames;
-(void)deleteFile;
-(id)cacheFilename;
@end

