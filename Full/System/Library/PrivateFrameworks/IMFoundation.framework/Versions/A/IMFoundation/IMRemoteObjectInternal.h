/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSRecursiveLock, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSRecursiveLock* _lock;
	xpc_connection_sRef _connection;
	dispatch_queue_sRef _queue;
	long long _deathPostPredicate;
	Protocol* _protocol;
	NSString* _portName;
	char _willBeTerminated;
	int _pid;

}
@end

