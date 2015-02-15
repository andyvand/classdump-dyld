/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/MacOS/Keychain Access
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Keychain Access/Keychain Access-Structs.h>
@interface CertSupport : NSObject
+(int)exportCerts:(void*)arg1 format:(unsigned)arg2 flags:(unsigned)arg3 data:(id*)arg4 ;
+(char)certificatesFromFile:(id)arg1 certs:(id*)arg2 ;
+(int)p12Import:(id)arg1 nsKeychain:(id)arg2 outCerts:(id*)arg3 ;
+(char)createSecCertificateRefFromFile:(id)arg1 ref:(OpaqueSecCertificateRef*)arg2 ;
+(void)addCertToKeychain:(id)arg1 nsKeychain:(id)arg2 ;
+(void)addCertificatesToKeychain:(id)arg1 nsKeychain:(id)arg2 ;
+(void)addPKCS7CertToKeychain:(id)arg1 nsKeychain:(id)arg2 ;
+(int)addCertificate:(OpaqueSecCertificateRefRef)arg1 toKeychain:(OpaqueSecKeychainRefRef)arg2 ;
@end
