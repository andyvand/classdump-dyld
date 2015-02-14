/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseEmailAddressType.h>

@class NSString, EWSItemIdType;

@interface EWSEmailAddressType : EWSBaseEmailAddressType {

	NSString* _Name;
	NSString* _EmailAddress;
	NSString* _RoutingType;
	int _MailboxType;
	EWSItemIdType* _ItemId;

}

@property (nonatomic,copy) NSString * Name;                       //@synthesize Name=_Name - In the implementation block
@property (nonatomic,copy) NSString * EmailAddress;               //@synthesize EmailAddress=_EmailAddress - In the implementation block
@property (nonatomic,copy) NSString * RoutingType;                //@synthesize RoutingType=_RoutingType - In the implementation block
@property (assign,nonatomic) int MailboxType;                     //@synthesize MailboxType=_MailboxType - In the implementation block
@property (nonatomic,retain) EWSItemIdType * ItemId;              //@synthesize ItemId=_ItemId - In the implementation block
+(id)definition;
-(NSString *)RoutingType;
-(void)setRoutingType:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(EWSItemIdType *)ItemId;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setItemId:(EWSItemIdType *)arg1 ;
-(NSString *)Name;
-(NSString *)EmailAddress;
-(int)MailboxType;
-(void)setMailboxType:(int)arg1 ;
@end

