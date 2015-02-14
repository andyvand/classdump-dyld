/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Frameworks/DistributionKit.framework/Versions/A/DistributionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DistributionKit/DistributionKit-Structs.h>
@class PKDistribution, NSMutableDictionary, NSString, PKDistributionEvaluator, PKProduct;

@interface PKDistributionController : NSObject {

	PKDistribution* _distribution;
	NSMutableDictionary* _choiceItemDictionary;
	NSString* _interfaceType;
	NSString* _localizedProductName;
	PKDistributionEvaluator* _evaluator;
	char _isEvaluating;
	PKProduct* _product;
	NSMutableDictionary* _searchResultsByIdentifier;

}

@property (copy) NSString * localizedProductName;              //@synthesize localizedProductName=_localizedProductName - In the implementation block
@property (assign) char isEvaluating;                          //@synthesize isEvaluating=_isEvaluating - In the implementation block
+(id)_evaluationQueue;
+(id)_stringForCheckErrorCode:(int)arg1 ;
+(void)clearCaches;
+(void)_setEnvironmentForDistribution:(id)arg1 ;
+(void)_setBackgroundEvaluation:(char)arg1 ;
+(void)_registerPPDVersionCache:(id)arg1 ;
+(id)_currentPPDVersionCache;
-(void)setDestinationPath:(id)arg1 ;
-(id)destinationPath;
-(id)_displayVersion;
-(void)setResults:(id)arg1 forSearchIdentifier:(id)arg2 ;
-(id)resultsForSearchIdentifier:(id)arg1 ;
-(id)allChoiceItems;
-(id)initWithDistribution:(id)arg1 interfaceType:(id)arg2 notifyQueue:(id)arg3 ;
-(void)_invalidateChoiceItemCache:(id)arg1 ;
-(void)_evaluatorStateDidChange:(id)arg1 ;
-(id)_IFJS_Context;
-(id)_cacheChoiceItemForChoice:(id)arg1 ;
-(void)_cacheAllChoiceItemsIfNeeded;
-(id)allTopChoiceItems;
-(id)_packageReferencesToInstall;
-(id)componentToSearchResultMapForPkgRefIdentifier:(id)arg1 ;
-(void)_addPackageSpecifiersFromChoiceItem:(id)arg1 toMap:(id)arg2 prefixPath:(id)arg3 displayName:(id)arg4 displayVersion:(id)arg5 ;
-(id)_evaluatedValueForAttributeName:(id)arg1 onPackageReference:(id)arg2 ;
-(void)setIsEvaluating:(char)arg1 ;
-(char)_isDomainScriptEnabled:(id)arg1 ;
-(void)_performAllSearches;
-(id)initWithProduct:(id)arg1 interfaceType:(id)arg2 notifyQueue:(id)arg3 ;
-(void)resetWithInterfaceType:(id)arg1 ;
-(id)choiceItems;
-(id)topChoiceItems;
-(void)restoreDefaultChoiceItemStates;
-(void)setAllowsExternalScripts:(char)arg1 ;
-(id)evaluateExpression:(id)arg1 choiceItem:(id)arg2 returningError:(id*)arg3 ;
-(void)setVersionOfOSToBeInstalled:(id)arg1 ;
-(id)versionOfOSToBeInstalled;
-(char)shouldAllowInstallToDomain:(int)arg1 ;
-(char)restoreFromChoiceChangesFile:(id)arg1 error:(id*)arg2 ;
-(char)writeChoiceChangesToFile:(id)arg1 error:(id*)arg2 ;
-(char)isEvaluating;
-(NSString *)localizedProductName;
-(void)setLocalizedProductName:(NSString *)arg1 ;
-(id)_commonCheckErrorWithCode:(int)arg1 userInfo:(id)arg2 destination:(id)arg3 minVersion:(id)arg4 minMemory:(long long)arg5 ;
-(char)_isSystemVersion:(id)arg1 sameMajorVersionAs:(id)arg2 ;
-(char)_performArchitectureCheckReturningError:(id*)arg1 ;
-(char)_performRAMCheckReturningError:(id*)arg1 ;
-(char)_performHardwarePropertiesCheckReturningError:(id*)arg1 ;
-(char)_performGraphicsHardwareCheckReturningError:(id*)arg1 ;
-(char)_evaluateCheckScript:(id)arg1 withPath:(id)arg2 allowInsecure:(char)arg3 nodeIdentifier:(id)arg4 returningError:(id*)arg5 errorCode:(int)arg6 warningCode:(int)arg7 ;
-(char)_performOSVersionCheckWithPath:(id)arg1 error:(id*)arg2 ;
-(char)_performRequiredBundleCheckWithPath:(id)arg1 error:(id*)arg2 ;
-(char)performPeripheralCheckReturningError:(id*)arg1 ;
-(OpaqueJSContextRef)jsContextRef;
-(id)choiceItemForIdentifier:(id)arg1 ;
-(id)orderedPackageSpecifiersToInstall;
-(id)effectiveValueForPackageAttributeName:(id)arg1 ;
-(id)distribution;
-(id)orderedPackageReferencesToInstall;
-(id)initWithDistribution:(id)arg1 interfaceType:(id)arg2 ;
-(void)setMetaInfo:(id)arg1 ;
-(char)performInstallationCheckReturningError:(id*)arg1 ;
-(char)performVolumeCheckWithPath:(id)arg1 error:(id*)arg2 ;
-(char)performUpgradeCheckWithPath:(id)arg1 error:(id*)arg2 ;
-(void)waitUntilQuiescent;
-(id)product;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_displayName;
@end

