/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <Sharing/SFCompanionServiceManagerClient.h>
#import <Sharing/SFCompanionXPCManagerObserver.h>

@protocol SFCompanionServiceManagerProtocol;
@class NSString, NSMutableDictionary;

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver> {

	NSString* _identifier;
	id<SFCompanionServiceManagerProtocol> _managerProxy;
	NSString* _deviceID;
	NSString* _deviceIP;
	NSString* _deviceName;
	NSMutableDictionary* _services;
	NSMutableDictionary* _streamHandlers;
	dispatch_semaphore_sRef _managerSemaphore;

}

@property (copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (retain) id<SFCompanionServiceManagerProtocol> managerProxy;              //@synthesize managerProxy=_managerProxy - In the implementation block
@property (copy) NSString * deviceID;                                               //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * deviceIP;                                               //@synthesize deviceIP=_deviceIP - In the implementation block
@property (copy) NSString * deviceName;                                             //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSMutableDictionary * services;                                  //@synthesize services=_services - In the implementation block
@property (retain) NSMutableDictionary * streamHandlers;                            //@synthesize streamHandlers=_streamHandlers - In the implementation block
@property (assign) dispatch_semaphore_sRef managerSemaphore;                        //@synthesize managerSemaphore=_managerSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceManager;
-(NSMutableDictionary *)services;
-(void)retrieveManagerProxy;
-(void)signalSemaphore;
-(id<SFCompanionServiceManagerProtocol>)managerProxy;
-(id)serviceForIdentifier:(id)arg1 ;
-(void)setManagerProxy:(id<SFCompanionServiceManagerProtocol>)arg1 ;
-(void)setDeviceIP:(NSString *)arg1 ;
-(void)streamsFromFileHandle:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)deviceIP;
-(void)streamToService:(id)arg1 withFileHandle:(id)arg2 acceptReply:(/*^block*/id)arg3 ;
-(void)xpcManagerConnectionInterrupted;
-(void)xpcManagerDidInvalidate:(id)arg1 ;
-(id)streamDataForIdentifier:(id)arg1 ;
-(void)getStreamsForData:(id)arg1 withStreamHandler:(/*^block*/id)arg2 ;
-(void)supportStreamsWithIdentifier:(id)arg1 withStreamHandler:(/*^block*/id)arg2 ;
-(void)disableStreamSupportForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)streamHandlers;
-(void)setStreamHandlers:(NSMutableDictionary *)arg1 ;
-(dispatch_semaphore_sRef)managerSemaphore;
-(void)setManagerSemaphore:(dispatch_semaphore_sRef)arg1 ;
-(void)setServices:(NSMutableDictionary *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceName;
@end

