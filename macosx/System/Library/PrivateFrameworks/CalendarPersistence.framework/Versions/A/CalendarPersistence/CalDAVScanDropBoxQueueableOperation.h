/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class CalDAVCalendarSource, NSManagedObjectID;

@interface CalDAVScanDropBoxQueueableOperation : CalDAVQueueableOperation {

	CalDAVCalendarSource* _source;
	NSManagedObjectID* _eventID;

}
-(void)dealloc;
-(void)performOperation;
-(id)initWithEvent:(id)arg1 ;
-(id)_cachedETagForFilename:(id)arg1 sharedUID:(id)arg2 ;
-(char)removeUnreferencedAttachmentsWithContents:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)shouldIgnoreErrorForEvent:(id)arg1 ;
-(void)_dieWithError:(id)arg1 ;
-(void)updateAttachmentsWithResponses:(id)arg1 freeBytes:(id)arg2 ;
-(id)_updateDropboxBaseURLIfURLOnDifferentHost:(id)arg1 ;
-(void)scanDropBoxOnAlternateServer:(id)arg1 ;
-(void)handleResultsOfDropBoxURLLookup:(id)arg1 ;
@end

