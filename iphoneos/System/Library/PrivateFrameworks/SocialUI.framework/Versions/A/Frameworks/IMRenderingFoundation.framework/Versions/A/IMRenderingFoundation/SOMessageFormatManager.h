/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/NSCoding.h>

@class NSFont, SOMessageColor;

@interface SOMessageFormatManager : NSObject <NSCoding> {

	char _overridesFontMessageColorWithDefault;
	char _overridesFontWithDefault;
	int _backgroundColorPolicy;
	NSFont* _defaultFont;
	SOMessageColor* _defaultDisplayBackgroundMessageColor;
	SOMessageColor* _defaultDisplayFontMessageColor;

}

@property (assign,nonatomic) int backgroundColorPolicy;                                          //@synthesize backgroundColorPolicy=_backgroundColorPolicy - In the implementation block
@property (nonatomic,retain) SOMessageColor * defaultDisplayBackgroundMessageColor;              //@synthesize defaultDisplayBackgroundMessageColor=_defaultDisplayBackgroundMessageColor - In the implementation block
@property (assign,nonatomic) char overridesFontMessageColorWithDefault;                          //@synthesize overridesFontMessageColorWithDefault=_overridesFontMessageColorWithDefault - In the implementation block
@property (nonatomic,retain) SOMessageColor * defaultDisplayFontMessageColor;                    //@synthesize defaultDisplayFontMessageColor=_defaultDisplayFontMessageColor - In the implementation block
@property (assign,nonatomic) char overridesFontWithDefault;                                      //@synthesize overridesFontWithDefault=_overridesFontWithDefault - In the implementation block
@property (nonatomic,copy) NSFont * defaultFont;                                                 //@synthesize defaultFont=_defaultFont - In the implementation block
+(id)defaultFont;
+(id)outgoingMessageFormatManager;
+(id)incomingMessageFormatManager;
+(id)displayAutomaticBackgroundColorForMessage:(id)arg1 ;
+(id)displayAutomaticFontColorForMessage:(id)arg1 ;
+(void)_defaultMessageFormatSettingsDidChange:(id)arg1 ;
+(void)setSOAgentOutgoingMessagePrefs;
+(id)displayBackgroundColorForMessage:(id)arg1 ;
+(id)displayBackgroundColorForHandle:(id)arg1 ;
+(id)displayFontColorForMessage:(id)arg1 ;
+(id)displayFontColorForHandle:(id)arg1 ;
-(NSFont *)defaultFont;
-(void)setDefaultFont:(NSFont *)arg1 ;
-(SOMessageColor *)defaultDisplayBackgroundMessageColor;
-(int)backgroundColorPolicy;
-(char)overridesFontMessageColorWithDefault;
-(char)overridesFontWithDefault;
-(id)displayAutomaticBackgroundColorForMessage:(id)arg1 ;
-(id)displayAutomaticFontColorForMessage:(id)arg1 ;
-(void)setBackgroundColorPolicy:(int)arg1 ;
-(void)setOverridesFontMessageColorWithDefault:(char)arg1 ;
-(void)setOverridesFontWithDefault:(char)arg1 ;
-(void)setDefaultDisplayBackgroundMessageColor:(SOMessageColor *)arg1 ;
-(void)setDefaultDisplayFontMessageColor:(SOMessageColor *)arg1 ;
-(id)outgoingEmbeddedBackgroundColorForHandle:(id)arg1 ;
-(SOMessageColor *)defaultDisplayFontMessageColor;
-(id)displayBackgroundColorForMessage:(id)arg1 ;
-(id)displayBackgroundColorForHandle:(id)arg1 ;
-(id)displayFontColorForMessage:(id)arg1 ;
-(id)displayFontColorForHandle:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

