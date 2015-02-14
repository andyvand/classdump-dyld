/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (nonatomic,retain) NSMutableSet * invalidSharees;                      //@synthesize invalidSharees=_invalidSharees - In the implementation block
@property (nonatomic,retain) NSSet * shareesToRemove;                            //@synthesize shareesToRemove=_shareesToRemove - In the implementation block
@property (nonatomic,retain) NSSet * shareesToSet;                               //@synthesize shareesToSet=_shareesToSet - In the implementation block
@property (nonatomic,retain) NSURL * calendarURL;                                //@synthesize calendarURL=_calendarURL - In the implementation block
@property (nonatomic,retain) NSString * summary;                                 //@synthesize summary=_summary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShareesToSet:(NSSet *)arg1 ;
-(void)setInvalidSharees:(NSMutableSet *)arg1 ;
-(id)generateModificationMessageBody;
-(NSSet *)shareesToSet;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(NSURL *)calendarURL;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)setShareesToRemove:(NSSet *)arg1 ;
-(NSSet *)shareesToRemove;
-(id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
-(NSMutableSet *)invalidSharees;
@end

