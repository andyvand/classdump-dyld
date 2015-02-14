/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKMutableProduct.h>

@class PKArchive, PKDistributionContainer, NSMutableDictionary, NSString;

@interface PKArchiveProduct : PKMutableProduct {

	PKArchive* _archive;
	PKDistributionContainer* _container;
	NSMutableDictionary* _packageIdentifierToURLMap;
	NSString* _productIdentifier;
	NSString* _productVersion;
	NSString* _scriptsPath;
	NSString* _installerPluginsPath;

}
+(char)canInitWithURL:(id)arg1 ;
-(id)productVersion;
-(id)productIdentifier;
-(id)stringsDictionary;
-(id)_identifierVersionTuple:(id)arg1 ;
-(id)_initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)distributionContainer;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_archiveForTrustEvaluation;
-(char)setDistribution:(id)arg1 ;
-(char)setDistributionFromContainer:(id)arg1 ;
-(char)commitReturningError:(id*)arg1 ;
-(char)_writeCompressedCPIOForRoot:(id)arg1 intoArchivePath:(id)arg2 error:(id*)arg3 ;
-(id)initForWritingToArchive:(id)arg1 signingDelegate:(id)arg2 error:(id*)arg3 ;
-(void)setProductIdentifier:(id)arg1 version:(id)arg2 ;
-(void)_setScriptsPath:(id)arg1 ;
-(void)_setInstallerPluginsPath:(id)arg1 ;
-(char)addResourceDataAtPath:(id)arg1 ;
-(id)suggestedPackagePathFromPackageReference:(id)arg1 ;
-(char)registerPackageReference:(id)arg1 ;
-(char)unregisterPackageReference:(id)arg1 deletePackage:(char)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)distribution;
-(id)allPackageReferences;
-(id)productType;
-(void)dealloc;
-(id)URL;
@end

