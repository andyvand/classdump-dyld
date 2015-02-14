/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSMutableArray, NSString;

@interface PKSigningIdentity : NSObject {

	OpaqueSecIdentityRefRef _identity;
	NSMutableArray* _supportingCerts;
	NSString* _keychainSpec;

}
+(id)bestSigningIdentityFromString:(id)arg1 fromKeychain:(id)arg2 forCodeSigning:(char)arg3 error:(id*)arg4 ;
+(id)_validIdentitiesMatchingPrefix:(id)arg1 fromKeychain:(id)arg2 forCodeSigning:(char)arg3 didExcludeWrongIdentities:(char*)arg4 ;
+(id)commonNameForCertificate:(OpaqueSecCertificateRefRef)arg1 ;
+(OpaqueSecKeychainRefRef)_copyKeychainWithPath:(id)arg1 ;
+(id)_identitiesMatchingPrefix:(id)arg1 policy:(OpaqueSecPolicyRefRef)arg2 fromKeychain:(id)arg3 ;
+(id)bestSigningIdentityFromString:(id)arg1 fromKeychain:(id)arg2 ;
+(id)bestSigningIdentityFromString:(id)arg1 fromKeychain:(id)arg2 error:(id*)arg3 ;
+(id)allSigningIdentitiesWithPrefix:(id)arg1 fromKeychain:(id)arg2 ;
+(id)allSigningIdentitiesWithPrefix:(id)arg1 fromKeychain:(id)arg2 forCodeSigning:(char)arg3 ;
-(unsigned long long)_levelOfMatch:(id)arg1 ;
-(id)supportingCertificateRefs;
-(id)_initWithIdentityRef:(OpaqueSecIdentityRefRef)arg1 keychainSpec:(id)arg2 ;
-(id)_sha1AsString;
-(OpaqueSecIdentityRefRef)identityRef;
-(char)shouldUseTSAByDefault;
-(char)addIntermediateCertificateWithCommonName:(id)arg1 ;
-(id)keychainPath;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)name;
@end

