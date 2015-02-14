/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _EWSKerberosPrincipals : NSObject {

	NSString* _clientPrincipal;
	NSString* _servicePrincipal;

}

@property (nonatomic,copy) NSString * clientPrincipal;               //@synthesize clientPrincipal=_clientPrincipal - In the implementation block
@property (nonatomic,copy) NSString * servicePrincipal;              //@synthesize servicePrincipal=_servicePrincipal - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)clientPrincipal;
-(NSString *)servicePrincipal;
-(void)setClientPrincipal:(NSString *)arg1 ;
-(void)setServicePrincipal:(NSString *)arg1 ;
@end

