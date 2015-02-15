/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKPackageReferable.h>

@class NSMutableArray, NSString, PKDistribution;

@interface PKDistributionPackageReference : NSObject <PKPackageReferable> {

	NSMutableArray* _pkgRefElements;
	NSString* _pkgRefIdentifier;
	PKDistribution* _distribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)packageIdentifier;
-(id)pkgRefIdentifier;
-(id)_initWithDistribution:(id)arg1 pkgRefIdentifier:(id)arg2 ;
-(void)_addPkgRefElement:(id)arg1 ;
-(void)_replacePkgRefIdentifier:(id)arg1 ;
-(id)_pkgRefElements;
-(void)_setDistribution:(id)arg1 ;
-(void)_removePkgRefElement:(id)arg1 ;
-(id)scriptForAttributeName:(id)arg1 createIfNeeded:(char)arg2 ;
-(id)scriptForAttributeName:(id)arg1 ;
-(id)_pkgRefElementForWriting:(char)arg1 passingBlock:(/*^block*/id)arg2 ;
-(id)_distNameFromExternalName:(id)arg1 ;
-(id)_externalValueFromDistValue:(id)arg1 forExternalName:(id)arg2 ;
-(void)setPkgRefIdentifier:(id)arg1 ;
-(id)_distValueFromExternalValue:(id)arg1 forExternalName:(id)arg2 ;
-(id)_bundleVersionElementCreatingIfNeeded:(char)arg1 ;
-(char)validatePkgRefIdentifier:(id*)arg1 error:(id*)arg2 ;
-(void)setPackageIdentifier:(id)arg1 ;
-(id)attributesAsDictionary;
-(id)bundleComponents;
-(void)setBundleComponents:(id)arg1 ;
-(unsigned long long)countOfMustCloseApps;
-(id)objectInMustCloseAppsAtIndex:(unsigned long long)arg1 ;
-(id)componentIdentifierToSearchIdentifierMap;
-(id)valueForAttributeName:(id)arg1 ;
-(id)distribution;
-(void)setValue:(id)arg1 forAttributeName:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identifier;
-(void)setURL:(id)arg1 ;
-(id)version;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end
