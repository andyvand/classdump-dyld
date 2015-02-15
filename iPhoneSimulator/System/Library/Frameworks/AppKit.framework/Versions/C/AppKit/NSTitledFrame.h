/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSFrameView.h>

@class NSDocumentDragButton;

@interface NSTitledFrame : NSFrameView {

	long long resizeFlags;
	NSDocumentDragButton* fileButton;
	CGSize titleCellSize;

}
+(void)initialize;
+(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)minFrameSizeForMinContentSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(double)_titlebarHeight:(unsigned long long)arg1 ;
+(CGSize)minContentSizeForMinFrameSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)_titleCellSizeForTitle:(id)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)sizeOfTitlebarButtons:(unsigned long long)arg1 ;
+(double)_contentToFrameMinXWidth:(unsigned long long)arg1 ;
+(double)_contentToFrameMaxXWidth:(unsigned long long)arg1 ;
+(double)_windowTitlebarTitleMinHeight:(unsigned long long)arg1 ;
+(double)_minXWindowBorderWidth:(unsigned long long)arg1 ;
+(double)_maxXWindowBorderWidth:(unsigned long long)arg1 ;
+(double)_windowBorderThickness:(unsigned long long)arg1 ;
+(double)_minYWindowBorderHeight:(unsigned long long)arg1 ;
+(char)_resizeFromEdge;
+(double)_contentToFrameMinYHeight:(unsigned long long)arg1 ;
+(double)_contentToFrameMaxYHeight:(unsigned long long)arg1 ;
+(double)windowTitlebarLinesSpacingWidth:(unsigned long long)arg1 ;
+(double)windowTitlebarTitleLinesSpacingWidth:(unsigned long long)arg1 ;
+(double)_titleCellHeight:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(char)worksWhenModal;
-(char)isOpaque;
-(id)titleFont;
-(void)tile;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(CGRect)dragRectForFrameRect:(CGRect)arg1 ;
-(CGRect)titlebarRect;
-(void)mouseUp:(id)arg1 ;
-(void)setDocumentEdited:(char)arg1 ;
-(CGRect)contentRect;
-(void)resizeWithEvent:(id)arg1 ;
-(CGSize)minFrameSize;
-(void)tileAndSetWindowShape:(char)arg1 ;
-(CGRect)_maxTitlebarTitleRect;
-(CGSize)miniaturizedSize;
-(CGRect)_titlebarTitleRect;
-(CGRect)_validFrameForResizeFrame:(CGRect)arg1 fromResizeEdge:(unsigned long long)arg2 ;
-(void)_drawTitleStringIn:(CGRect)arg1 withColor:(id)arg2 ;
-(CGPoint)_fileButtonOrigin;
-(id)fileButton;
-(void)_showDrawRect:(CGRect)arg1 ;
-(id)_customTitleCell;
-(CGRect)_maxXminYResizeRect;
-(CGSRegionObjectRef)_regionForOpaqueDescendants:(CGRect)arg1 forMove:(char)arg2 forUnderTitlebar:(char)arg3 ;
-(char)usingUpdateLayer;
-(void)propagateFrameDirtyRects:(CGRect)arg1 ;
-(id)newCloseButton;
-(id)newZoomButton;
-(id)newMiniaturizeButton;
-(id)newFileButton;
-(CGRect)titlebarRectIncludingToolbar;
-(double)_minXTitlebarButtonsWidth;
-(CGSize)_sizeOfTitlebarFileButton;
-(double)_maxXTitlebarButtonsWidth;
-(double)_contentToFrameMinXWidth;
-(double)_contentToFrameMaxXWidth;
-(CGSize)sizeOfTitlebarButtons;
-(double)_windowTitlebarButtonSpacingWidth;
-(double)_contentToFrameMinYHeight;
-(double)_contentToFrameMaxYHeight;
-(double)_titlebarHeight;
-(CGSize)_titleCellSize;
-(double)_minXWindowBorderWidth;
-(double)_maxXWindowBorderWidth;
-(double)_minYWindowBorderHeight;
-(CGPoint)_collapseButtonOrigin;
-(CGPoint)_closeButtonOrigin;
-(CGPoint)_zoomButtonOrigin;
-(double)_windowBorderThickness;
-(void)_titleWillChange;
-(id)titleBarViewsForMouseHitTest;
-(double)_windowTitlebarXResizeBorderThickness;
-(double)_windowTitlebarYResizeBorderThickness;
-(double)_windowResizeBorderThickness;
-(double)_windowTitlebarTitleMinHeight;
-(double)_maxYTitlebarDragHeight;
-(double)_minXTitlebarDragWidth;
-(double)_maxXTitlebarDragWidth;
-(CGRect)_minXBorderRect;
-(CGRect)_maxXBorderRect;
-(CGRect)_maxYBorderRect;
-(CGRect)_minYBorderRect;
-(void)_invalidateTitleCellWidth;
-(void)_titleDidChange;
-(id)titleButtonOfClass:(Class)arg1 ;
-(id)initTitleButton:(id)arg1 ;
-(char)_eventInTitlebar:(id)arg1 ;
-(void)_zoomWindowWithDoubleClick:(id)arg1 ;
-(void)_minimizeWindowWithDoubleClick:(id)arg1 ;
-(char)_lastViewHitWasATitlebarView;
-(char)_handlePossibleDoubleClickForEvent:(id)arg1 ;
-(double)_titleCellHeight;
-(double)windowTitlebarLinesSpacingWidth;
-(double)windowTitlebarTitleLinesSpacingWidth;
-(double)_windowResizeCornerThickness;
-(id)frameHighlightColor;
-(id)frameShadowColor;
-(long long)resizeFlags;
-(double)_minLinesWidthWithSpace;
@end

