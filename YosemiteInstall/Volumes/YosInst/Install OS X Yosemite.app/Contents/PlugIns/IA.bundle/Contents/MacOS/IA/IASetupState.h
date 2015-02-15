/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IADisk, IATarget, IAPisaSource, NSString, OSProductManager, IADistributionController, NSURL, OSInstallRecoveryProduct;

@interface IASetupState : NSObject {

	IADisk* _sourceDisk;
	IATarget* _target;
	char _isSelfContainedIA;
	char _targetContainsSelfContainedIA;
	char _isAppStoreRecovery;
	char _isNetInstall;
	IAPisaSource* _appStoreProduct;
	NSString* _bootFilesDir;
	OSProductManager* _productManager;
	IADistributionController* _distributionController;
	NSString* _appleId;
	NSURL* _localESDImageOverride;
	char _isRemoteRecovery;
	int _stashMode;
	OSInstallRecoveryProduct* _recoveryProduct;
	char _usesPassword;

}

@property (retain) IADisk * sourceDisk;                                            //@synthesize sourceDisk=_sourceDisk - In the implementation block
@property (retain,readonly) IADisk * targetDisk; 
@property (assign) char isSelfContainedIA;                                         //@synthesize isSelfContainedIA=_isSelfContainedIA - In the implementation block
@property (assign) char isRemoteRecovery;                                          //@synthesize isRemoteRecovery=_isRemoteRecovery - In the implementation block
@property (assign) char isAppStoreRecovery;                                        //@synthesize isAppStoreRecovery=_isAppStoreRecovery - In the implementation block
@property (assign) int stashMode;                                                  //@synthesize stashMode=_stashMode - In the implementation block
@property (assign) char usesPassword;                                              //@synthesize usesPassword=_usesPassword - In the implementation block
@property (assign) char isNetInstall;                                              //@synthesize isNetInstall=_isNetInstall - In the implementation block
@property (assign) char targetContainsSelfContainedIA;                             //@synthesize targetContainsSelfContainedIA=_targetContainsSelfContainedIA - In the implementation block
@property (retain) NSString * bootFilesDir;                                        //@synthesize bootFilesDir=_bootFilesDir - In the implementation block
@property (retain) IATarget * target;                                              //@synthesize target=_target - In the implementation block
@property (retain,readonly) OSProductManager * productManager;                     //@synthesize productManager=_productManager - In the implementation block
@property (retain) IADistributionController * distributionController;              //@synthesize distributionController=_distributionController - In the implementation block
@property (copy) NSString * appleId;                                               //@synthesize appleId=_appleId - In the implementation block
@property (retain) OSInstallRecoveryProduct * recoveryProduct;                     //@synthesize recoveryProduct=_recoveryProduct - In the implementation block
@property (retain) IAPisaSource * appStoreProduct;                                 //@synthesize appStoreProduct=_appStoreProduct - In the implementation block
-(IADisk *)targetDisk;
-(void)setBootFilesDir:(NSString *)arg1 ;
-(void)setTargetContainsSelfContainedIA:(char)arg1 ;
-(id)localESDImageURL;
-(char)targetContainsSelfContainedIA;
-(void)setLocalESDImageURL:(id)arg1 ;
-(NSString *)bootFilesDir;
-(void)setAppleId:(NSString *)arg1 ;
-(NSString *)appleId;
-(OSProductManager *)productManager;
-(IADisk *)sourceDisk;
-(char)usesPassword;
-(void)setIsSelfContainedIA:(char)arg1 ;
-(void)setIsNetInstall:(char)arg1 ;
-(int)stashMode;
-(void)setSourceDisk:(IADisk *)arg1 ;
-(char)isNetInstall;
-(void)setIsRemoteRecovery:(char)arg1 ;
-(void)setIsAppStoreRecovery:(char)arg1 ;
-(char)isRemoteRecovery;
-(char)isAppStoreRecovery;
-(void)setRecoveryProduct:(OSInstallRecoveryProduct *)arg1 ;
-(void)setAppStoreProduct:(IAPisaSource *)arg1 ;
-(IAPisaSource *)appStoreProduct;
-(void)setStashMode:(int)arg1 ;
-(void)setUsesPassword:(char)arg1 ;
-(char)isSelfContainedIA;
-(OSInstallRecoveryProduct *)recoveryProduct;
-(IADistributionController *)distributionController;
-(void)setDistributionController:(IADistributionController *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTarget:(IATarget *)arg1 ;
-(IATarget *)target;
@end
