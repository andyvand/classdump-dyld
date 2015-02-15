/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier, PKPayloadCopier;

@interface PKExtractInstallOperation : PKInstallOperation {

	unsigned long long _payloadBytesCompleted;
	unsigned long long _totalPayloadSize;
	unsigned long long _informedExtractionSpeed;
	PKPackageSpecifier* _currentPackageSpecifier;
	PKPayloadCopier* _activeExtractor;
	dispatch_queue_sRef _updateQueue;

}
-(int)installState;
-(id)currentPackageSpecifier;
-(id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 ;
-(id)messageTracerDomain;
-(id)messageTracerComment;
-(id)_activeExtractor;
-(void)_setActiveExtractor:(id)arg1 ;
-(char)_extractBomForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(char)_extractRestrictredRootManifestForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(char)_extractScriptsForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(char)_extractPayloadForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(double)estimatedTimeRemaining;
-(void)finalize;
-(void)dealloc;
-(void)cancel;
-(void)main;
@end
