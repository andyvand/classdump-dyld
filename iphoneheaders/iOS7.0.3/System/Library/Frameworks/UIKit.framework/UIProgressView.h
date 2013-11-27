/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <CoreFoundation/NSCoding.h>

@class UIColor, UIImageView, CAGradientLayer, UIImage;

@interface UIProgressView : UIView <NSCoding> {

	int _progressViewStyle;
	float _progress;
	int _barStyle;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;
	UIImageView* _trackView;
	UIImageView* _progressView;
	BOOL _isAnimating;
	BOOL _useArtwork;
	CAGradientLayer* _trackGradientLayer;
	CAGradientLayer* _progressGradientLayer;
	CGRect _previousBounds;
	CGRect _previousProgressBounds;
	UIImage* _trackImage;
	UIImage* _progressImage;

}

@property (assign,nonatomic) int progressViewStyle;                    //@synthesize progressViewStyle=_progressViewStyle - In the implementation block
@property (assign,nonatomic) float progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;              //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                 //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIImage * progressImage;                  //@synthesize progressImage=_progressImage - In the implementation block
@property (nonatomic,retain) UIImage * trackImage;                     //@synthesize trackImage=_trackImage - In the implementation block
+(CGSize)defaultSize;
+(int)_indexForStyle:(int)arg1 barStyle:(int)arg2 ;
+(SCD_Struct_UI48)_standardImagesForStyle:(int)arg1 barStyle:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setProgress:(float)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(void)_updateImages;
-(void)_setProgress:(float)arg1 ;
-(void)setProgressViewStyle:(int)arg1 ;
-(BOOL)_shouldTintTrack;
-(BOOL)_shouldTintProgress;
-(id)trackTintColor;
-(id)progressTintColor;
-(id)_appropriateProgressImage;
-(id)_appropriateTrackImage;
-(void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned)arg4 ;
-(void)setProgressTintColor:(id)arg1 ;
-(id)initWithProgressViewStyle:(int)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(id)_progressColor;
-(void)_setProgressColor:(id)arg1 ;
-(void)setProgressImage:(id)arg1 ;
-(void)setTrackTintColor:(id)arg1 ;
-(void)setTrackImage:(id)arg1 ;
-(int)progressViewStyle;
-(float)progress;
-(id)trackImage;
-(id)progressImage;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end
