/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PKBundleStorage : NSObject {

	NSString* _path;
	NSString* _storageType;
	NSString* _identifier;
	NSDictionary* _versionAttributes;

}
+(id)bundleStorageWithPath:(id)arg1 ;
+(id)_allStorageClasses;
-(id)versionAttributes;
-(id)storageType;
-(id)_initWithPath:(id)arg1 fileAttributes:(id)arg2 ;
-(id)_initWithPath:(id)arg1 storageType:(id)arg2 identifier:(id)arg3 versionAttributes:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
@end

