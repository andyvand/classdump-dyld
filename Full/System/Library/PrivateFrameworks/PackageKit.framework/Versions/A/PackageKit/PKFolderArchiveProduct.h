/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKProduct.h>

@class PKArchive, PKDistribution;

@interface PKFolderArchiveProduct : PKProduct {

	PKArchive* _archive;
	PKDistribution* _distribution;

}
+(char)canInitWithURL:(id)arg1 ;
-(id)stringsDictionary;
-(id)_initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)distributionContainer;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_archiveForTrustEvaluation;
-(id)_distributionDataFromArchive:(id)arg1 returningDistributionURL:(id*)arg2 error:(id*)arg3 ;
-(id)_synthesizedDistributionFromMetaPackageInArchive:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)distribution;
-(id)allPackageReferences;
-(char)evaluateTrustReturningError:(id*)arg1 ;
-(id)productType;
-(void)dealloc;
-(id)URL;
@end

