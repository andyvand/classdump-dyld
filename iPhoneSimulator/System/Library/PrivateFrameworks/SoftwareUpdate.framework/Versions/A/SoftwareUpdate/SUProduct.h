/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <SoftwareUpdate/NSCoding.h>

@class NSString, PKDistribution, NSDictionary, NSArray, NSMutableDictionary, PKDistributionChoice;

@interface SUProduct : NSObject <NSCoding> {

	NSString* _productKey;
	PKDistribution* _distribution;
	NSDictionary* _extraInfo;
	NSDictionary* _packageInfoForPackageURL;
	unsigned long long _downloadSize;
	unsigned long long _installSize;
	NSString* _baseDisplayName;
	NSString* _displayVersion;
	NSString* _longDescription;
	int _restartAction;
	NSArray* _orderedPackageSpecifiersToInstallWithoutPatchFiltering;
	char _startsSelected;
	NSMutableDictionary* _packageReferenceForPackageIdentifier;
	PKDistributionChoice* _swuChoice;
	NSDictionary* _distributionEnv;
	dispatch_queue_sRef _q;
	long long _downloadSizeOnce;
	long long _installSizeOnce;
	long long _swuChoiceOnce;
	NSDictionary* _distributionEvaluationMetainfo;

}

@property (retain) NSDictionary * distributionEvaluationMetainfo;              //@synthesize distributionEvaluationMetainfo=_distributionEvaluationMetainfo - In the implementation block
+(long long)catalogVersion;
+(char)isUsingSeedCatalog;
+(id)__extendedValueForKey:(id)arg1 extraInfo:(id)arg2 ;
+(void)setCatalogVersion:(long long)arg1 ;
+(void)setUsingSeedCatalog:(char)arg1 ;
+(char)_isStagedWithExtraInfo:(id)arg1 ;
+(char)_isCriticalWithExtraInfo:(id)arg1 ;
+(char)_willProductsRequireLogout:(id)arg1 ;
+(long long)_installActionRequiredByProducts:(id)arg1 ;
+(char)_willProductsRequireAuthorizationIfAdmin:(id)arg1 ;
+(id)_productKeysFromProducts:(id)arg1 ;
-(id)initWithProductKey:(id)arg1 distribution:(id)arg2 distributionController:(id)arg3 ;
-(void)_cacheDataFromDistributionController:(id)arg1 ;
-(void)setDistributionEvaluationMetainfo:(NSDictionary *)arg1 ;
-(id)choice;
-(id)orderedPackageSpecifiersToInstall;
-(char)_requiresPKMData;
-(id)packageURLs;
-(id)productKey;
-(id)_resourceDataForKey:(id)arg1 returningMIMEType:(id*)arg2 ;
-(id)_allPackageReferencesUnderChoice:(id)arg1 ;
-(id)packageReferenceForPackageIdentifier:(id)arg1 ;
-(char)_isActiveDistributionPackageReference:(id)arg1 ;
-(id)packageIdentifiersToInstall;
-(id)allSoftwareUpdatePackageReferences;
-(unsigned long long)_installSizeForPackageReference:(id)arg1 ;
-(char)setPKMDataByPackageURL:(id)arg1 ;
-(void)didRegisterProductWithPackageSource;
-(id)distribution;
-(id)descriptionDataReturningMIMEType:(id*)arg1 ;
-(id)licenseDataReturningMIMEType:(id*)arg1 ;
-(id)readmeDataReturningMIMEType:(id*)arg1 ;
-(int)restartAction;
-(id)orderedPackageReferencesToInstall;
-(void)invalidatePackageIdentifierInCache:(id)arg1 ;
-(char)hasInstallablePackages;
-(unsigned long long)downloadSize;
-(unsigned long long)installSize;
-(NSDictionary *)distributionEvaluationMetainfo;
-(id)_extraInfo;
-(id)initWithProductKey:(id)arg1 catalogProductDictionary:(id)arg2 localization:(id)arg3 error:(id*)arg4 ;
-(void)_setExtraInfo:(id)arg1 ;
-(id)_distributionEnvironment;
-(void)_setDistributionEnvironment:(id)arg1 ;
-(id)_updateInfoDictionary;
-(char)_isCritical;
-(char)_allowedToUseInstallLater;
-(char)_isVisibleForPredicateOnly;
-(char)_isConfigData;
-(char)_isRecommendedForStageOnly:(char)arg1 ;
-(char)_isFirmware;
-(char)_shouldAutoInstallCriticalUpdateInBackgroundNow;
-(char)_shouldRegisterCriticalUpdateForPostLogoutInstallNow;
-(char)_isRecommended;
-(char)_isRampedUnseen;
-(char)_isIgnored;
-(char)_isWaitingFirmware;
-(char)_isStaged;
-(long long)_shouldAutoInstallCriticalUpdateWithDelayInHours;
-(char)_shouldNotifyUserAfterAutoInstall;
-(id)_customPostInstallNotifyTitle;
-(id)_customPostInstallNotifyText;
-(id)_customPostInstallNotifyURL;
-(id)_disabledGroupID;
-(char)_isRamped;
-(char)_isStandardVisibleRecommendedProduct;
-(char)_isAdminDisabled;
-(id)_customCriticalTitle;
-(id)_customCriticalText;
-(char)_shouldAuthenticateReboot;
-(char)_shouldLaunchFirstLoginOptimization;
-(id)_labelVersion;
-(char)_installsBundlePackages;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(id)displayName;
-(id)displayVersion;
-(id)_label;
@end

