/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSMetricsEventController, ISOperationQueue;

@interface MetricsController : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSMetricsEventController* _eventController;
	ISOperationQueue* _operationQueue;

}
+(id)sharedInstance;
-(void)observeXPCServer:(id)arg1 ;
-(id)_operationQueue;
-(void)insertEventWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)reportEventsWithMessage:(id)arg1 connection:(id)arg2 ;
-(BOOL)hasEntitlements:(id)arg1 ;
-(void)sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
