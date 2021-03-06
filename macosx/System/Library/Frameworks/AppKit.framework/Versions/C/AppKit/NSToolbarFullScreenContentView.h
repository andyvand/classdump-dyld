/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSToolbarFullScreenWindowManager, CALayer;

@interface NSToolbarFullScreenContentView : NSView {

	double _revealProgress;
	double _auxMinHeight;
	double _toolbarViewHeight;
	double shadowWeight;
	double auxSnapshotAlpha;
	NSToolbarFullScreenWindowManager* manager;
	CALayer* shadowLayer;
	CALayer* textureGradientLayer;
	CALayer* northeastCorner;
	CALayer* northwestCorner;
	double _cornerRoundness;

}

@property (assign,nonatomic) double revealProgress;                           //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) double toolbarViewHeight;                        //@synthesize toolbarViewHeight=_toolbarViewHeight - In the implementation block
@property (assign,nonatomic) double shadowWeight; 
@property (readonly) NSToolbarFullScreenWindowManager * manager; 
@property (assign,nonatomic) double cornerRoundness; 
-(void)dealloc;
-(void)updateLayer;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(char)isOpaque;
-(NSToolbarFullScreenWindowManager *)manager;
-(void)displayLayer:(id)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(void)refreshLayerFrames;
-(void)refreshLayerContents;
-(NSToolbarFullScreenContentViewLayout_t)getToolbarLayout;
-(void)_createCornerLayers;
-(id)getShadowImage;
-(void)createLayers;
-(void)destroyToolbarLayers;
-(id)initWithFrame:(CGRect)arg1 manager:(id)arg2 ;
-(void)clearManager;
-(double)cornerRoundness;
-(void)setCornerRoundness:(double)arg1 ;
-(void)setToolbarViewHeight:(double)arg1 ;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(double)toolbarViewHeight;
-(double)shadowWeight;
-(void)setShadowWeight:(double)arg1 ;
@end

