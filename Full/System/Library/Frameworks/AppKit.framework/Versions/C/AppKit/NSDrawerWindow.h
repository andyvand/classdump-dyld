/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindow.h>

@class NSDrawer, NSWindow;

@interface NSDrawerWindow : NSWindow {

	NSDrawer* _drawer;
	NSWindow* _drawerParentWindow;

}
+(Class)frameViewClassForStyleMask:(unsigned long long)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityParentAttribute;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(char)accessibilityIsPositionAttributeSettable;
-(char)accessibilityIsSizeAttributeSettable;
-(void)orderOut:(id)arg1 ;
-(char)makeFirstResponder:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)_hasActiveControls;
-(void)makeKeyWindow;
-(id)_parentWindow;
-(char)worksWhenModal;
-(char)canBecomeMainWindow;
-(void)makeMainWindow;
-(char)isKeyWindow;
-(char)isMainWindow;
-(void)becomeKeyWindow;
-(void)performClose:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)resignKeyWindow;
-(void)resignMainWindow;
-(char)hasKeyAppearance;
-(id)_newFirstResponderAfterResigning;
-(id)_oldFirstResponderBeforeBecoming;
-(CGSize)maxSize;
-(void)_adjustWindowToScreen;
-(void)_selectFirstKeyView;
-(char)isExcludedFromWindowsMenu;
-(void)becomeMainWindow;
-(char)canBecomeKeyWindow;
-(char)isMovableByWindowBackground;
-(CGSize)minSize;
-(id)fieldEditor:(char)arg1 forObject:(id)arg2 ;
-(void)_setForceActiveControls:(char)arg1 ;
-(char)hasShadow;
-(CGSize)_potentialMinSize;
-(CGSize)_potentialMaxSize;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 drawer:(id)arg5 ;
-(double)_drawerDefaultTopLeadingOffset;
-(double)_drawerDefaultBottomTrailingOffset;
-(double)_drawerDefaultLeftLeadingOffset;
-(double)_drawerDefaultRightTrailingOffset;
-(void)_changeDrawerKeyState;
-(void)_changeDrawerMainState;
-(void)_changeDrawerFirstResponder;
-(void)_drawerTakeFocus;
-(double)_drawerDepthOffset;
-(double)_drawerTopOffset;
-(double)_drawerBottomOffset;
-(double)_drawerLeftOffset;
-(double)_drawerRightOffset;
-(double)_drawerCloseThreshold;
-(double)_drawerHorizontalOpenOffset;
-(double)_drawerVerticalOpenOffset;
-(void)_resetDrawerFirstResponder;
-(double)_drawerDepthInset;
-(void)_setParentWindow:(id)arg1 ;
-(void)_changeTexture;
-(void)_changeKeyAndMainLimitedOK:(char)arg1 ;
-(id)_getUndoManager:(char)arg1 ;
-(void)showToolbar:(id)arg1 ;
-(void)hideToolbar:(id)arg1 ;
-(void)toggleToolbarShown:(id)arg1 ;
-(void)runToolbarCustomizationPalette:(id)arg1 ;
-(void)performZoom:(id)arg1 ;
-(void)performMiniaturize:(id)arg1 ;
-(void)_setDrawerVisibleWithoutLogin;
-(id)_generateScaledBackground;
-(id)_compositedBackground;
-(char)_useMetalPattern;
-(void)_resetFirstResponder;
-(void)resizeWithDelta:(CGPoint)arg1 fromFrame:(CGRect)arg2 beginOperation:(char)arg3 endOperation:(char)arg4 ;
-(char)_isVertical;
-(void)_cycleDrawersReversed:(char)arg1 ;
-(char)_usesCustomDrawing;
-(void)accessibilitySetSizeAttribute:(id)arg1 ;
@end

