/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CAMSlalomIndicatorView : UIView {

	int _framesPerSecond;
	UILabel* __framerateLabel;

}

@property (assign,nonatomic) int framesPerSecond;                      //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
@property (nonatomic,readonly) UILabel * _framerateLabel;              //@synthesize _framerateLabel=__framerateLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFramesPerSecond:(int)arg1 ;
-(void)_commonCAMSlalomIndicatorViewInitialization;
-(void)_updateFramerateLabel;
-(int)framesPerSecond;
-(id)_framerateLabel;
@end
