/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, NSString;

@interface TPLegacyButton : UIButton {

	UIImageView* _plusSeparator;
	int _color;
	NSString* _plusSeparatedTitle;
	BOOL _forceReLayout;
	BOOL _currentlyLayingOut;
	BOOL _useStandardSizing;

}

@property (assign) BOOL useStandardSizing;              //@synthesize useStandardSizing=_useStandardSizing - In the implementation block
+(float)defaultHeight;
+(id)declineButtonImage;
+(id)declineVideoButtonImage;
+(float)defaultHeightForColor:(int)arg1 ;
+(id)answerButtonImage;
+(id)acceptVideoButtonImage;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(int)buttonColor;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(CGRect)arg4 ;
-(void)setTitleVerticalOffset:(float)arg1 ;
-(void)setPlusSeparatedTitle:(id)arg1 ;
-(void)setButtonColor:(int)arg1 ;
-(void)setMinimumTitleFontSize:(float)arg1 ;
-(void)setMinimumTitleFontSize:(float)arg1 maximumTitleFontSize:(float)arg2 ;
-(void)setTitleImagePadding:(float)arg1 ;
-(void)setIconVerticalOffset:(float)arg1 ;
-(void)setDisabledButtonColor:(int)arg1 ;
-(void)_setButtonColor:(int)arg1 ;
-(void)_adjustIconColor;
-(void)_setDisabledButtonColor:(int)arg1 ;
-(BOOL)useStandardSizing;
-(void)setUseStandardSizing:(BOOL)arg1 ;
@end
