/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CBATTRequest, NSData;

@interface BTLETransaction : NSObject {

	NSString* _identifier;
	CBATTRequest* _request;
	NSString* _replyCharacteristic;
	NSData* _replyData;
	char _waitingToUpdate;

}

@property (readonly) NSString * requestCharacteristic; 
@property (copy) NSData * requestData; 
@property (copy) NSString * replyCharacteristic;                    //@synthesize replyCharacteristic=_replyCharacteristic - In the implementation block
@property (copy) NSData * replyData;                                //@synthesize replyData=_replyData - In the implementation block
@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign) CBATTRequest * request;                          //@synthesize request=_request - In the implementation block
@property (assign) char waitingToUpdate;                            //@synthesize waitingToUpdate=_waitingToUpdate - In the implementation block
-(NSData *)requestData;
-(CBATTRequest *)request;
-(void)setRequest:(CBATTRequest *)arg1 ;
-(NSData *)replyData;
-(char)waitingToUpdate;
-(NSString *)replyCharacteristic;
-(void)setWaitingToUpdate:(char)arg1 ;
-(NSString *)requestCharacteristic;
-(void)setRequestData:(NSData *)arg1 ;
-(void)setReplyCharacteristic:(NSString *)arg1 ;
-(void)setReplyData:(NSData *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end

