/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface SFCertAuthorityInvitationSigner : NSObject {

	OpaqueSecIdentityRefRef _signingIdentity;

}
-(int)verifyInvitation:(id)arg1 invitationDictionary:(id*)arg2 trustRefOnErr:(_SecTrust*)arg3 signerIdentity:(OpaqueSecIdentityRef*)arg4 ;
-(int)verifyInvitationFile:(id)arg1 invitationDictionary:(id*)arg2 trustRefOnErr:(_SecTrust*)arg3 signerIdentity:(OpaqueSecIdentityRef*)arg4 ;
-(void)_setSigningIdentity:(OpaqueSecIdentityRefRef)arg1 ;
-(int)signInvitationFile:(id)arg1 outPath:(id)arg2 ;
-(id)_copyAvailableSigningIdentities;
-(void)finalize;
-(void)dealloc;
@end

