/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALPublisher.h>
#import <CalendarPersistence/CALPublishOperationDelegate.h>

@protocol CALRemotePublisherDelegate;
@class NSError, NSManagedObjectID, NSString;

@interface CALRemotePublisher : CALPublisher <CALPublishOperationDelegate> {

	double _schedulePublishTimer;
	double _minimumPublishInterval;
	char _publishScheduled;
	int _status;
	char _dirty;
	char _oldIsActive;
	char _oldIsAutoUpdating;
	NSError* _lastOperationError;
	NSManagedObjectID* _nodeID;
	id<CALRemotePublisherDelegate> _delegate;
	int _callbackOption;

}

@property (retain) NSManagedObjectID * nodeID;                      //@synthesize nodeID=_nodeID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForUnpublishOperation:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(int)status;
-(void)setActive:(char)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)lastOperationError;
-(void)cancelSchedulePublish;
-(void)requestAutomaticPublish;
-(void)delayedRequestPublish;
-(id)requestAutomaticPublishOperation;
-(void)startAutomaticPublish:(id)arg1 ;
-(id)remoteOperation;
-(NSManagedObjectID *)nodeID;
-(void)setAutoUpdating:(char)arg1 ;
-(void)commonOperationDone:(id)arg1 ;
-(void)schedulePublish;
-(void)setLastUpdate:(id)arg1 ;
-(char)persistError:(id)arg1 inContext:(id)arg2 ;
-(void)enablePublisher;
-(void)disablePublisher;
-(id)requestPublishOperation;
-(void)startPublish:(id)arg1 document:(id)arg2 ;
-(id)requestUnpublishOperation;
-(void)publishDone:(id)arg1 ;
-(void)automaticPublishDone:(id)arg1 ;
-(void)firstPublishDone:(id)arg1 ;
-(void)unpublishDone:(id)arg1 ;
-(void)publishOperation:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)publishOperation:(id)arg1 progressedToCurrentUnits:(unsigned long long)arg2 totalUnits:(unsigned long long)arg3 ;
-(void)startFirstPublish:(id)arg1 document:(id)arg2 ;
-(void)startPublish:(id)arg1 withData:(id)arg2 ;
-(void)startUnpublish:(id)arg1 ;
-(void)setSchedulePublishTimer:(double)arg1 ;
-(void)setMinimumPublishInterval:(double)arg1 ;
-(id)requestEtagPublishOperation:(id)arg1 ;
-(id)requestFirstPublishOperation;
-(void)requestPublish:(id)arg1 ;
-(id)requestEtagUnpublishOperation:(id)arg1 ;
-(void)setLastOperationError:(id)arg1 ;
-(void)setNodeID:(NSManagedObjectID *)arg1 ;
@end

