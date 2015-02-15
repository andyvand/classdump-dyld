/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVCore/AVExtendedOperation.h>

@class _GetVCChannelOp, VCChannel, NSData;

@interface VCChannelNegotiationOp : AVExtendedOperation {

	unsigned _message;
	_GetVCChannelOp* _channelOp;

}

@property (assign) unsigned message;                              //@synthesize message=_message - In the implementation block
@property (retain,readonly) VCChannel * vcChannel; 
@property (retain,readonly) NSData * connectionData; 
-(NSData *)connectionData;
-(void)dealloc;
-(unsigned)message;
-(void)setMessage:(unsigned)arg1 ;
-(void)_createChildOpsWithIMHandle:(id)arg1 ;
-(id)initWithNegotiation:(id)arg1 message:(unsigned)arg2 ;
-(VCChannel *)vcChannel;
@end

