/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSURL, NSArray, NSDictionary, NSMutableArray, NSError;

@interface SUScan : NSObject {

	NSURL* catalogURL;
	NSArray* previousProducts;
	NSArray* preferredLocalizations;
	char dontRunMakeQueues;
	NSDictionary* installedPrinters;
	char shouldBuildCacheOnly;
	NSArray* filteredProductKeys;
	char ignorePPDVersionCache;
	NSDictionary* distributionEnvironment;
	char isBackgroundScan;
	double _progressValue;
	char _isExecuting;
	int _productsCount;
	int _productsComplete;
	dispatch_queue_sRef _stateQueue;
	NSArray* installableProducts;
	NSMutableArray* _packageSources;
	NSError* _error;
	char _didLoadAllResourcesSuccessfully;
	NSDictionary* _distributionEvaluationMetainfo;

}

@property (retain) NSURL * catalogURL; 
@property (retain) NSArray * previousProducts; 
@property (retain) NSArray * preferredLocalizations; 
@property (assign) char dontRunMakeQueues; 
@property (retain) NSDictionary * installedPrinters; 
@property (assign) char shouldBuildCacheOnly; 
@property (retain) NSArray * filteredProductKeys; 
@property (assign) char ignorePPDVersionCache; 
@property (retain) NSDictionary * distributionEnvironment; 
@property (retain) NSDictionary * distributionEvaluationMetainfo;              //@synthesize distributionEvaluationMetainfo=_distributionEvaluationMetainfo - In the implementation block
@property (assign) char isBackgroundScan; 
+(long long)_resultCodeFromScan:(id)arg1 ;
-(double)progressValue;
-(char)isExecuting;
-(NSURL *)catalogURL;
-(void)setDistributionEvaluationMetainfo:(NSDictionary *)arg1 ;
-(NSDictionary *)distributionEvaluationMetainfo;
-(char)shouldBuildCacheOnly;
-(void)setShouldBuildCacheOnly:(char)arg1 ;
-(NSDictionary *)distributionEnvironment;
-(void)setPreferredLocalizations:(NSArray *)arg1 ;
-(void)setPreviousProducts:(NSArray *)arg1 ;
-(void)setFilteredProductKeys:(NSArray *)arg1 ;
-(void)setDontRunMakeQueues:(char)arg1 ;
-(void)setInstalledPrinters:(NSDictionary *)arg1 ;
-(void)setIgnorePPDVersionCache:(char)arg1 ;
-(void)setIsBackgroundScan:(char)arg1 ;
-(void)setDistributionEnvironment:(NSDictionary *)arg1 ;
-(void)performSynchronousScan;
-(char)didLoadAllResourcesSuccessfully;
-(bycopy id)installableProducts;
-(id)_clientDescription;
-(void)setCatalogURL:(NSURL *)arg1 ;
-(char)dontRunMakeQueues;
-(NSArray *)filteredProductKeys;
-(NSDictionary *)installedPrinters;
-(void)_updatePackageSourcesWithCatalog:(id)arg1 ;
-(char)ignorePPDVersionCache;
-(char)isBackgroundScan;
-(NSArray *)previousProducts;
-(void)_scanMain:(id)arg1 ;
-(char)hasInstallableProducts;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(NSArray *)preferredLocalizations;
-(char)isFinished;
-(id)error;
@end
