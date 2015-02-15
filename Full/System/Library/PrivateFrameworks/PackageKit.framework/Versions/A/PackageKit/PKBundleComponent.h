/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKComponent.h>

@class NSString, PKBundleComponentVersion;

@interface PKBundleComponent : PKComponent {

	NSString* _storageType;
	NSString* _bundlePath;
	char _onDisk;
	PKBundleComponentVersion* _bundleVersion;
	int _overwriteAction;

}

@property (assign) int overwriteAction;              //@synthesize overwriteAction=_overwriteAction - In the implementation block
+(char)_enumerateBundleComponentsUnderURL:(id)arg1 relativeToRoot:(id)arg2 parentComponent:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
+(void)enumerateBundleComponentsUnderRoot:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)versionCompare:(id)arg1 ;
-(id)prefixPath;
-(id)initWithIdentifier:(id)arg1 versionAttributes:(id)arg2 bundlePath:(id)arg3 storageType:(id)arg4 ;
-(id)storageType;
-(id)bundleName;
-(id)initWithIdentifier:(id)arg1 versionAttributes:(id)arg2 bundlePath:(id)arg3 ;
-(id)initWithBundleAtPath:(id)arg1 relativeToDestination:(id)arg2 ;
-(int)overwriteAction;
-(void)setOverwriteAction:(int)arg1 ;
-(id)subpaths;
-(id)bundleVersion;
-(void)dealloc;
-(id)bundlePath;
-(id)_bundle;
@end

