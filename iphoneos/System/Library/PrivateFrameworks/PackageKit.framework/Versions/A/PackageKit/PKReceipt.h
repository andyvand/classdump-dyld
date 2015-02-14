/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface PKReceipt : NSObject {

	NSMutableDictionary* _receiptDictionary;
	NSString* _bomPath;
	void* _cachedBOM;
	NSString* _bundlePath;
	char _isSecure;

}
+(id)_receiptDictionaryPathFromBOMPath:(id)arg1 ;
+(id)_searchDirectoriesForBOMReceiptsOnDestination:(id)arg1 returningSecureIndexes:(id*)arg2 ;
+(id)__findReceiptsFromBOMsDirectory:(id)arg1 ;
+(id)_searchDirectoriesForBundleReceiptsOnDestination:(id)arg1 ;
+(id)__findBundleReceiptsFromDirectory:(id)arg1 ;
+(id)_sharedReceiptsCache;
+(id)_findReceiptsOnVolumeAtPath:(id)arg1 ;
+(id)receiptsOnVolumeAtPath:(id)arg1 ;
+(id)receiptWithIdentifier:(id)arg1 volume:(id)arg2 ;
+(id)receiptWithPackageFileName:(id)arg1 volume:(id)arg2 ;
+(id)receiptsAtPath:(id)arg1 ;
+(id)_receiptsDirectoryPathForDestination:(id)arg1 ;
+(id)_receiptsDirectoryPathForSandboxRoot:(id)arg1 destination:(id)arg2 ;
+(void)_clearCache;
-(id)packageIdentifier;
-(id)initWithBOMPath:(id)arg1 ;
-(id)packageVersion;
-(void)_freeBOM;
-(id)initWithBundlePkgPath:(id)arg1 ;
-(id)installDate;
-(id)installProcessName;
-(id)installPrefixPath;
-(char)_isSecure;
-(void)_setSecure:(char)arg1 ;
-(id)_packageName;
-(id)_BOM;
-(void)_setSHA1ChecksumData:(id)arg1 forItemAtPath:(id)arg2 ;
-(void)_setACLString:(id)arg1 forItemAtPath:(id)arg2 ;
-(id)packageGroups;
-(void)_setPackageGroups:(id)arg1 ;
-(void)_setPackageName:(id)arg1 ;
-(void)_setInstallProcessName:(id)arg1 ;
-(void)_setInstallPrefixPath:(id)arg1 ;
-(id)receiptStoragePaths;
-(id)_directoryEnumerator;
-(id)_attributesOfItemAtPath:(id)arg1 ;
-(id)_SHA1ChecksumDataOfItemAtPath:(id)arg1 ;
-(id)_ACLStringOfItemAtPath:(id)arg1 ;
-(char)_updateSHA1ChecksumOfItemAtPath:(id)arg1 withFile:(id)arg2 ;
-(char)_updateACLsOfItemAtPath:(id)arg1 withFile:(id)arg2 ;
-(char)_removeReceiptInDirectory:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

