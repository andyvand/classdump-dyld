/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLDisplayBundle.h>
#import <QuickLookUI/QLAccessibilityUIElementDelegate.h>

@class QLImageAndTextLayer, NSDictionary, QLImageAndTextViewController, NSString, NSArray;

@interface QLImageAndTextDisplayBundle : QLDisplayBundle <QLAccessibilityUIElementDelegate> {

	QLImageAndTextLayer* _imageAndTextLayer;
	NSDictionary* _uiElements;
	QLImageAndTextViewController* _imageAndTextViewController;
	char _wantsLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * title; 
@property (readonly) NSString * subTitle; 
@property (readonly) NSArray * properties; 
@property (readonly) NSString * topText; 
@property (assign) char wantsLayer;                                  //@synthesize wantsLayer=_wantsLayer - In the implementation block
@property (readonly) NSDictionary * titleAttributes; 
@property (readonly) NSDictionary * subTitleAttributes; 
@property (readonly) NSDictionary * labelAttributes; 
@property (readonly) NSDictionary * valueAttributes; 
@property (readonly) NSDictionary * topTextAttributes; 
@property (readonly) CGSize defaultImageSize; 
@property (readonly) char hasDarkBackground; 
@property (readonly) char hasLargeProperties; 
+(Class)imageAndTextLayerClass;
-(id)sizingConstraints;
-(void)updateText;
-(NSDictionary *)titleAttributes;
-(char)hasDarkBackground;
-(CGRect)borderFrame;
-(void)backingScaleFactorDidChange;
-(CGRect)contentFrame;
-(void)willStartLiveResize;
-(void)didEndLiveResize;
-(void)modeDidChange;
-(id)initWithPreview:(QLPreviewRef)arg1 owner:(id)arg2 ;
-(id)accessibilityUIElements;
-(CGRect)frameForUIElementWithIdentifier:(id)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 forUIElementWithIdentifier:(id)arg2 ;
-(id)accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:(id)arg1 ;
-(CGSize)defaultImageSize;
-(NSString *)topText;
-(NSDictionary *)labelAttributes;
-(id)_attributedStringForValue:(id)arg1 attributes:(id)arg2 label:(id)arg3 space:(float)arg4 ;
-(NSString *)subTitle;
-(NSDictionary *)subTitleAttributes;
-(NSDictionary *)valueAttributes;
-(NSDictionary *)topTextAttributes;
-(char)hasLargeProperties;
-(void)updateMetrics;
-(char)highlighted;
-(void)dealloc;
-(void)setWantsLayer:(char)arg1 ;
-(NSString *)title;
-(char)wantsLayer;
-(void)setHighlighted:(char)arg1 ;
-(NSArray *)properties;
@end
