/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SOAPFaultDetail, NSString;

@interface SOAPFault : NSObject {

	SOAPFaultDetail* _detail;
	NSString* _faultactor;
	NSString* _faultcode;
	NSString* _faultstring;

}

@property (nonatomic,retain) SOAPFaultDetail * detail;              //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSString * faultactor;                   //@synthesize faultactor=_faultactor - In the implementation block
@property (nonatomic,copy) NSString * faultcode;                    //@synthesize faultcode=_faultcode - In the implementation block
@property (nonatomic,copy) NSString * faultstring;                  //@synthesize faultstring=_faultstring - In the implementation block
+(id)definition;
-(void)setFaultcode:(NSString *)arg1 ;
-(void)setFaultstring:(NSString *)arg1 ;
-(void)setReason:(id)arg1 ;
-(NSString *)faultactor;
-(void)setFaultactor:(NSString *)arg1 ;
-(NSString *)faultcode;
-(NSString *)faultstring;
-(void)setCode:(id)arg1 ;
-(SOAPFaultDetail *)detail;
-(void)setDetail:(SOAPFaultDetail *)arg1 ;
-(void)dealloc;
-(id)description;
@end

