/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSXPCStoreNotificationObserver : NSObject {

	dispatch_queue_sRef _queue;
	int _token;
	id _store;

}
-(id)store;
-(void)setStore:(id)arg1 ;
-(id)initForObservationWithName:(id)arg1 store:(id)arg2 ;
-(void)dealloc;
@end

