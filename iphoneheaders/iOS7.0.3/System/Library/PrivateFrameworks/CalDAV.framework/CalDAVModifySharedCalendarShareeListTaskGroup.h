/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPostTaskDelegate.h>

@class NSSet, NSURL, NSString, NSMutableSet;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	NSSet* _shareesToRemove;
	NSSet* _shareesToSet;
	NSURL* _calendarURL;
	NSString* _summary;
	NSMutableSet* _invalidSharees;

}

@property (assign,nonatomic,@dynamic) <CoreDAVTaskGroupDelegate> * delegate; 
@property (retain) NSMutableSet * invalidSharees;                                         //@synthesize invalidSharees=_invalidSharees - In the implementation block
@property (retain) NSSet * shareesToRemove;                                               //@synthesize shareesToRemove=_shareesToRemove - In the implementation block
@property (retain) NSSet * shareesToSet;                                                  //@synthesize shareesToSet=_shareesToSet - In the implementation block
@property (retain) NSURL * calendarURL;                                                   //@synthesize calendarURL=_calendarURL - In the implementation block
@property (retain) NSString * summary;                                                    //@synthesize summary=_summary - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setShareesToRemove:(id)arg1 ;
-(void)setShareesToSet:(id)arg1 ;
-(void)setInvalidSharees:(id)arg1 ;
-(id)generateModificationMessageBody;
-(id)shareesToSet;
-(id)shareesToRemove;
-(id)invalidSharees;
-(id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(id)calendarURL;
-(void)setCalendarURL:(id)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end
