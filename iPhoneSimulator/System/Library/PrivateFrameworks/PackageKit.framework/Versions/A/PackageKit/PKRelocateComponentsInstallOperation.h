/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier, NSString;

@interface PKRelocateComponentsInstallOperation : PKInstallOperation {

	PKPackageSpecifier* _currentPackageSpecifier;
	NSString* _currentOldBundlePath;
	NSString* _currentNewBundlePath;

}
-(int)installState;
-(id)currentPackageSpecifier;
-(id)messageTracerDomain;
-(id)messageTracerComment;
-(id)messageTracerTernarySignature;
-(char)_localizeParentFolderForBundleAtPath:(id)arg1 ;
-(char)_moveRelocatedComponentsForPackageSpecifier:(id)arg1 error:(id*)arg2 ;
-(void)main;
@end

