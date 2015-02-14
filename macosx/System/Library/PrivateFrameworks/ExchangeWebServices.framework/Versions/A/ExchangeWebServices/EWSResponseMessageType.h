/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface EWSResponseMessageType : NSObject {

	int _ResponseClass;
	NSString* _MessageText;
	long long _ResponseCode;
	long long _DescriptiveLinkKey;
	id _MessageXml;

}

@property (assign,nonatomic) int ResponseClass;                         //@synthesize ResponseClass=_ResponseClass - In the implementation block
@property (nonatomic,copy) NSString * MessageText;                      //@synthesize MessageText=_MessageText - In the implementation block
@property (assign,nonatomic) long long ResponseCode;                    //@synthesize ResponseCode=_ResponseCode - In the implementation block
@property (assign,nonatomic) long long DescriptiveLinkKey;              //@synthesize DescriptiveLinkKey=_DescriptiveLinkKey - In the implementation block
@property (nonatomic,retain) id MessageXml;                             //@synthesize MessageXml=_MessageXml - In the implementation block
+(id)definition;
-(void)setResponseClass:(int)arg1 ;
-(void)setResponseCode:(long long)arg1 ;
-(long long)DescriptiveLinkKey;
-(void)setDescriptiveLinkKey:(long long)arg1 ;
-(id)MessageXml;
-(void)setMessageXml:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMessageText:(NSString *)arg1 ;
-(long long)ResponseCode;
-(NSString *)MessageText;
-(int)ResponseClass;
@end

