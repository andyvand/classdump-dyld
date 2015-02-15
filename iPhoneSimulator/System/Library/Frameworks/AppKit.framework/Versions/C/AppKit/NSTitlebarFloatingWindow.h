/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindow.h>

@class NSWindow;

@interface NSTitlebarFloatingWindow : NSWindow {

	NSWindow* _originalWindow;
	void* _evtHandler;

}

@property (retain) NSWindow * originalWindow;              //@synthesize originalWindow=_originalWindow - In the implementation block
+(Class)frameViewClassForStyleMask:(unsigned long long)arg1 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(void)finalize;
-(void)dealloc;
-(char)canBecomeMainWindow;
-(id)representedURL;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)isExcludedFromWindowsMenu;
-(char)canBecomeKeyWindow;
-(char)_hasActiveAppearanceIgnoringKeyFocus;
-(char)_usesCustomDrawing;
-(id)representedFilename;
-(NSWindow *)originalWindow;
-(void)_titlebarEditingDidEndNormally:(char)arg1 title:(id)arg2 editingRange:(NSRange)arg3 grantHandler:(/*^block*/id)arg4 ;
-(void)_renamingDidEndNormally:(char)arg1 ;
-(void)_setWindowTag;
-(char)_ignoreForFullScreenTransition;
-(void)setOriginalWindow:(NSWindow *)arg1 ;
-(char)_keyViewLoopsMayCrossWindows;
-(char)_titleMightBeEditable;
-(unsigned long long)_editingModeForTitle:(id)arg1 editingRange:(NSRange*)arg2 selectedRange:(NSRange*)arg3 ;
-(char)_titlebarRenamingShouldBeInWindow;
-(void)_setMenuBarRevealedValue:(double)arg1 ;
@end

