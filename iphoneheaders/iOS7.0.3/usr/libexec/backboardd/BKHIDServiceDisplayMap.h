/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class BKHIDServiceNotificationManager, NSObject;

@interface BKHIDServiceDisplayMap : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	BKHIDServiceNotificationManager* _hidServiceNotificationManager;
	CFDictionaryRef _serviceToUUIDMapping;
	NSObject<OS_dispatch_queue>* _queue;

}
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 HIDServiceNotificationManager:(id)arg2 ;
-(id)displayForService:(IOHIDServiceRef)arg1 ;
-(void)servicesAdded:(id)arg1 ;
-(id)_matchingServicesDictionary;
-(void)serviceRemoved:(IOHIDServiceRef)arg1 ;
-(void)dealloc;
@end
