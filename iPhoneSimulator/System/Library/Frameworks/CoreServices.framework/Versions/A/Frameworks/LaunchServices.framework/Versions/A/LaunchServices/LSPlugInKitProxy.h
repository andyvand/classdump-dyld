/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LaunchServices/LSBundleProxy.h>
#import <LaunchServices/NSSecureCoding.h>

@class NSDictionary, LSBundleProxy, NSString, NSUUID, NSDate;

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {

	NSDictionary* _infoPlist;
	LSBundleProxy* _parentBundle;
	unsigned _parentBundleID;
	char _isOnSystemPartition;
	NSString* _pluginIdentifier;
	NSString* _protocol;
	NSUUID* _pluginUUID;
	NSDictionary* _pluginKitDictionary;
	NSDate* _registrationDate;

}

@property (nonatomic,readonly) NSString * pluginIdentifier;                     //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * protocol;                             //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSUUID * pluginUUID;                             //@synthesize pluginUUID=_pluginUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginKitDictionary;              //@synthesize pluginKitDictionary=_pluginKitDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * infoPlist; 
@property (nonatomic,readonly) NSDate * registrationDate;                       //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,readonly) LSBundleProxy * containingBundle; 
@property (nonatomic,readonly) char isOnSystemPartition;                        //@synthesize isOnSystemPartition=_isOnSystemPartition - In the implementation block
+(id)pluginKitProxyForIdentifier:(id)arg1 ;
+(id)pluginKitProxyForURL:(id)arg1 ;
+(id)plugInKitProxyForPlugin:(unsigned)arg1 ;
+(id)pluginKitProxyForUUID:(id)arg1 ;
+(id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 version:(id)arg4 bundleURL:(id)arg5 ;
+(char)supportsSecureCoding;
-(NSString *)protocol;
-(id)iconDataForVariant:(int)arg1 ;
-(id)_initWithPlugin:(unsigned)arg1 ;
-(id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 version:(id)arg4 bundleURL:(id)arg5 ;
-(NSString *)pluginIdentifier;
-(NSUUID *)pluginUUID;
-(LSBundleProxy *)containingBundle;
-(NSDictionary *)infoPlist;
-(NSDictionary *)pluginKitDictionary;
-(NSDate *)registrationDate;
-(char)isOnSystemPartition;
-(id)localizedShortName;
-(id)appStoreReceiptURL;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)localizedName;
@end

