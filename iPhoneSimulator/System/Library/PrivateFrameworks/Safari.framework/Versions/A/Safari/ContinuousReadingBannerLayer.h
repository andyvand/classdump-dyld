/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, NSImage, NSAttributedString, NSString;

@interface ContinuousReadingBannerLayer : CALayer {

	CALayer* _backgroundLayer;
	CALayer* _primaryIconImageLayer;
	CALayer* _secondaryIconImageLayer;
	CALayer* _primaryTextLayer;
	CALayer* _secondaryTextLayer;
	CALayer* _screenNameAndRetweetInfoTextLayer;
	CALayer* _retweetButtonLayer;
	char _iconDrawsDropShadowAndMask;
	char _retweetButtonVisible;
	char _retweetButtonUsesRolloverAppearance;
	char _retweetButtonPressed;
	char _cursorIsInsideSocialProfileButton;
	char _socialProfileButtonPressed;
	char _trackingMouseDownInRetweetButton;
	char _trackingMouseDownInInSocialProfileButton;
	double _scaleFactor;
	unsigned long long _bannerLocation;
	unsigned long long _bannerType;
	NSImage* _icon;
	NSImage* _secondaryIcon;
	NSAttributedString* _primaryTextTitle;
	NSAttributedString* _secondaryTextTitle;
	NSAttributedString* _stylizedScreenName;
	NSAttributedString* _stylizedRetweetInfo;

}

