/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVCore/AVExtendedOperation.h>

@class VCChannel, NSData, IMHandle;

@interface _GetVCChannelOp : AVExtendedOperation {

	char _findExtIP;
	VCChannel* _channel;
	NSData* _data;
	IMHandle* _imHandle;

}

@property (retain) VCChannel * channel;              //@synthesize channel=_channel - In the implementation block
@property (retain) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (retain) IMHandle * handle;                //@synthesize imHandle=_imHandle - In the implementation block
@property (assign) char findExtIP;                   //@synthesize findExtIP=_findExtIP - In the implementation block
-(IMHandle *)handle;
-(VCChannel *)channel;
-(void)setChannel:(VCChannel *)arg1 ;
-(void)setHandle:(IMHandle *)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(void)main;
-(void)setData:(NSData *)arg1 ;
-(void)setFindExtIP:(char)arg1 ;
-(char)findExtIP;
-(id)initAndFindExternalIP:(char)arg1 withIMHandle:(id)arg2 ;
@end
