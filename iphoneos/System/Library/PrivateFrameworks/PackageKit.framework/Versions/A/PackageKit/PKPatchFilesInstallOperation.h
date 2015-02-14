/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {

	PKPackageSpecifier* _currentPackageSpecifier;
	CompressionQueueContext_sRef _compressionQueue;
	char _useAFSCByDefault;

}
-(int)installState;
-(id)currentPackageSpecifier;
-(char)isCompressionEnabledForCurrentPackage;
-(void)queueSandboxFileForCompression:(id)arg1 ;
-(char)shouldPatchFileAtSubpath:(id)arg1 inComponent:(id)arg2 ;
-(char)patchFileAtSubpath:(id)arg1 inComponent:(id)arg2 atSandboxPrefix:(id)arg3 onDiskPrefix:(id)arg4 withRequirements:(id)arg5 error:(id*)arg6 ;
-(void)createCompressionQueue;
-(char)applyPatchesForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(void)finishCompressionQueue;
-(char)isBackwardsIncompatibleCompressionEnabledForCurrentPackage;
-(void)main;
@end

