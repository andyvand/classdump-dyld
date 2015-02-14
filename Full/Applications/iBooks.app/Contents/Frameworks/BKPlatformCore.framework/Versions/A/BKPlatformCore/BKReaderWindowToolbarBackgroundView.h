/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <IMPlatformCore/IMWindowToolbarBackgroundView.h>

@class IMWindowButtons, IMSpacerView, BKAssetTitleView, NSLayoutConstraint;

@interface BKReaderWindowToolbarBackgroundView : IMWindowToolbarBackgroundView {

	double _leftAnimationDelta;
	double _rightAnimationDelta;
	IMWindowButtons* _windowButtons;
	IMSpacerView* _leftToolbarItems;
	BKAssetTitleView* _titleView;
	BKAssetTitleView* _titleViewFaded;
	IMSpacerView* _rightToolbarItems;
	NSLayoutConstraint* _rightToolbarItemLeftEdgeConstraint;

}

@property (retain) IMWindowButtons * windowButtons;                                      //@synthesize windowButtons=_windowButtons - In the implementation block
@property (retain) IMSpacerView * leftToolbarItems;                                      //@synthesize leftToolbarItems=_leftToolbarItems - In the implementation block
@property (retain) BKAssetTitleView * titleView;                                         //@synthesize titleView=_titleView - In the implementation block
@property (retain) BKAssetTitleView * titleViewFaded;                                    //@synthesize titleViewFaded=_titleViewFaded - In the implementation block
@property (retain) IMSpacerView * rightToolbarItems;                                     //@synthesize rightToolbarItems=_rightToolbarItems - In the implementation block
@property (retain) NSLayoutConstraint * rightToolbarItemLeftEdgeConstraint;              //@synthesize rightToolbarItemLeftEdgeConstraint=_rightToolbarItemLeftEdgeConstraint - In the implementation block
-(void)prepareToFade:(char)arg1 ;
-(void)mouseEnteredTrackingWindow:(id)arg1 ;
-(void)mouseExitedTrackingWindow:(id)arg1 ;
-(void)synthesizeMouseEnteredTrackingWindow:(id)arg1 ;
-(void)synthesizeMouseExitedTrackingWindow:(id)arg1 ;
-(IMSpacerView *)leftToolbarItems;
-(IMSpacerView *)rightToolbarItems;
-(BKAssetTitleView *)titleViewFaded;
-(IMWindowButtons *)windowButtons;
-(void)refreshToolbar;
-(void)setWindowButtons:(IMWindowButtons *)arg1 ;
-(void)setLeftToolbarItems:(IMSpacerView *)arg1 ;
-(void)setTitleViewFaded:(BKAssetTitleView *)arg1 ;
-(void)setRightToolbarItems:(IMSpacerView *)arg1 ;
-(NSLayoutConstraint *)rightToolbarItemLeftEdgeConstraint;
-(void)setRightToolbarItemLeftEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(BKAssetTitleView *)titleView;
-(void)setTitleView:(BKAssetTitleView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

