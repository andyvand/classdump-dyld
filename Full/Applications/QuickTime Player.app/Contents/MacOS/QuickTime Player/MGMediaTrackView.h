/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player/QuickTime Player-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSMutableArray, MGMediaTrackLayer, NSView, MGMediaTrackViewController, NSTrackingArea;

@interface MGMediaTrackView : NSView {

	NSArray* _mediaTrackViewItems;
	NSMutableArray* _addedMediaTrackViewItems;
	NSMutableArray* _removedMediaTrackViewItems;
	MGMediaTrackLayer* _mediaTrackLayer;
	NSView* _spaceAvailableIndicatorView;
	double _relativeScrollPosition;
	unsigned _didCreateLayers : 1;
	unsigned _mediaTrackLayerNeedsUpdate : 1;
	unsigned _playheadLayerNeedsUpdate : 1;
	MGMediaTrackViewController* _viewController;
	NSTrackingArea* _viewBoundsTrackingArea;

}

@property (assign,nonatomic,__weak) MGMediaTrackViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSArray * mediaTrackViewItems; 
@property (nonatomic,readonly) double viewHeight; 
@property (nonatomic,retain) NSTrackingArea * viewBoundsTrackingArea;                         //@synthesize viewBoundsTrackingArea=_viewBoundsTrackingArea - In the implementation block
-(void)setMediaTrackLayerNeedsUpdate;
-(NSArray *)mediaTrackViewItems;
-(void)updateMediaTrackLayerIfNeeded;
-(void)assignMediaTrackLayer;
-(void)layoutMediaTrackLayer;
-(void)updatePlayheadLayerIfNeeded;
-(void)positionPlayheadLayer;
-(void)scrollMediaTrackLayerToRelativePosition:(double)arg1 animated:(char)arg2 ;
-(void)setMediaTrackViewItems:(NSArray *)arg1 ;
-(void)hideMediaTrackViewItems:(id)arg1 animated:(char)arg2 ;
-(void)showMediaTrackViewItems:(id)arg1 animated:(char)arg2 ;
-(void)setPlayheadLayerNeedsUpdate;
-(void)scrollToRelativePosition:(double)arg1 animated:(char)arg2 ;
-(void)bounceMediaTrackViewItems:(id)arg1 ;
-(char)isPlayheadLayerAtLocationInView:(CGPoint)arg1 ;
-(CGRect)playheadLayerFrameInView;
-(SCD_Struct_MG13)timeAtLocationInView:(CGPoint)arg1 ;
-(id)mediaTrackViewItemAtLocationInView:(CGPoint)arg1 ;
-(CGRect)mediaTrackLayerFrameInView;
-(CGRect)mediaTrackViewItemFrameInMediaTrackLayer:(id)arg1 ;
-(CGRect)mediaTrackViewItemFrameInView:(id)arg1 ;
-(NSTrackingArea *)viewBoundsTrackingArea;
-(void)setViewBoundsTrackingArea:(NSTrackingArea *)arg1 ;
-(char)showsSpaceAvailableIndicator;
-(double)mediaTrackViewItemThumbnailsWidth;
-(double)relativeSizeOfMediaTrackViewItemAtIndex:(unsigned long long)arg1 ;
-(double)mediaTrackViewItemLayerHeight;
-(char)showsOutOfRangeIndicator;
-(void)scrollMediaTrackLayer;
-(double)viewHeight;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)viewDidMoveToWindow;
-(void)setViewController:(MGMediaTrackViewController *)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)updateTrackingAreas;
-(void)windowDidChangeBackingProperties:(id)arg1 ;
-(MGMediaTrackViewController *)viewController;
-(void)viewDidEndLiveResize;
-(void)viewWillStartLiveResize;
-(void)layoutSublayersOfLayer:(id)arg1 ;
@end
