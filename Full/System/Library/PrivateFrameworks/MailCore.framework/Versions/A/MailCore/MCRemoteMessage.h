/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/MCMessage.h>

@interface MCRemoteMessage : MCMessage {

	struct {
		unsigned reserved : 27;
		unsigned isPartial : 1;
		unsigned partsHaveBeenCached : 1;
		unsigned hasTemporaryUid : 1;
		unsigned isHTML : 1;
		unsigned isRich : 1;
	}  _remoteFlags;
	unsigned long long _messageSize;

}

@property (assign,nonatomic) SCD_Struct_MC17 remoteFlags;                 //@synthesize remoteFlags=_remoteFlags - In the implementation block
@property (assign,nonatomic) char isPartial; 
@property (assign,nonatomic) char partsHaveBeenCached; 
@property (assign,nonatomic) char hasTemporaryUid; 
@property (assign,nonatomic) unsigned long long messageSize;              //@synthesize messageSize=_messageSize - In the implementation block
-(void)setRemoteFlags:(SCD_Struct_MC17)arg1 ;
-(unsigned long long)messageSize;
-(void)setIsPartial:(char)arg1 ;
-(void)setPartsHaveBeenCached:(char)arg1 ;
-(char)isPartial;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(char)partsHaveBeenCached;
-(char)hasTemporaryUid;
-(SCD_Struct_MC17)remoteFlags;
-(void)setHasTemporaryUid:(char)arg1 ;
-(id)initWithSize:(unsigned long long)arg1 ;
@end

