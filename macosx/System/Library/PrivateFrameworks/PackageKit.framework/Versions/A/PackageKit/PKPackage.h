/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/NSCoding.h>
#import <PackageKit/NSCopying.h>

@class NSURL, PKArchive, PKPackageInfo, NSDictionary;

@interface PKPackage : NSObject <NSCoding, NSCopying> {

	NSURL* _url;
	PKArchive* _archive;
	PKPackageInfo* _packageInfo;
	NSDictionary* _componentMap;
	char _populatedSubpaths;

}
+(id)packageWithURL:(id)arg1 ;
+(id)_allPackageClasses;
+(id)packageWithPath:(id)arg1 ;
+(char)canInitWithURL:(id)arg1 ;
-(id)packageInfo;
-(id)_scriptsDirectory;
-(id)packageIdentifier;
-(id)directoryEnumerator;
-(id)BOMData;
-(id)restrictedRootManifestData;
-(id)payloadExtractorWithDestination:(id)arg1 externalRoot:(id)arg2 error:(id*)arg3 ;
-(id)scriptsSubpath;
-(id)scriptsExtractorWithDestination:(id)arg1 error:(id*)arg2 ;
-(id)_componentMap;
-(void)_populateComponentSubpaths;
-(id)packageVersion;
-(id)componentForIdentifier:(id)arg1 ;
-(id)subpathsForComponent:(id)arg1 ;
-(void)enumerateBundleComponentsUsingBlock:(/*^block*/id)arg1 ;
-(id)archive;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)components;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)fileURL;
-(id)initWithURL:(id)arg1 ;
@end

