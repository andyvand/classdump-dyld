/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIButton.h>

@class CADisplayLink, UIImageView;

@interface MPDownloadProgressIndicator : UIButton {

	float _animatedStartValue;
	float _animatedValue;
	BOOL _animating;
	BOOL _canCancel;
	double _animationEndTime;
	double _animationStartTime;
	CADisplayLink* _displayLink;
	UIImageView* _centerImageView;
	BOOL _mpExternalHidden;
	BOOL _mpInternalHidden;
	int _style;
	float _value;

}

@property (nonatomic,readonly) int style;                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float value;                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL canCancel;              //@synthesize canCancel=_canCancel - In the implementation block
+(CGSize)_sizeForStyle:(int)arg1 ;
+(id)_stopImageForStyle:(int)arg1 ;
+(BOOL)_isStyleModernShimmer:(int)arg1 ;
+(void)_drawModernGradientInRect:(CGRect)arg1 ;
+(id)_baseImageForStyle:(int)arg1 ;
+(id)_fillImageForStyle:(int)arg1 ;
+(id)_nonstopImageForStyle:(int)arg1 ;
-(CGRect)_baseFrameForSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_fillFrameForSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_centerImageViewFrame:(CGRect)arg1 inBounds:(CGRect)arg2 forStyle:(int)arg3 ;
-(void)updateFromObserver:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setInternalHidden:(BOOL)arg1 ;
-(BOOL)canCancel;
-(void)setCanCancel:(BOOL)arg1 ;
-(void)updateFromObserver:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(float)arg1 ;
-(int)style;
-(float)value;
-(id)initWithStyle:(int)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void).cxx_destruct;
@end
