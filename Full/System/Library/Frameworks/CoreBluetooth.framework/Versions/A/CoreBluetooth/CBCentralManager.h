/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBXpcConnectionDelegate.h>

@protocol CBCentralManagerDelegate;
@class NSMutableDictionary;

@interface CBCentralManager : NSObject <CBXpcConnectionDelegate> {

	id<CBCentralManagerDelegate> _delegate;
	long long _state;
	NSMutableDictionary* _peripherals;
	char _isScanning;
	id _connection;

}

@property (assign,nonatomic) id<CBCentralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long state;                                            //@synthesize state=_state - In the implementation block
-(id)retrievePeripheralsWithIdentifiers:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)stopScan;
-(void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 ;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)orphanPeripherals;
-(id)initWithDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 options:(id)arg3 ;
-(id)peripheralForUUID:(id)arg1 args:(id)arg2 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(char)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 force:(char)arg2 ;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handlePeripheralDiscovered:(id)arg1 ;
-(void)handlePeripheralsRetrieved:(id)arg1 ;
-(void)handleConnectedPeripheralsRetrieved:(id)arg1 ;
-(void)handlePeripheralConnectionCompleted:(id)arg1 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg1 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg1 ;
-(void)handleZoneLost:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handleMtuChanged:(id)arg1 ;
-(void)handlePeripheralTrackingUpdated:(id)arg1 ;
-(void)handlePeripheralMsg:(int)arg1 args:(id)arg2 ;
-(void)xpcConnectionDidReset:(id)arg1 ;
-(void)xpcConnectionIsInvalid:(id)arg1 ;
-(void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3 ;
-(void)peripheralWillBeReleased:(id)arg1 ;
-(void)retrievePeripherals:(id)arg1 ;
-(void)retrieveConnectedPeripherals;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 ;
-(id)retrievePairedPeripherals;
-(void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2 ;
-(void)startTrackingPeripheral:(id)arg1 options:(id)arg2 ;
-(void)stopTrackingPeripheral:(id)arg1 options:(id)arg2 ;
-(void)setDelegate:(id<CBCentralManagerDelegate>)arg1 ;
-(void)dealloc;
-(long long)state;
-(id<CBCentralManagerDelegate>)delegate;
@end

