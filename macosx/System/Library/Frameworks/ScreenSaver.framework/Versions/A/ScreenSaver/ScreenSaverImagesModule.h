/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <ScreenSaver/ScreenSaverModule.h>
#import <ScreenSaver/NSCopying.h>

@class NSString;

@interface ScreenSaverImagesModule : ScreenSaverModule <NSCopying> {

	NSString* _style;
	NSString* _mediaGroupID;
	NSString* _iLifeMediaGroupTypeIdentifier;
	unsigned _iLifeMediaGroupType;

}

@property (retain) NSString * style;                                      //@synthesize style=_style - In the implementation block
@property (assign) unsigned iLifeMediaGroupType;                          //@synthesize iLifeMediaGroupType=_iLifeMediaGroupType - In the implementation block
@property (retain) NSString * mediaGroupID;                               //@synthesize mediaGroupID=_mediaGroupID - In the implementation block
@property (retain) NSString * iLifeMediaGroupTypeIdentifier;              //@synthesize iLifeMediaGroupTypeIdentifier=_iLifeMediaGroupTypeIdentifier - In the implementation block
+(id)moduleWithName:(id)arg1 ;
-(char)isSlideshow;
-(id)saverPath;
-(char)requiresGraphicsAcceleration;
-(NSString *)mediaGroupID;
-(id)defaultsName;
-(void)setILifeMediaGroupTypeIdentifier:(NSString *)arg1 ;
-(void)setMediaGroupID:(NSString *)arg1 ;
-(void)generateSemiUniqueName;
-(id)crashReporterString;
-(NSString *)iLifeMediaGroupTypeIdentifier;
-(void)updateUsingILifeMediaManager:(id)arg1 ;
-(unsigned)iLifeMediaGroupType;
-(void)setILifeMediaGroupType:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
@end

