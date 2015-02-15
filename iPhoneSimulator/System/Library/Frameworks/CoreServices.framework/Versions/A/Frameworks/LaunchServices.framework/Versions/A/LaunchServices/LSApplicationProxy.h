/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LaunchServices/LSBundleProxy.h>
#import <LaunchServices/NSSecureCoding.h>

@class NSArray, NSString, NSDictionary, NSNumber, NSUUID, NSProgress;

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {

	unsigned long long _flags;
	NSArray* _privateDocumentIconNames;
	LSApplicationProxy* _privateDocumentTypeOwner;
	NSString* _vendorName;
	NSString* _itemName;
	NSString* _shortVersionString;
	unsigned long long _installType;
	unsigned long long _originalInstallType;
	NSDictionary* _groupContainers;
	NSArray* _externalAccessoryProtocols;
	NSArray* _deviceFamily;
	NSArray* _requiredDeviceCapabilities;
	NSString* _minimumSystemVersion;
	NSString* _sdkVersion;
	NSArray* _directionsModes;
	NSArray* _UIBackgroundModes;
	NSArray* _audioComponents;
	NSArray* _VPNPlugins;
	NSArray* _pluginUUIDs;
	NSArray* _plugInKitPlugins;
	NSArray* _appTags;
	NSString* _applicationDSID;
	NSString* _storeCohortMetadata;
	NSNumber* _storeFront;
	char _isContainerized;
	int _modTime;
	NSNumber* _staticDiskUsage;
	NSNumber* _dynamicDiskUsage;
	NSNumber* _itemID;
	NSArray* _groupIdentifiers;
	NSString* _teamID;

}

@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSNumber * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * roleIdentifier; 
@property (nonatomic,readonly) NSString * vendorName;                               //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                 //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) NSString * storeCohortMetadata;                      //@synthesize storeCohortMetadata=_storeCohortMetadata - In the implementation block
@property (nonatomic,readonly) NSString * minimumSystemVersion;                     //@synthesize minimumSystemVersion=_minimumSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * sdkVersion;                               //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * shortVersionString;                       //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,readonly) NSString * applicationType; 
@property (nonatomic,readonly) NSArray * directionsModes;                           //@synthesize directionsModes=_directionsModes - In the implementation block
@property (nonatomic,readonly) NSArray * UIBackgroundModes;                         //@synthesize UIBackgroundModes=_UIBackgroundModes - In the implementation block
@property (nonatomic,readonly) NSArray * audioComponents;                           //@synthesize audioComponents=_audioComponents - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupContainers;                      //@synthesize groupContainers=_groupContainers - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceIdentifierForVendor; 
@property (nonatomic,readonly) NSProgress * installProgress; 
@property (nonatomic,readonly) NSNumber * staticDiskUsage;                          //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,readonly) NSNumber * dynamicDiskUsage;                         //@synthesize dynamicDiskUsage=_dynamicDiskUsage - In the implementation block
@property (nonatomic,readonly) NSArray * VPNPlugins;                                //@synthesize VPNPlugins=_VPNPlugins - In the implementation block
@property (nonatomic,readonly) NSArray * plugInKitPlugins;                          //@synthesize plugInKitPlugins=_plugInKitPlugins - In the implementation block
@property (nonatomic,readonly) NSArray * appTags;                                   //@synthesize appTags=_appTags - In the implementation block
@property (nonatomic,readonly) NSString * applicationDSID;                          //@synthesize applicationDSID=_applicationDSID - In the implementation block
@property (nonatomic,readonly) unsigned long long installType;                      //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) unsigned long long originalInstallType;              //@synthesize originalInstallType=_originalInstallType - In the implementation block
@property (nonatomic,readonly) NSArray * requiredDeviceCapabilities;                //@synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * deviceFamily;                              //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (nonatomic,readonly) NSArray * groupIdentifiers;                          //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * externalAccessoryProtocols; 
@property (nonatomic,readonly) NSString * teamID;                                   //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSNumber * storeFront;                               //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) char isInstalled; 
@property (nonatomic,readonly) char isPlaceholder; 
@property (nonatomic,readonly) char isAppUpdate; 
@property (nonatomic,readonly) char isNewsstandApp; 
@property (nonatomic,readonly) char isRestricted; 
@property (nonatomic,readonly) char isBetaApp; 
@property (nonatomic,readonly) char profileValidated; 
@property (nonatomic,readonly) char supportsAudiobooks; 
@property (nonatomic,readonly) char isContainerized;                                //@synthesize isContainerized=_isContainerized - In the implementation block
@property (nonatomic,readonly) char hasSettingsBundle; 
@property (nonatomic,readonly) char supportsExternallyPlayableContent; 
@property (nonatomic,readonly) char fileSharingEnabled; 
@property (nonatomic,readonly) char iconIsPrerendered; 
@property (nonatomic,readonly) char isPurchasedReDownload; 
+(id)applicationProxyForIdentifier:(id)arg1 placeholder:(char)arg2 ;
+(id)applicationProxyForBundleURL:(id)arg1 ;
+(id)applicationProxyWithBundleUnitID:(unsigned)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2 ;
+(id)applicationProxyForItemID:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)isInstalled;
-(NSNumber *)storeFront;
-(id)iconDataForVariant:(int)arg1 ;
-(id)iconStyleDomain;
-(id)machOUUIDs;
-(id)_initWithBundleUnit:(unsigned)arg1 applicationIdentifier:(id)arg2 ;
-(char)isContainerized;
-(char)profileValidated;
-(NSString *)roleIdentifier;
-(int)bundleModTime;
-(NSArray *)deviceFamily;
-(NSString *)minimumSystemVersion;
-(NSString *)sdkVersion;
-(NSString *)applicationType;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSString *)storeCohortMetadata;
-(NSString *)shortVersionString;
-(NSString *)applicationDSID;
-(NSDictionary *)groupContainers;
-(NSArray *)directionsModes;
-(NSArray *)UIBackgroundModes;
-(NSArray *)audioComponents;
-(NSArray *)externalAccessoryProtocols;
-(NSArray *)VPNPlugins;
-(NSArray *)plugInKitPlugins;
-(NSArray *)appTags;
-(NSArray *)requiredDeviceCapabilities;
-(NSUUID *)deviceIdentifierForVendor;
-(NSNumber *)staticDiskUsage;
-(NSNumber *)dynamicDiskUsage;
-(NSProgress *)installProgress;
-(id)installProgressSync;
-(id)resourcesDirectoryURL;
-(id)privateDocumentIconNames;
-(void)setPrivateDocumentIconNames:(id)arg1 ;
-(char)privateDocumentIconAllowOverride;
-(void)setPrivateDocumentIconAllowOverride:(char)arg1 ;
-(id)privateDocumentTypeOwner;
-(void)setPrivateDocumentTypeOwner:(id)arg1 ;
-(char)iconIsPrerendered;
-(char)fileSharingEnabled;
-(char)isAppUpdate;
-(char)isNewsstandApp;
-(char)supportsAudiobooks;
-(char)supportsExternallyPlayableContent;
-(char)hasSettingsBundle;
-(char)isBetaApp;
-(char)isPurchasedReDownload;
-(id)userActivityStringForAdvertisementData:(id)arg1 ;
-(unsigned long long)installType;
-(unsigned long long)originalInstallType;
-(NSArray *)groupIdentifiers;
-(NSString *)teamID;
-(id)localizedShortName;
-(char)isPlaceholder;
-(id)appStoreReceiptURL;
-(NSString *)applicationIdentifier;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)localizedName;
-(char)isRestricted;
-(NSNumber *)itemID;
@end
