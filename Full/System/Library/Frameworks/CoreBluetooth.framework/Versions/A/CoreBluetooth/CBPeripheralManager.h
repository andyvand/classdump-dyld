/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBXpcConnectionDelegate.h>

@protocol CBPeripheralManagerDelegate;
@class NSMutableDictionary, NSMutableArray, NSLock;

@interface CBPeripheralManager : NSObject <CBXpcConnectionDelegate> {

	id<CBPeripheralManagerDelegate> _delegate;
	id _connection;
	long long _state;
	char _advertising;
	NSMutableDictionary* _centrals;
	NSMutableArray* _services;
	NSMutableDictionary* _characteristicIDs;
	NSLock* _updateLock;
	char _readyForUpdates;
	char _waitingForReady;

}

@property (assign,nonatomic) id<CBPeripheralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) char isAdvertising;                                            //@synthesize advertising=_advertising - In the implementation block
+(long long)authorizationStatus;
-(id)initWithDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)removeAllServices;
-(void)addService:(id)arg1 ;
-(void)stopAdvertising;
-(void)startAdvertising:(id)arg1 ;
-(void)respondToRequest:(id)arg1 withResult:(long long)arg2 ;
-(char)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 options:(id)arg3 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)xpcConnectionDidReset:(id)arg1 ;
-(void)xpcConnectionIsInvalid:(id)arg1 ;
-(void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3 ;
-(id)centralFromArgs:(id)arg1 ;
-(void)handleServiceAdded:(id)arg1 ;
-(void)handleGetAttributeValue:(id)arg1 ;
-(void)handleSetAttributeValues:(id)arg1 ;
-(void)handleNotificationAdded:(id)arg1 ;
-(void)handleNotificationRemoved:(id)arg1 ;
-(void)handleAdvertisingStarted:(id)arg1 ;
-(void)handleAdvertisingStopped:(id)arg1 ;
-(void)handleReadyForUpdates:(id)arg1 ;
-(void)handleMTUChanged:(id)arg1 ;
-(void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2 ;
-(void)removeService:(id)arg1 ;
-(char)isAdvertising;
-(void)setDelegate:(id<CBPeripheralManagerDelegate>)arg1 ;
-(void)dealloc;
-(long long)state;
-(id<CBPeripheralManagerDelegate>)delegate;
@end

