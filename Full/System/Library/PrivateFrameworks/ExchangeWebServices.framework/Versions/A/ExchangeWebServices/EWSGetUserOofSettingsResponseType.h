/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSResponseMessageType, EWSUserOofSettingsType;

@interface EWSGetUserOofSettingsResponseType : NSObject {

	EWSResponseMessageType* _ResponseMessage;
	EWSUserOofSettingsType* _OofSettings;
	long long _AllowExternalOof;

}

@property (nonatomic,retain) EWSResponseMessageType * ResponseMessage;              //@synthesize ResponseMessage=_ResponseMessage - In the implementation block
@property (nonatomic,retain) EWSUserOofSettingsType * OofSettings;                  //@synthesize OofSettings=_OofSettings - In the implementation block
@property (assign,nonatomic) long long AllowExternalOof;                            //@synthesize AllowExternalOof=_AllowExternalOof - In the implementation block
+(id)definition;
-(EWSUserOofSettingsType *)OofSettings;
-(void)setOofSettings:(EWSUserOofSettingsType *)arg1 ;
-(long long)AllowExternalOof;
-(void)setAllowExternalOof:(long long)arg1 ;
-(void)setResponseMessage:(EWSResponseMessageType *)arg1 ;
-(void)dealloc;
-(EWSResponseMessageType *)ResponseMessage;
@end

