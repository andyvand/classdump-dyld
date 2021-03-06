/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSCell, NSButton, NSMutableArray;

@interface NSFrameView : NSView {

	unsigned long long styleMask;
	NSString* _title;
	NSCell* titleCell;
	NSButton* closeButton;
	NSButton* zoomButton;
	NSButton* minimizeButton;
	char resizeByIncrement;
	char needsWindowChangedKeyState;
	unsigned char tabViewCount;
	CGSize resizeParameter;
	int shadowState;
	NSMutableArray* edgeResizingTrackingAreas;

}
+(void)initialize;
+(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(unsigned long long)_validateStyleMask:(unsigned long long)arg1 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)minFrameSizeForMinContentSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)minContentSizeForMinFrameSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2 ;
+(id)_defaultTitleFontForWindowWithStyleMask:(unsigned long long)arg1 ;
+(void)initTitleCell:(id)arg1 styleMask:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)_setFrameNeedsDisplay:(char)arg1 ;
-(unsigned long long)styleMask;
-(id)titleFont;
-(id)titleCell;
-(void)tile;
-(void)_windowChangedKeyState;
-(void)setResizeIncrements:(CGSize)arg1 ;
-(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(void)setShadowState:(long long)arg1 ;
-(void)setStyleMask:(unsigned long long)arg1 ;
-(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(CGSize)minFrameSizeForMinContentSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3 ;
-(void)_updateButtonState;
-(char)_canHaveToolbar;
-(char)_toolbarIsInTransition;
-(char)_toolbarIsShown;
-(char)_toolbarIsHidden;
-(char)_toolbarIsManagedByExternalWindow;
-(void)_showToolbarWithAnimation:(char)arg1 ;
-(void)_hideToolbarWithAnimation:(char)arg1 ;
-(double)_distanceFromToolbarBaseToTitlebar;
-(id)closeButton;
-(id)minimizeButton;
-(id)zoomButton;
-(CGRect)dragRectForFrameRect:(CGRect)arg1 ;
-(CGRect)titlebarRect;
-(void)_clearDragMargins;
-(void)_resetDragMargins;
-(void)_setNonactivatingPanel:(char)arg1 ;
-(id)contentFill;
-(double)contentAlpha;
-(CGSize)resizeIncrements;
-(void)setAspectRatio:(CGSize)arg1 ;
-(CGSize)aspectRatio;
-(void)setUpGState;
-(void)setIsClosable:(char)arg1 ;
-(void)_setUtilityWindow:(char)arg1 ;
-(void)setIsResizable:(char)arg1 ;
-(void)updateTrackingAreas;
-(void)setRepresentedFilename:(id)arg1 ;
-(void)setDocumentEdited:(char)arg1 ;
-(void)drawThemeContentFill:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)contentRect;
-(void)shapeWindow;
-(long long)_shadowType;
-(CGSize)minFrameSize;
-(void)drawFrame:(CGRect)arg1 ;
-(void)_drawFrameRects:(CGRect)arg1 ;
-(void)adjustHalftonePhase;
-(void)systemColorsDidChange:(id)arg1 ;
-(void)tileAndSetWindowShape:(char)arg1 ;
-(void)drawWindowBackgroundRegion:(CGSRegionObjectRef)arg1 ;
-(void)drawWindowBackgroundRect:(CGRect)arg1 ;
-(void)_setNeedsWindowChangedKeyState:(char)arg1 ;
-(char)_isHUDWindow;
-(char)_isUtility;
-(char)_isSheet;
-(long long)shadowState;
-(CGSize)_shadowOffset;
-(void)_setShadowParameters;
-(void)initTitleCell:(id)arg1 ;
-(id)representedFilename;
-(id)defaultTitleFont;
-(CGRect)_maxTitlebarTitleRect;
-(CGRect)_draggableFrame;
-(char)usesCustomDrawing;
-(char)_needsWindowChangedKeyState;
-(unsigned long long)_shadowFlags;
-(void)_drawFrameShadowAndFlushContext:(id)arg1 ;
-(id)frameColor;
-(void)tabViewAdded;
-(void)tabViewRemoved;
-(void)titleBarHiddenChanged;
-(char)frameNeedsDisplay;
-(CGSize)miniaturizedSize;
-(void)setTitle:(id)arg1 andDefeatWrap:(char)arg2 ;
-(id)_edgeResizingTrackingAreas;
-(CFStringRef)customizedBackgroundTypeForTitleCell:(id)arg1 ;
-(char)shouldUseStyledTextInTitleCell:(id)arg1 ;
@end

