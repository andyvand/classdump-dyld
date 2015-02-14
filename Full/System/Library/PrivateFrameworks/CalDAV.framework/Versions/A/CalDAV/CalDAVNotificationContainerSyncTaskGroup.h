/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	NSSet* _notificationTypeNamesToFetch;

}

@property (nonatomic,retain) NSSet * notificationTypeNamesToFetch;              //@synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch - In the implementation block
-(NSSet *)notificationTypeNamesToFetch;
-(void)dealloc;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(void)setNotificationTypeNamesToFetch:(NSSet *)arg1 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(char)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
@end

