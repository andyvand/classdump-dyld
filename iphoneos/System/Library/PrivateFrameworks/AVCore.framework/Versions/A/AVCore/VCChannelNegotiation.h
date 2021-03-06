/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVCore/AVCore-Structs.h>
@class AVChatParticipant, IMHandle, VCChannel, NSData, NSOperationQueue;

@interface VCChannelNegotiation : NSObject {

	AVChatParticipant* _participant;
	IMHandle* _localIMHandle;
	unsigned _avChatSessionID;
	char _incoming;
	unsigned _requestID;
	unsigned _channelType;
	unsigned long long _state;
	char _channelPrepared;
	int _connectionError;
	VCChannel* _channel;
	NSData* _remoteData;
	unsigned _keyExchangeMode;
	unsigned long long _encryptionKeySize;
	NSData* _encryptionKey;
	NSData* _validationKey;
	OpaqueSecKeyRefRef _keyExchangePublicKey;
	OpaqueSecKeyRefRef _keyExchangePrivateKey;
	NSOperationQueue* _negotiationQueue;

}

@property (readonly) AVChatParticipant * participant;                   //@synthesize participant=_participant - In the implementation block
@property (readonly) unsigned requestID;                                //@synthesize requestID=_requestID - In the implementation block
@property (readonly) unsigned channelType;                              //@synthesize channelType=_channelType - In the implementation block
@property (readonly) char incoming;                                     //@synthesize incoming=_incoming - In the implementation block
@property (assign) unsigned long long state;                            //@synthesize state=_state - In the implementation block
@property (readonly) int connectionError;                               //@synthesize connectionError=_connectionError - In the implementation block
@property (readonly) char ended; 
@property (readonly) unsigned keyExchangeMode;                          //@synthesize keyExchangeMode=_keyExchangeMode - In the implementation block
@property (readonly) unsigned long long encryptionKeySize;              //@synthesize encryptionKeySize=_encryptionKeySize - In the implementation block
@property (readonly) NSData * encryptionKey; 
@property (retain,readonly) VCChannel * channel;                        //@synthesize channel=_channel - In the implementation block
-(AVChatParticipant *)participant;
-(VCChannel *)channel;
-(NSData *)encryptionKey;
-(int)connectionError;
-(void)cancelRequest;
-(void)_logState;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(char)ended;
-(id)operationForNextMessage;
-(id)userInfoForCompletedOperation:(id)arg1 ;
-(void)handleMessage:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)disconnectParticipant;
-(id)_initWithParticipant:(id)arg1 requestID:(unsigned)arg2 channelType:(unsigned)arg3 incoming:(char)arg4 remoteData:(id)arg5 encryptionKeySize:(unsigned long long)arg6 keyExchangeMode:(unsigned)arg7 keyExchangeData:(id)arg8 ;
-(int)_decryptSharedKey:(id)arg1 ;
-(void)_finishConnection;
-(void)_getRequestData:(id*)arg1 forKey:(id*)arg2 ;
-(unsigned)_messageTypeForState;
-(void)_finishPrepareChannel:(id)arg1 ;
-(void)_enqueueNextMessage;
-(int)_sendSharedKey;
-(void)_threadedPrepareChannel;
-(void)_sendMessage:(id)arg1 ;
-(void)_prepareChannel;
-(void)_acceptRequest:(char)arg1 remoteData:(id)arg2 ;
-(void)_receiveSharedKey:(id)arg1 ;
-(void)acceptRequest:(char)arg1 ;
-(id)initRequestTo:(id)arg1 channelType:(unsigned)arg2 encryptionKeySize:(unsigned long long)arg3 ;
-(id)initRequestFrom:(id)arg1 userInfo:(id)arg2 ;
-(void)beginNegotiation;
-(void)endNegotiation;
-(id)extractChannel;
-(unsigned)requestID;
-(unsigned)channelType;
-(char)incoming;
-(unsigned)keyExchangeMode;
-(unsigned long long)encryptionKeySize;
@end

