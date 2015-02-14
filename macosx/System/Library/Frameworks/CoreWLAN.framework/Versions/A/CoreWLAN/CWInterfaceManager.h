/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreWLAN/CoreWLAN-Structs.h>
@class NSMutableDictionary, NSSet;

@interface CWInterfaceManager : NSObject {

	NSMutableDictionary* _managedInterfaces;
	IONotificationPortRef _interfaceAddedNotificationPort;
	unsigned _interfaceAddedNotification;
	dispatch_queue_sRef _internalQueue;
	dispatch_queue_sRef _callbackQueue;

}

@property (readonly) NSSet * interfaces; 
@property (retain) NSMutableDictionary * managedInterfaces;              //@synthesize managedInterfaces=_managedInterfaces - In the implementation block
+(id)interfaceNames;
+(id)interfaceManager;
-(NSSet *)interfaces;
-(id)interfaceWithName:(id)arg1 ;
-(NSMutableDictionary *)managedInterfaces;
-(void)setManagedInterfaces:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end

