/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MFNetworkLocation : NSObject {

	NSMutableDictionary* _accountDefaults;
	NSMutableDictionary* _domainsBySubnet;

}
-(id)archive;
-(char)isForDomain:(id)arg1 ;
-(char)isForIPAddress:(id)arg1 ;
-(id)initWithDomains:(id)arg1 IPAddresses:(id)arg2 ;
-(void)addDomains:(id)arg1 IPAddresses:(id)arg2 ;
-(id)initWithArchive:(id)arg1 ;
-(char)isEqualToLocation:(id)arg1 ;
-(void)_postChanged;
-(id)subnets;
-(id)deliveryAccountForAccount:(id)arg1 ;
-(id)domains;
-(void)setAccount:(id)arg1 deliveryAccount:(id)arg2 ;
-(id)bestDeliveryAccountForAccount:(id)arg1 ignoreLockedDelivery:(char)arg2 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

