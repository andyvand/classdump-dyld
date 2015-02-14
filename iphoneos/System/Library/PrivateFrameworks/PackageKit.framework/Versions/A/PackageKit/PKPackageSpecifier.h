/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/NSSecureCoding.h>
#import <PackageKit/NSCopying.h>

@protocol PKPackageReferable;
@class NSString, NSNumber, NSMutableDictionary, NSDictionary, PKPackage, PKPackageRequirements;

@interface PKPackageSpecifier : NSObject <NSSecureCoding, NSCopying> {

	id<PKPackageReferable> _packageReference;
	NSString* _prefixPath;
	NSNumber* _authLevel;
	int _options;
	NSString* _displayName;
	NSString* _displayVersion;
	NSString* _externalRootPath;
	NSMutableDictionary* _userPathByComponentIdent;
	NSDictionary* _resolvedPathByComponentIdent;
	NSDictionary* _installPathByComponentIdent;
	NSString* _packageUniqueHash;
	PKPackage* _package;
	PKPackageRequirements* _requirements;
	NSString* _destinationPath;

}

@property (retain) id<PKPackageReferable> packageReference;              //@synthesize packageReference=_packageReference - In the implementation block
@property (copy) NSString * prefixPath;                                  //@synthesize prefixPath=_prefixPath - In the implementation block
@property (copy) NSNumber * authLevel;                                   //@synthesize authLevel=_authLevel - In the implementation block
@property (assign) int options;                                          //@synthesize options=_options - In the implementation block
@property (copy) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * displayVersion;                              //@synthesize displayVersion=_displayVersion - In the implementation block
@property (copy) NSString * externalRootPath;                            //@synthesize externalRootPath=_externalRootPath - In the implementation block
+(id)_adjustedSubpath:(id)arg1 forPackageComponent:(id)arg2 relocatedToPath:(id)arg3 ;
+(char)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithPackage:(id)arg1 ;
-(char)_refersToSamePackage:(id)arg1 ;
-(char)_checkChildIntegrityForDO;
-(NSNumber *)authLevel;
-(id)_resolvedPrefixPathForPackage;
-(void)_resolveInstallPathsForDestination:(id)arg1 replacingPriorResults:(char)arg2 ;
-(id)_requirements;
-(void)setPrefixPath:(NSString *)arg1 ;
-(NSString *)prefixPath;
-(id)_resolvedPrefixPathForPackageComponent:(id)arg1 ;
-(id)_previousInstallPathForBundleComponent:(id)arg1 ;
-(id)_defaultInstallPathForBundleComponent:(id)arg1 ;
-(id)_actualInstallPathForBundleComponent:(id)arg1 ;
-(id)_adjustedSubpath:(id)arg1 forPackageComponent:(id)arg2 previous:(char)arg3 ;
-(id)initWithPackageReference:(id)arg1 ;
-(void)setExternalRootPath:(NSString *)arg1 ;
-(id)_packageUniqueHash;
-(id)_initWithDictionaryRepresentation:(id)arg1 ;
-(id)userPathForComponentIdentifier:(id)arg1 ;
-(void)setUserPath:(id)arg1 forComponentIdentifier:(id)arg2 ;
-(NSString *)externalRootPath;
-(id)_onDiskComponentForDestination:(id)arg1 packageComponent:(id)arg2 search:(char)arg3 ;
-(char)_bundleHasOriginalName:(id)arg1 ;
-(id)__adjustedInstallPathForComponent:(id)arg1 provisionalPath:(id)arg2 destination:(id)arg3 ;
-(id)__checkForApplicationConflictForComponent:(id)arg1 provisionalPath:(id)arg2 destination:(id)arg3 ;
-(id)__uniquePathForBundle:(id)arg1 ;
-(id<PKPackageReferable>)packageReference;
-(void)setPackageReference:(id<PKPackageReferable>)arg1 ;
-(id)package;
-(void)setAuthLevel:(NSNumber *)arg1 ;
-(void)setDisplayVersion:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)options;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setOptions:(int)arg1 ;
-(NSString *)displayVersion;
@end

