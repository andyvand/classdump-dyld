/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface IMPurgableObject : NSObject {

	id _instanceObject;
	/*^block*/id _setupBlock;
	/*^block*/id _cleanupBlock;
	dispatch_queue_sRef _queue;

}
-(void)_cleanupInstance;
-(void)_setupInstance;
-(id)initWithSetupBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 queue:(dispatch_queue_sRef)arg3 ;
-(void)_receivedMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(id)instance;
@end

