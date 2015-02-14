/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PKBundleComponentVersion : NSObject {

	NSString* _shortVersionString;
	NSString* _origShortVersionString;
	NSString* _bundleVersion;
	NSString* _origBundleVersion;
	NSString* _sourceVersion;
	NSString* _buildVersion;
	char _isOnDisk;

}
+(id)bundleComponentVersionWithPackageAttributes:(id)arg1 ;
+(id)bundleComponentVersionWithOnDiskBundle:(id)arg1 ;
+(id)_combinedVersionAndInfoDictionaryForBundle:(id)arg1 ;
+(id)_standardizedTupleVersionString:(id)arg1 ;
+(id)_orderedVersionKeys;
-(id)shortVersionString;
-(id)combinedVersionString;
-(id)initWithAttributes:(id)arg1 forOnDiskComponent:(char)arg2 ;
-(id)attributeDictionary;
-(id)initWithShortVersionString:(id)arg1 bundleVersion:(id)arg2 sourceVersion:(id)arg3 buildVersion:(id)arg4 forOnDiskComponent:(char)arg5 ;
-(char)_isOnDiskComponent;
-(id)bundleVersion;
-(id)sourceVersion;
-(id)buildVersion;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
@end

