/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextFieldCell, NSMutableArray;

@interface NSNextStepFrame : NSView {

	NSTextFieldCell* titleCell;
	NSMutableArray* edgeResizingTrackingAreas;
	id nsfReserved;
	unsigned long long styleMask;
	struct {
		unsigned defeatTitleWrap : 1;
		unsigned resizeByIncrement : 1;
		unsigned shadowIsActive : 1;
		unsigned RESERVED : 29;
	}  fvFlags;
	CGSize sizingParams;

}
+(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(unsigned long long)_validateStyleMask:(unsigned long long)arg1 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)minFrameSizeForMinContentSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)minContentSizeForMinFrameSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)updateLayer;
-(void)_setFrameNeedsDisplay:(char)arg1 ;
-(unsigned long long)styleMask;
-(char)worksWhenModal;
-(id)hitTest:(CGPoint)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(CGRect)titleRect;
-(char)isOpaque;
-(id)titleFont;
-(void)tile;
-(void)displayIfNeeded;
-(void)_recursiveDisplayRectIfNeededIgnoringOpacity:(CGRect)arg1 isVisibleRect:(char)arg2 rectIsVisibleRectForView:(id)arg3 topView:(char)arg4 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)opaqueAncestor;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setResizeIncrements:(CGSize)arg1 ;
-(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(void)setStyleMask:(unsigned long long)arg1 ;
-(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(CGSize)minFrameSizeForMinContentSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3 ;
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
-(void)_setUtilityWindow:(char)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)rightMouseUp:(id)arg1 ;
-(void)setRepresentedFilename:(id)arg1 ;
-(void)setDocumentEdited:(char)arg1 ;
-(void)helpRequested:(id)arg1 ;
-(void)shapeWindow;
-(CGSRegionObjectRef)_regionForOpaqueDescendants:(CGRect)arg1 forMove:(char)arg2 ;
-(char)_isHUDWindow;
-(CGSize)_shadowOffset;
-(void)_setShadowParameters;
-(CGRect)_maxTitlebarTitleRect;
-(char)usesCustomDrawing;
-(void)_drawFrameShadowAndFlushContext:(id)arg1 ;
-(void)setTitle:(id)arg1 andDefeatWrap:(char)arg2 ;
-(id)_edgeResizingTrackingAreas;
-(void)viewDidEndLiveResize;
-(void)_updateButtons;
-(void)_setTitleNeedsDisplay;
-(char)needsFill;
-(char)_drawOptimizedRectFills;
-(void)_calcTextRect:(CGRect*)arg1 ;
-(id)_resize:(id)arg1 ;
-(void)_renamingDidEndNormally:(char)arg1 ;
-(CGRect)_titlebarTitleRect;
-(CGRect)_validFrameForResizeFrame:(CGRect)arg1 fromResizeEdge:(unsigned long long)arg2 ;
-(id)doIconify:(id)arg1 ;
-(id)contentLayoutGuide;
-(id)doClose:(id)arg1 ;
-(id)setCloseTarget:(id)arg1 ;
-(id)setCloseAction:(SEL)arg1 ;
-(char)_optimizedRectFill:(const CGRect*)arg1 gray:(double)arg2 ;
-(void)_drawTitleStringIn:(CGRect)arg1 withColor:(double)arg2 ;
-(void)_setCloseEnabled:(char)arg1 ;
-(void)_clearPressedButtons;
-(void)_willStartRenameWithTitle:(id)arg1 editingRange:(NSRange)arg2 ;
-(void)_didEnd:(char)arg1 renameWithTitle:(id)arg2 editingRange:(NSRange)arg3 grantHandler:(/*^block*/id)arg4 ;
-(CGPoint)_fileButtonOrigin;
-(CGPoint)_autosaveButtonSeparatorFieldOrigin;
-(CGPoint)_autosaveButtonOrigin;
-(id)fileButton;
-(id)autosaveButton;
-(id)_autosaveButtonSeparatorField;
@end

