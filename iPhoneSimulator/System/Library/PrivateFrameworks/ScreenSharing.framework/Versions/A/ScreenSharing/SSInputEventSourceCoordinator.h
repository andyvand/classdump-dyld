/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSInputEventConsumer;
@class NSObject, NSMutableSet, NSLock, NSRecursiveLock;

@interface SSInputEventSourceCoordinator : NSObject {

	NSObject*<SSInputEventConsumer> mActiveConsumer;
	NSMutableSet* mEventSources;
	NSMutableSet* mRegisteredConsumers;
	NSLock* mLock;
	NSRecursiveLock* _activeConsumerLock;

}

@property (assign) NSObject*<SSInputEventConsumer> activeConsumer; 
@property (retain) NSRecursiveLock * activeConsumerLock;                        //@synthesize activeConsumerLock=_activeConsumerLock - In the implementation block
+(id)sharedCoordinator;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(NSObject*<SSInputEventConsumer>)activeConsumer;
-(void)setActiveConsumer:(NSObject*<SSInputEventConsumer>)arg1 ;
-(void)deactivateConsumer:(id)arg1 ;
-(void)setActiveConsumerLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)activeConsumerLock;
-(void)addSource:(id)arg1 ;
-(void)removeSource:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

