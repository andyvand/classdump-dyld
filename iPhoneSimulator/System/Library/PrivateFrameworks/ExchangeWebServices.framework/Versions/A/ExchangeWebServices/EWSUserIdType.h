/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface EWSUserIdType : NSObject {

	NSString* _SID;
	NSString* _PrimarySmtpAddress;
	NSString* _DisplayName;
	int _DistinguishedUser;

}

@property (setter=ID,nonatomic,copy) NSString * SID;                   //@synthesize SID=_SID - In the implementation block
@property (nonatomic,copy) NSString * PrimarySmtpAddress;              //@synthesize PrimarySmtpAddress=_PrimarySmtpAddress - In the implementation block
@property (nonatomic,copy) NSString * DisplayName;                     //@synthesize DisplayName=_DisplayName - In the implementation block
@property (assign,nonatomic) int DistinguishedUser;                    //@synthesize DistinguishedUser=_DistinguishedUser - In the implementation block
+(id)definition;
-(NSString *)SID;
-(void)setSID:(NSString *)arg1 ;
-(void)setDistinguishedUser:(int)arg1 ;
-(void)dealloc;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)DisplayName;
-(NSString *)PrimarySmtpAddress;
-(int)DistinguishedUser;
-(void)setPrimarySmtpAddress:(NSString *)arg1 ;
@end

