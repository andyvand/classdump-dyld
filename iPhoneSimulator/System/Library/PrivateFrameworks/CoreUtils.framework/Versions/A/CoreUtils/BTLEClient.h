/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreUtils/CBCentralManagerDelegate.h>

@class NSDictionary, CBCentralManager, CBPeripheral, NSMutableArray, NSString;

@interface BTLEClient : NSObject <CBCentralManagerDelegate> {

	LogCategory* _ucat;
	dispatch_queue_sRef _queue;
	NSDictionary* _accessoryInfo;
	/*^block*/id _connectHandler;
	/*^block*/id _disconnectHandler;
	CBCentralManager* _centralManager;
	CBPeripheral* _peripheral;
	char _connectPending;
	NSMutableArray* _transactionQueue;

}

@property (copy) NSDictionary * accessoryInfo;                      //@synthesize accessoryInfo=_accessoryInfo - In the implementation block
@property (assign) dispatch_queue_sRef dispatchQueue;               //@synthesize queue=_queue - In the implementation block
@property (assign) LogCategory* logCategory;                        //@synthesize ucat=_ucat - In the implementation block
@property (copy) id connectHandler;                                 //@synthesize connectHandler=_connectHandler - In the implementation block
@property (copy) id disconnectHandler;                              //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnect;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)setDispatchQueue:(dispatch_queue_sRef)arg1 ;
-(LogCategory*)logCategory;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(void)_connect;
-(void)_connect2;
-(void)_processTransactions;
-(void)readDataForCharacteristic:(id)arg1 readHandler:(/*^block*/id)arg2 ;
-(void)writeData:(id)arg1 characteristic:(id)arg2 writeHandler:(/*^block*/id)arg3 ;
-(void)writeData:(id)arg1 requestCharacteristic:(id)arg2 responseCharacteristic:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)accessoryInfo;
-(void)setAccessoryInfo:(NSDictionary *)arg1 ;
-(id)connectHandler;
-(void)setConnectHandler:(id)arg1 ;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(void)connect;
-(void)_disconnect;
-(dispatch_queue_sRef)dispatchQueue;
-(id)init;
-(void)dealloc;
@end

