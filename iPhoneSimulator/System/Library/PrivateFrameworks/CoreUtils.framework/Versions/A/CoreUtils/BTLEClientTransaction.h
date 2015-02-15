/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BTLEClient, NSString, NSData;

@interface BTLEClientTransaction : NSObject {

	BTLEClient* _client;
	NSString* _writeCharacteristic;
	NSData* _writeData;
	NSString* _readCharacteristic;
	NSData* _readData;
	/*^block*/id _readHandler;
	/*^block*/id _writeHandler;
	/*^block*/id _replyHandler;

}

@property (retain) BTLEClient * client;                       //@synthesize client=_client - In the implementation block
@property (copy) NSString * writeCharacteristic;              //@synthesize writeCharacteristic=_writeCharacteristic - In the implementation block
@property (copy) NSData * writeData;                          //@synthesize writeData=_writeData - In the implementation block
@property (copy) NSString * readCharacteristic;               //@synthesize readCharacteristic=_readCharacteristic - In the implementation block
@property (copy) NSData * readData;                           //@synthesize readData=_readData - In the implementation block
@property (copy) id readHandler;                              //@synthesize readHandler=_readHandler - In the implementation block
@property (copy) id writeHandler;                             //@synthesize writeHandler=_writeHandler - In the implementation block
@property (copy) id replyHandler;                             //@synthesize replyHandler=_replyHandler - In the implementation block
-(void)setReadCharacteristic:(NSString *)arg1 ;
-(void)setReadHandler:(id)arg1 ;
-(void)setWriteCharacteristic:(NSString *)arg1 ;
-(void)setWriteData:(NSData *)arg1 ;
-(void)setWriteHandler:(id)arg1 ;
-(void)setReplyHandler:(id)arg1 ;
-(NSString *)writeCharacteristic;
-(NSData *)writeData;
-(NSString *)readCharacteristic;
-(NSData *)readData;
-(void)setReadData:(NSData *)arg1 ;
-(id)readHandler;
-(id)writeHandler;
-(id)replyHandler;
-(BTLEClient *)client;
-(void)setClient:(BTLEClient *)arg1 ;
@end

