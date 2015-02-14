/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@interface SFCertificateAuthorityClient : NSObject {

	id _reserved_SFCollaborationCertificateAuthorityClient;

}
+(id)sharedCertificateAuthorityClient;
-(id)certificateAuthorityCertificatesFromInvitation:(id)arg1 sharedSecret:(id)arg2 inputParms:(id)arg3 error:(id*)arg4 ;
-(id)certificateSigningRequestWithInvitation:(id)arg1 publicKey:(OpaqueSecKeyRefRef)arg2 privateKey:(OpaqueSecKeyRefRef)arg3 keychain:(OpaqueSecKeychainRefRef)arg4 user:(id)arg5 emailAddress:(id)arg6 accessRef:(OpaqueSecAccessRefRef)arg7 inputParms:(id)arg8 error:(id*)arg9 ;
@end

