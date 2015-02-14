/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKArchive.h>

@interface PKMutableArchive : PKArchive
-(id)initForWritingToPath:(id)arg1 error:(id*)arg2 ;
-(char)setData:(id)arg1 forPath:(id)arg2 compressed:(char)arg3 ;
-(id)initForWritingToPath:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)setFile:(id)arg1 forPath:(id)arg2 compressed:(char)arg3 ;
-(char)setContentsOfArchive:(id)arg1 forPath:(id)arg2 ;
-(char)addSignatureBySigningWithIdentity:(OpaqueSecIdentityRefRef)arg1 algorithm:(id)arg2 usingTSAIfSupported:(char)arg3 ;
-(char)addSignatureBySigningWithIdentity:(OpaqueSecIdentityRefRef)arg1 algorithm:(id)arg2 ;
-(char)addIntermediateCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)setSignatureSize:(int)arg1 ;
@end

