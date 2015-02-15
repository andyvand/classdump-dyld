/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

@class NSString;

@interface CalDAVDeleteNotificationCollectionFileQueueableOperation : CalDAVPersistentQueueableOperation {

	NSString* _filename;
	NSString* _notificationCollectionPath;

}

@property (retain) NSString * filename;                                //@synthesize filename=_filename - In the implementation block
@property (retain) NSString * notificationCollectionPath;              //@synthesize notificationCollectionPath=_notificationCollectionPath - In the implementation block
-(void)dealloc;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)performOperation;
-(NSString *)notificationCollectionPath;
-(void)setNotificationCollectionPath:(NSString *)arg1 ;
-(id)initWithChangeRequest:(id)arg1 notificationCollectionPath:(id)arg2 filename:(id)arg3 forSession:(id)arg4 ;
-(void)handleRemovalCleanup;
@end

