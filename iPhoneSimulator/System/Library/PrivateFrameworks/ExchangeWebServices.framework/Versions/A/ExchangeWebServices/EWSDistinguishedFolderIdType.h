/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseFolderIdType.h>

@class NSString, EWSEmailAddressType;

@interface EWSDistinguishedFolderIdType : EWSBaseFolderIdType {

	long long _Id;
	NSString* _ChangeKey;
	EWSEmailAddressType* _Mailbox;

}

@property (assign,nonatomic) long long Id;                               //@synthesize Id=_Id - In the implementation block
@property (nonatomic,copy) NSString * ChangeKey;                         //@synthesize ChangeKey=_ChangeKey - In the implementation block
@property (nonatomic,retain) EWSEmailAddressType * Mailbox;              //@synthesize Mailbox=_Mailbox - In the implementation block
+(id)definition;
-(void)dealloc;
-(id)description;
-(void)setChangeKey:(NSString *)arg1 ;
-(long long)Id;
-(NSString *)ChangeKey;
-(void)setId:(long long)arg1 ;
-(void)setMailbox:(EWSEmailAddressType *)arg1 ;
-(EWSEmailAddressType *)Mailbox;
@end
