/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppSandbox.framework/Versions/A/AppSandbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface AppSandboxEntitlements : NSObject {

	NSDictionary* _entitlements;
	NSString* _signingIdentifier;
	long long _appSandboxOnce;
	char _requestsAppSandbox;
	char _requestsInheritance;

}
+(id)entitlementsWithDictionary:(id)arg1 forAppWithSigningIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)entitlementsForCodeAtURL:(id)arg1 error:(id*)arg2 ;
+(id)entitlementsForCodeIdentity:(id)arg1 error:(id*)arg2 ;
-(char)requestsAppSandboxWithInheritance:(char*)arg1 error:(id*)arg2 ;
-(id)allEntitlements;
-(char)boolValueForEntitlement:(id)arg1 ;
-(id)arrayValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(id)initWithDictionary:(id)arg1 forAppWithSigningIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)hasEntitlement:(id)arg1 ofType:(Class)arg2 value:(id*)arg3 error:(id*)arg4 ;
-(char)boolValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(char)__requestsAppSandbox:(id*)arg1 ;
-(char)__requestsInheritanceOfSandbox:(id*)arg1 ;
-(char)hasEntitlement:(id)arg1 value:(id*)arg2 error:(id*)arg3 ;
-(char)requestsAppSandbox:(id*)arg1 ;
-(void)dealloc;
-(id)arrayValueForEntitlement:(id)arg1 ;
@end

