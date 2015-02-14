/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSArray;

@interface PKProductInfo : NSObject {

	NSDictionary* _productInfoDictionary;
	NSURL* _baseURL;
	NSArray* _cachedPackageReferences;

}
-(id)productVersion;
-(id)productIdentifier;
-(void)setProductIdentifier:(id)arg1 version:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 baseURL:(id)arg2 ;
-(id)preferredDistributionURL;
-(id)packageReferences;
-(void)setDistributionURL:(id)arg1 forLocalization:(id)arg2 ;
-(void)setPackageReferences:(id)arg1 ;
-(id)_distributionsDictionary;
-(id)distributionURLForLocalization:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(id)localizations;
-(id)baseURL;
@end

