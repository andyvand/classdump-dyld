/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalCalDAVContainerSyncTaskGroupWrapper.h>

@class NSString;

@interface CalDAVNotificationContainerSyncTaskGroupWrapper : CalCalDAVContainerSyncTaskGroupWrapper {

	NSString* _notificationPath;

}

@property (retain) NSString * notificationPath;              //@synthesize notificationPath=_notificationPath - In the implementation block
-(void)dealloc;
-(void)setCTag:(id)arg1 ;
-(void)setSyncToken:(id)arg1 ;
-(id)etagObjectsForServerFilenames:(id)arg1 ;
-(id)containerPath;
-(void)processAddedOrModified:(id)arg1 removed:(id)arg2 ;
-(void)setNotificationPath:(NSString *)arg1 ;
-(NSString *)notificationPath;
-(id)initWithPrincipal:(id)arg1 notificationPath:(id)arg2 ;
@end

