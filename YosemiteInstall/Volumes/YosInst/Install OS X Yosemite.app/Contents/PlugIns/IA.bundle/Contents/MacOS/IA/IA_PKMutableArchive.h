/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IA-Structs.h>
#import <IA/IA_PKArchive.h>

@interface IA_PKMutableArchive : IA_PKArchive
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
