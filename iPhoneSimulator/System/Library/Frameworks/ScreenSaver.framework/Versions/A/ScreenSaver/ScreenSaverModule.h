/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <ScreenSaver/NSCopying.h>

@class NSString, NSBundle;

@interface ScreenSaverModule : NSObject <NSCopying> {

	NSString* _moduleName;
	NSString* _displayName;
	NSString* _path;
	NSBundle* _bundle;
	id _representedObject;
	int _type;
	char _enabled;
	char _archCompatible;
	char _requiresGraphicsAcceleration;

}
+(id)shuffleModuleName;
+(id)moduleWithName:(id)arg1 ;
+(id)moduleWithPath:(id)arg1 ;
+(id)shuffleModule;
+(id)moduleWithDictionary:(id)arg1 ;
+(id)defaultModule;
+(id)moduleFromLegacyDefaults:(id)arg1 ;
+(id)floatingMessageModuleWithMessage:(id)arg1 ;
+(id)defaultModuleName;
+(id)localizedSaverNameForPath:(id)arg1 ;
+(id)randomModule;
-(char)isSlideshow;
-(id)bundleID;
-(char)needsAnimationTimer;
-(char)isScreenSaver;
-(char)isQC;
-(id)saverPath;
-(char)requiresGraphicsAcceleration;
-(char)isIPhoto;
-(char)isAperture;
-(id)defaultsName;
-(void)generateSemiUniqueName;
-(id)crashReporterString;
-(char)canRunAtLoginWindow;
-(char)signedByApple;
-(void)setRequiresGraphicsAcceleration:(char)arg1 ;
-(char)isCompatibleWithCurrentArch;
-(char)enabled;
-(id)bundle;
-(void)dealloc;
-(id)description;
-(id)path;
-(void)setName:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(id)name;
-(void)setEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(long long)compare:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)thumbnail;
@end

