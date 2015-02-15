/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKInstallRequest, PKInstallAnalyzer, NSDictionary, NSArray;

@interface PKInstallManifest : NSObject {

	PKInstallRequest* _installRequest;
	PKInstallAnalyzer* _installAnalyzer;
	NSDictionary* _defaultPathByBundleIdentifier;
	NSDictionary* _actualPathByBundleIdentifier;
	NSDictionary* _versionByBundleIdentifier;
	NSDictionary* _downgradePathByBundleIdentifier;
	NSArray* _topBundleIdentifiers;

}
-(id)bundleIdentifiers;
-(id)initWithInstallRequest:(id)arg1 ;
-(void)_processAnalysis;
-(id)topBundleIdentifiers;
-(id)defaultInstallPathForBundleIdentifier:(id)arg1 ;
-(id)actualInstallPathForBundleIdentifier:(id)arg1 ;
-(id)installedVersionForBundleIdentifier:(id)arg1 ;
-(id)downgradePathForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
@end

