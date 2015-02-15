/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVCallbackRegistry : NSObject {

	CFBagRef _observers;
	dispatch_queue_sRef _readWriteQueue;

}
+(id)sharedCallbackRegistry;
+(void)initialize;
-(void)registerCallbackObserver:(id)arg1 ;
-(void)unregisterCallbackObserver:(id)arg1 ;
-(id)callbackObserver:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

