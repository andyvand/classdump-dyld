/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSString, NSError;

@interface SUCatalogFetch : NSObject {

	NSDictionary* _catalogDictionary;
	NSURL* _finalURL;
	NSString* _previousEntityTag;
	char _skipIfUnchanged;
	NSString* _currentEntityTag;
	char _didUseDefaultURL;
	char _didUseAppleDefaultProductionURL;
	NSError* _error;

}
+(id)catalogURL;
+(char)_isAppleSeedCatalogURL:(id)arg1 ;
+(id)priorProductionCatalogURLs;
+(id)appleCatalogURL;
+(id)defaultAppleCatalogURL;
+(char)isUsingAppleSeedCatalogURL;
-(char)_isEVCheckDisabled;
-(id)_fetchDictionaryFromURL:(id)arg1 returningError:(id*)arg2 ;
-(char)isCatalogChanged;
-(id)_fetchAppleCatalogDictionaryReturningError:(id*)arg1 finalURL:(id*)arg2 isAppleProductionDefault:(char*)arg3 ;
-(id)_fetchCatalogDictionaryReturningError:(id*)arg1 finalURL:(id*)arg2 isAppleDefault:(char*)arg3 isAppleProductionDefault:(char*)arg4 usingURL:(id)arg5 ;
-(id)initWithURL:(id)arg1 previousEntityTag:(id)arg2 skipIfUnchanged:(char)arg3 ;
-(id)catalogDictionary;
-(char)isDefaultAppleCatalogURL;
-(char)isDefaultAppleProductionCatalogURL;
-(char)isAppleSeedCatalogURL;
-(id)catalogEntityTag;
-(id)init;
-(void)dealloc;
-(id)error;
-(id)finalURL;
@end

