/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned _version;
	NSArray* _logoPaths;
	NSArray* _snippetLogoPaths;
	NSString* _displayName;
	NSArray* _attributionApps;
	unsigned _attributionRequirementsMask;

}

@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned requirementsMask;              //@synthesize attributionRequirementsMask=_attributionRequirementsMask - In the implementation block
@property (nonatomic,retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * attributionApps;              //@synthesize attributionApps=_attributionApps - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(char)hasAttributionRequirement:(int)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(char)supportsActionURLs;
-(void)setAttributionApps:(NSArray *)arg1 ;
-(NSArray *)attributionApps;
-(void)setRequirementsMask:(unsigned)arg1 ;
-(unsigned)requirementsMask;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(void)addLogoPath:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned)version;
@end