@property (assign,nonatomic) double scaleFactor;                                                //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) unsigned long long bannerLocation;                               //@synthesize bannerLocation=_bannerLocation - In the implementation block
@property (assign,nonatomic) unsigned long long bannerType;                                     //@synthesize bannerType=_bannerType - In the implementation block
@property (nonatomic,retain) NSImage * icon;                                                    //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) char iconDrawsDropShadowAndMask;                                   //@synthesize iconDrawsDropShadowAndMask=_iconDrawsDropShadowAndMask - In the implementation block
@property (nonatomic,retain) NSImage * secondaryIcon;                                           //@synthesize secondaryIcon=_secondaryIcon - In the implementation block
@property (nonatomic,copy) NSAttributedString * itemTitle; 
@property (nonatomic,copy) NSString * screenName; 
@property (nonatomic,copy) NSString * itemDescription; 
@property (assign,nonatomic) char retweetButtonVisible;                                         //@synthesize retweetButtonVisible=_retweetButtonVisible - In the implementation block
@property (assign,nonatomic) char retweetButtonUsesRolloverAppearance;                          //@synthesize retweetButtonUsesRolloverAppearance=_retweetButtonUsesRolloverAppearance - In the implementation block
@property (assign,nonatomic) char retweetButtonPressed;                                         //@synthesize retweetButtonPressed=_retweetButtonPressed - In the implementation block
@property (assign,nonatomic) char cursorIsInsideSocialProfileButton;                            //@synthesize cursorIsInsideSocialProfileButton=_cursorIsInsideSocialProfileButton - In the implementation block
@property (assign,nonatomic) char socialProfileButtonPressed;                                   //@synthesize socialProfileButtonPressed=_socialProfileButtonPressed - In the implementation block
@property (assign,nonatomic) char trackingMouseDownInRetweetButton;                             //@synthesize trackingMouseDownInRetweetButton=_trackingMouseDownInRetweetButton - In the implementation block
@property (assign,nonatomic) char trackingMouseDownInInSocialProfileButton;                     //@synthesize trackingMouseDownInInSocialProfileButton=_trackingMouseDownInInSocialProfileButton - In the implementation block
@property (nonatomic,retain,readonly) CALayer * primaryIconImageLayer; 
@property (nonatomic,retain,readonly) CALayer * secondaryIconImageLayer; 
@property (nonatomic,retain,readonly) CALayer * primaryTextLayer; 
@property (nonatomic,retain,readonly) CALayer * secondaryTextLayer; 
@property (nonatomic,retain,readonly) CALayer * screenNameAndRetweetInfoTextLayer; 
@property (nonatomic,retain,readonly) CALayer * retweetButtonLayer; 
@property (nonatomic,copy) NSAttributedString * primaryTextTitle;                               //@synthesize primaryTextTitle=_primaryTextTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * secondaryTextTitle;                             //@synthesize secondaryTextTitle=_secondaryTextTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * stylizedScreenName;                             //@synthesize stylizedScreenName=_stylizedScreenName - In the implementation block
@property (nonatomic,copy) NSAttributedString * stylizedRetweetInfo;                            //@synthesize stylizedRetweetInfo=_stylizedRetweetInfo - In the implementation block
+(double)bannerHeight;
+(double)footerBannerSeparatorHeight;
-(id)_backgroundImage;
-(NSString *)itemDescription;
-(NSImage *)secondaryIcon;
-(NSString *)screenName;
-(unsigned long long)bannerLocation;
-(double)_bannerSeparatorHeight;
-(char)retweetButtonVisible;
-(void)_layOutTextLayers;
-(void)_layOutRetweetButton;
-(void)_updatePrimaryIconImageLayer;
-(void)_updateSecondaryIconImageLayer;
-(id)_createImageLayer;
-(id)_createTextLayer;
-(void)_layOutLayers;
-(void)_layOutIcons;
-(char)iconDrawsDropShadowAndMask;
-(NSAttributedString *)primaryTextTitle;
-(NSAttributedString *)itemTitle;
-(id)_textAttributesForPrimaryTextLayer;
-(void)setPrimaryTextTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)secondaryTextTitle;
-(id)_textAttributesForSecondaryTextLayer;
-(void)setSecondaryTextTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)stylizedScreenName;
-(id)_attributesForScreenNameAndRetweetTextLayersApplyingBold:(char)arg1 ;
-(void)setStylizedScreenName:(NSAttributedString *)arg1 ;
-(id)_retweetedBySomeoneYouFollowAndYouStringWithOtherReposterDisplayName:(id)arg1 otherReposterScreenName:(id)arg2 ;
-(id)_retweetedBySomeoneYouFollowOrYouStringWithOtherReposterDisplayName:(id)arg1 otherReposterScreenName:(id)arg2 ;
-(char)socialProfileButtonPressed;
-(char)retweetButtonPressed;
-(CALayer *)primaryTextLayer;
-(double)_ascenderForFontForPrimaryTextLayer;
-(CALayer *)secondaryTextLayer;
-(double)_ascenderForFontForSecondaryTextLayer;
-(CALayer *)screenNameAndRetweetInfoTextLayer;
-(double)_ascenderForFontForScreenNameAndRetweetInfoTextLayer;
-(id)_screenNameAndRetweetInfoTextLayerString;
-(CALayer *)retweetButtonLayer;
-(void)_drawRetweetButtonGlyphInRect:(CGRect)arg1 ;
-(CGSize)_retweetButtonGlyphImageSize;
-(id)_retweetButtonString;
-(CALayer *)primaryIconImageLayer;
-(CGRect)_primaryIconImageViewFrame;
-(char)_isSocial;
-(CALayer *)secondaryIconImageLayer;
-(CGRect)_secondaryIconImageViewFrame;
-(double)scaleFactor;
-(CGRect)_primaryTextLayerFrame;
-(CGRect)_secondaryTextLayerFrame;
-(CGRect)_screenNameAndRetweetInfoTextLayerFrame;
-(id)_fontForPrimaryTextLayer;
-(double)_maxTextLayerXCoordinate;
-(double)_rightMargin;
-(double)_currentMaximumPrimaryTextLayerWidth;
-(id)_fontForSecondaryTextLayer;
-(id)_fontForScreenNameAndRetweetInfoTextLayer;
-(double)_currentMaximumSecondaryTextLayerWidth;
-(double)_currentMaximumScreenNameAndRetweetInfoTextLayerWidth;
-(id)_boldFontForScreenNameAndRetweetInfoTextLayer;
-(NSAttributedString *)stylizedRetweetInfo;
-(char)retweetButtonUsesRolloverAppearance;
-(id)_colorForRetweetButtonText;
-(id)_fontForRetweetButtonText;
-(id)_textAttributesForRetweetButton;
-(CGRect)_retweetButtonFrame;
-(id)_retweetButtonGlyph;
-(id)initWithWidth:(double)arg1 scaleFactor:(double)arg2 bannerLocation:(unsigned long long)arg3 ;
-(char)isPointInRetweetButton:(CGPoint)arg1 ;
-(char)isPointInSocialProfileButton:(CGPoint)arg1 ;
-(void)resizeWithOldSuperlayerSize:(CGSize)arg1 ;
-(void)setRetweetButtonUsesRolloverAppearance:(char)arg1 ;
-(void)setIconDrawsDropShadowAndMask:(char)arg1 ;
-(void)setSecondaryIcon:(NSImage *)arg1 ;
-(void)setItemTitle:(NSAttributedString *)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setScreenName:(NSString *)arg1 ;
-(void)setRepostedInfo:(char)arg1 otherReposterDisplayName:(id)arg2 otherReposterScreenName:(id)arg3 ;
-(void)setRetweetButtonVisible:(char)arg1 ;
-(void)setSocialProfileButtonPressed:(char)arg1 ;
-(void)setRetweetButtonPressed:(char)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(char)cursorIsInsideSocialProfileButton;
-(void)setCursorIsInsideSocialProfileButton:(char)arg1 ;
-(char)trackingMouseDownInRetweetButton;
-(void)setTrackingMouseDownInRetweetButton:(char)arg1 ;
-(char)trackingMouseDownInInSocialProfileButton;
-(void)setTrackingMouseDownInInSocialProfileButton:(char)arg1 ;
-(void)setStylizedRetweetInfo:(NSAttributedString *)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)layoutSublayers;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(void)setBannerType:(unsigned long long)arg1 ;
-(unsigned long long)bannerType;
@end

