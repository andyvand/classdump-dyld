/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/SSCredentials.h>

@class NSString;

@interface SSKerberosCredentials : SSCredentials {

	NSString* mClientPrincipal;
	NSString* mServicePrincipal;
	void* mReservedForInstanceVariablesKerberos;

}

@property (readonly) NSString * clientPrincipal; 
@property (readonly) NSString * servicePrincipal; 
@property (readonly) NSString * username; 
+(id)kerberosCredentialsWithClientPrincipal:(id)arg1 withServicePrincipal:(id)arg2 ;
-(NSString *)username;
-(id)initWithAuthenticationType:(id)arg1 withClientPrincipal:(id)arg2 withServicePrincipal:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)clientPrincipal;
-(NSString *)servicePrincipal;
@end

