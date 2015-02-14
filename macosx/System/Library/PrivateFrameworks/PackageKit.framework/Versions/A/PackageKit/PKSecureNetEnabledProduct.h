/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKNetEnabledProduct.h>

@class PKArchive, NSString;

@interface PKSecureNetEnabledProduct : PKNetEnabledProduct {

	PKArchive* _distArchive;
	NSString* _archivePath;
	NSString* _tempArchivePath;

}
+(id)productInfoFilename;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_archiveForTrustEvaluation;
-(char)commitReturningError:(id*)arg1 ;
-(char)didReceiveData:(id)arg1 fromDistributionURL:(id)arg2 error:(id*)arg3 ;
-(id)_distributionArchivePath;
-(char)_setDistributionArchiveFromPath:(id)arg1 ;
-(char)_isDistributionArchiveInProductOnDisk:(id)arg1 ;
-(id)_distributionArchiveWriteURL;
-(char)_populateWithDistributionArchiveReturningError:(id*)arg1 ;
-(id)productType;
-(void)finalize;
-(void)dealloc;
@end

