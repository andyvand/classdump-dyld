/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKXARArchive.h>

@class NSMutableArray;

@interface PKMutableXARArchive : PKXARArchive {

	NSMutableArray* _signers;
	char _mutable;

}
-(id)initForWritingToPath:(id)arg1 error:(id*)arg2 ;
-(char)setData:(id)arg1 forPath:(id)arg2 compressed:(char)arg3 ;
-(char)setFile:(id)arg1 forPath:(id)arg2 compressed:(char)arg3 ;
-(char)setContentsOfArchive:(id)arg1 forPath:(id)arg2 ;
-(char)addSignatureBySigningWithIdentity:(OpaqueSecIdentityRefRef)arg1 algorithm:(id)arg2 usingTSAIfSupported:(char)arg3 ;
-(char)addIntermediateCertificate:(OpaqueSecCertificateRefRef)arg1 ;
-(void)setSignatureSize:(int)arg1 ;
-(xar_file_tRef)_fileStructForParentOfSubpath:(id)arg1 error:(id*)arg2 ;
-(char)closeArchive;
-(void)dealloc;
@end

