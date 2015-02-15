/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VCSecureDataChannelDelegate;
#import <AVConference/AVConference-Structs.h>
@interface VCSecureDataChannel : NSObject {

	tagCONNRESULT* connectionResult;
	tls_record_sRef tlsRecord;
	id<VCSecureDataChannelDelegate> _delegate;

}

@property (assign) id<VCSecureDataChannelDelegate> delegate; 
@property (readonly) long long maxEncryptedDataSize; 
@property (readonly) long long maxUnencryptedDataSize; 
-(int)sendData:(id)arg1 encrypted:(char)arg2 ;
-(id)initWithConnectionResult:(tagCONNRESULT*)arg1 sharedSecret:(id)arg2 error:(id*)arg3 ;
-(int)setupWithSharedSecret:(id)arg1 error:(id*)arg2 ;
-(int)verifyAndDecryptData:(id)arg1 decryptedData:(id*)arg2 ;
-(long long)maxEncryptedDataSize;
-(long long)maxUnencryptedDataSize;
-(void)setDelegate:(id<VCSecureDataChannelDelegate>)arg1 ;
-(void)dealloc;
-(id<VCSecureDataChannelDelegate>)delegate;
@end
