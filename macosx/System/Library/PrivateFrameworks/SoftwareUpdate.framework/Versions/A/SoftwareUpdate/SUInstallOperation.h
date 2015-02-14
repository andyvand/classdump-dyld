/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
#import <Foundation/NSOperation.h>

@protocol SUInstallOperationDelegateNSObject;
@class NSArray, PKInstallRequest, NSString, NSDate, NSError, NSMutableDictionary, NSMutableArray, PKInstallClient;

@interface SUInstallOperation : NSOperation {

	NSArray* _localProducts;
	PKInstallRequest* _request;
	char _clientBlocksRestart;
	char _allowOnlyAppleSignedFlatPackages;
	char _holdBoostDuringInstall;
	char _isStaging;
	unsigned _packageScriptUserID;
	AuthorizationOpaqueRefRef _overrideAuthorization;
	id<SUInstallOperationDelegate><NSObject> delegate;
	char _didPreflight;
	char _isInstalling;
	int _state;
	unsigned long long _totalSize;
	double _progressPercent;
	double _estimatedTimeRemaining;
	NSString* _firmwareStatus;
	double _lastFirmwareUpdateProgress;
	NSDate* _firmwareUpdateStalledAt;
	NSString* _activeSpecialStatus;
	char _isDoingIndeterminateFirmwareUpdate;
	NSError* _nonSpecificError;
	NSMutableDictionary* _errorByProductKey;
	char _didInstallSuccessfully;
	NSMutableArray* _productKeysToDelete;
	/*^block*/id _finishBlock;
	/*^block*/id _progressBlock;
	PKInstallClient* _installClient;

}

@property (assign) id<SUInstallOperationDelegate><NSObject> delegate; 
@property (assign) char clientBlocksRestart;                                       //@synthesize clientBlocksRestart=_clientBlocksRestart - In the implementation block
@property (assign) char allowOnlyAppleSignedFlatPackages;                          //@synthesize allowOnlyAppleSignedFlatPackages=_allowOnlyAppleSignedFlatPackages - In the implementation block
@property (assign) char holdBoostDuringInstall;                                    //@synthesize holdBoostDuringInstall=_holdBoostDuringInstall - In the implementation block
@property (assign) unsigned packageScriptUserID;                                   //@synthesize packageScriptUserID=_packageScriptUserID - In the implementation block
+(unsigned long long)workingSpaceForInstallSize:(unsigned long long)arg1 ;
+(char)_isCurrentlyStagedWithLocalProducts:(id)arg1 purgeableSize:(id*)arg2 ;
+(unsigned long long)_spaceRequiredForPossiblyStagedLocalProducts:(id)arg1 ;
+(void)_enumerateProducts:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)installOperationsWithLocalProducts:(id)arg1 forStaging:(char)arg2 ;
+(unsigned long long)adjustedInstallSize:(unsigned long long)arg1 forLocalProducts:(id)arg2 ;
-(double)estimatedTimeRemaining;
-(id)_initWithLocalProducts:(id)arg1 stageOnly:(char)arg2 spaceRequired:(unsigned long long)arg3 ;
-(char)performPreflightChecks;
-(unsigned)packageScriptUserID;
-(id)errorForProductKey:(id)arg1 ;
-(char)allowOnlyAppleSignedFlatPackages;
-(id)_productFromPackageKitError:(id)arg1 ;
-(void)removeInstalledOrInapplicableProducts;
-(void)_dispatchStatus:(id)arg1 progress:(float)arg2 timeRemaining:(double)arg3 ;
-(char)_performInstallTimeChecks;
-(id)localProducts;
-(unsigned long long)totalInstallSize;
-(char)isStaging;
-(double)progressPercent;
-(char)isDoingIndeterminateFirmwareUpdate;
-(id)activeSpecialStatus;
-(void)setAuthorizationRef:(AuthorizationOpaqueRefRef)arg1 ;
-(char)didInstallSuccessfully;
-(id)errorProductKeys;
-(void)setProgressBlock:(/*^block*/id)arg1 andFinishBlock:(/*^block*/id)arg2 ;
-(void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5 ;
-(void)installClient:(id)arg1 didFailWithError:(id)arg2 ;
-(void)installClientDidFinish:(id)arg1 ;
-(char)clientBlocksRestart;
-(void)setClientBlocksRestart:(char)arg1 ;
-(void)setAllowOnlyAppleSignedFlatPackages:(char)arg1 ;
-(char)holdBoostDuringInstall;
-(void)setHoldBoostDuringInstall:(char)arg1 ;
-(void)setPackageScriptUserID:(unsigned)arg1 ;
-(void)setDelegate:(id<SUInstallOperationDelegate><NSObject>)arg1 ;
-(void)dealloc;
-(id<SUInstallOperationDelegate><NSObject>)delegate;
-(void)main;
@end

