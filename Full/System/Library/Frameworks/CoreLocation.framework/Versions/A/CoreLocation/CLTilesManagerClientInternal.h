/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSDictionary;

@interface CLTilesManagerClientInternal : NSObject {

	xpc_connection_sRef fXpcConnection;
	dispatch_queue_sRef fQueue;
	NSDictionary* fNotificationHandlers;

}
@end

