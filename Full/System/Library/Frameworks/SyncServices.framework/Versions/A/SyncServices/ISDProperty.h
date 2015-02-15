/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <SyncServices/ISDDataObject.h>
#import <SyncServices/NSCoding.h>
#import <SyncServices/ISyncConflictPropertyType.h>

@class NSString, NSArray, ISDFileReference;

@interface ISDProperty : ISDDataObject <NSCoding, ISyncConflictPropertyType> {

	NSString* _name;
	NSString* _fullName;
	NSString* _type;
	NSString* _subtype;
	NSArray* _enumValues;
	ISDFileReference* _bundleRef;
	NSString* _uiHelperClassName;
	NSString* _automagicConflictResolverClassName;
	NSArray* _preferredClientTypesForAutomagicResolution;
	struct {
		unsigned identityKey : 1;
		unsigned required : 1;
		unsigned excludeFromAirbagCount : 1;
		unsigned recordTypeForAutomagicResolution : 3;
		unsigned deleteRule : 1;
		unsigned toMany : 1;
		unsigned ordering : 2;
		unsigned isMatchable : 1;
		unsigned identityAlternative : 5;
	}  _flags;

}
+(void)initialize;
-(void)setRequired:(char)arg1 ;
-(char)isRelationship;
-(id)bundle;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)type;
-(id)subtype;
-(void)setType:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)displayName;
-(id)fullName;
-(char)isToMany;
-(id)fastName;
-(char)isRequired;
-(id)bundleRef;
-(char)morphInToObject:(id)arg1 ;
-(char)isCompatibleExtensionOf:(id)arg1 ;
-(id)uiHelperClassName;
-(void)setBundleRef:(id)arg1 ;
-(void)setUIHelperClassName:(id)arg1 ;
-(id)initWithName:(id)arg1 entity:(id)arg2 ;
-(void)setAutomagicConflictResolverClassName:(id)arg1 ;
-(void)setSubtype:(id)arg1 ;
-(void)setEnumValues:(id)arg1 ;
-(void)setExcludeFromAirbagCount:(char)arg1 ;
-(void)setPreferredClientTypesForAutomaticConflictResolution:(id)arg1 ;
-(void)setPreferredRecordTypeForAutomaticConflictResolution:(int)arg1 ;
-(void)setIdentityKey:(char)arg1 ;
-(void)setIsMatchable:(char)arg1 ;
-(char)isMatchable;
-(void)setIdentityAlternative:(int)arg1 ;
-(char)excludeFromAirbagCount;
-(id)enumValues;
-(id)displayNameForEnumValue:(id)arg1 ;
-(Class)uiHelperClass;
-(char)isIdentityKey;
-(id)fastSubtype;
-(int)identityAlternative;
-(int)preferredRecordTypeForAutomaticConflictResolution;
-(id)preferredClientTypesForAutomaticConflictResolution;
-(id)automagicConflictResolverClassName;
-(char)isIdentityKeyForAlternative:(int)arg1 ;
-(Class)automagicConflictResolverClass;
@end

