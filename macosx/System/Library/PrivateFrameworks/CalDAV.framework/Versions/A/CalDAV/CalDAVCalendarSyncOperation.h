/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVCalendar;
@class NSError, NSString;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {

	char _getScheduleTags;
	char _getScheduleChanges;
	NSError* _savedError;
	NSString* _nextCtag;
	NSString* _nextSyncToken;
	id<CalDAVCalendar> _calendar;

}

@property (assign,nonatomic) id<CalDAVCalendarSyncDelegate> delegate; 
@property (assign,nonatomic) char getScheduleTags;                                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign,nonatomic) char getScheduleChanges;                              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)setGetScheduleTags:(char)arg1 ;
-(void)setGetScheduleChanges:(char)arg1 ;
-(char)getScheduleTags;
-(char)getScheduleChanges;
-(char)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(id)_distantFutureEndDate;
-(void)_processAddedOrModified:(id)arg1 removed:(id)arg2 ;
-(void)_syncEventsForMerge;
-(id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4 ;
-(void)syncCalendar;
-(void)_finishWithError:(id)arg1 ;
-(void)dealloc;
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1 ;
-(char)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(char)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(char)syncDeleteTask:(id)arg1 error:(id)arg2 ;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3 ;
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6 ;
@end

