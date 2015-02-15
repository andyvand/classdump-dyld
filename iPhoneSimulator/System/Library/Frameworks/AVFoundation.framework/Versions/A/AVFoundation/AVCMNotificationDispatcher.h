/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCallbackRegistry, NSMutableDictionary;

@interface AVCMNotificationDispatcher : NSObject {

	opaqueCMNotificationCenterRef _cmNotificationCenter;
	AVCallbackRegistry* _callbackRegistry;
	NSMutableDictionary* _listenerObjectsPassedToFig;
	dispatch_queue_sRef _listenerObjectsQueue;

}

@property (nonatomic,readonly) opaqueCMNotificationCenterRef CMNotificationCenter; 
@property (getter=_callbackRegistry,nonatomic,readonly) AVCallbackRegistry * callbackRegistry; 
+(id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
+(void)initialize;
-(void)removeListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 ;
-(void)addListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 flags:(unsigned)arg5 ;
-(id)initWithCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)_callbackRegistry;
-(void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(/*function pointer*/void*)arg3 name:(CFStringRef)arg4 object:(const void*)arg5 ;
-(opaqueCMNotificationCenterRef)CMNotificationCenter;
-(id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 ;
-(void)finalize;
-(void)dealloc;
@end

