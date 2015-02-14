/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVSetPropertyQueueableOperation.h>

@class CoreDAVItem;

@interface CalDAVSetCalendarColorQueueableOperation : CalDAVSetPropertyQueueableOperation {

	CoreDAVItem* _backupElement;

}

@property (retain) CoreDAVItem * backupElement;              //@synthesize backupElement=_backupElement - In the implementation block
-(void)dealloc;
-(void)setBackupElement:(CoreDAVItem *)arg1 ;
-(CoreDAVItem *)backupElement;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 colorString:(id)arg4 colorName:(id)arg5 ;
-(void)performOperation;
@end

