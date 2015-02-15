/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/SSCredentials.h>

@class NSString;

@interface SSUsernamePasswordCredentials : SSCredentials {

	NSString* mUsername;
	NSString* mPassword;
	void* mReservedForInstanceVariablesUsernamePassword;

}

@property (readonly) NSString * username; 
@property (readonly) NSString * password; 
+(id)diffieHellmanCredentialsWithUsername:(id)arg1 withPassword:(id)arg2 ;
-(NSString *)password;
-(NSString *)username;
-(id)initWithAuthenticationType:(id)arg1 withUsername:(id)arg2 withPassword:(id)arg3 ;
-(void)dealloc;
@end

