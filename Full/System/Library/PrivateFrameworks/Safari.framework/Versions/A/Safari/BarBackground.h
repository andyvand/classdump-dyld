/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSVisualEffectView, NSColor, NSImage;

@interface BarBackground : NSView {

	char _becomingFirstResponder;
	NSView* _mainContentContainerView;
	NSView* _bottomBorderView;
	NSView* _backdropDarkeningView;
	NSVisualEffectView* _backdropView;
	char _mouseDownCanMoveWindow;
	char _hasTopBorder;
	char _hasBottomBorder;
	char _usesScopeBarAppearance;
	char _usesModernToolbarAppearance;
	NSColor* _bottomBorderColor;
	NSView* _contentView;
	NSColor* _backgroundColor;
	NSImage* _backgroundImage;
	NSView* _firstChildKeyView;
	NSView* _lastChildKeyView;
	NSView* _externalNextKeyView;

}

@property (nonatomic,retain,readonly) NSColor * firstTopBorderLineColor; 
@property (nonatomic,retain,readonly) NSColor * secondTopBorderLineColor; 
@property (nonatomic,retain,readonly) NSColor * defaultBottomBorderLineColor; 
@property (nonatomic,readonly) double topBorderHeight; 
@property (assign,nonatomic) char hasTopBorder;                                            //@synthesize hasTopBorder=_hasTopBorder - In the implementation block
@property (assign,nonatomic) char hasBottomBorder;                                         //@synthesize hasBottomBorder=_hasBottomBorder - In the implementation block
@property (nonatomic,retain) NSColor * bottomBorderColor;                                  //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign) char mouseDownCanMoveWindow;                                            //@synthesize mouseDownCanMoveWindow=_mouseDownCanMoveWindow - In the implementation block
@property (assign,nonatomic) char usesScopeBarAppearance;                                  //@synthesize usesScopeBarAppearance=_usesScopeBarAppearance - In the implementation block
@property (assign,nonatomic) char usesModernToolbarAppearance;                             //@synthesize usesModernToolbarAppearance=_usesModernToolbarAppearance - In the implementation block
@property (nonatomic,retain) NSView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSImage * backgroundImage;                                    //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) NSView * firstChildKeyView;                                   //@synthesize firstChildKeyView=_firstChildKeyView - In the implementation block
@property (nonatomic,retain) NSView * lastChildKeyView;                                    //@synthesize lastChildKeyView=_lastChildKeyView - In the implementation block
@property (nonatomic,retain) NSView * externalNextKeyView;                                 //@synthesize externalNextKeyView=_externalNextKeyView - In the implementation block
-(void)setBottomBorderColor:(NSColor *)arg1 ;
-(void)setHasBottomBorder:(char)arg1 ;
-(void)setMouseDownCanMoveWindow:(char)arg1 ;
-(void)setFirstChildKeyView:(NSView *)arg1 ;
-(void)setLastChildKeyView:(NSView *)arg1 ;
-(void)commonInit;
-(void)_drawBackgroundInRect:(CGRect)arg1 ;
-(NSColor *)firstTopBorderLineColor;
-(NSColor *)secondTopBorderLineColor;
-(NSColor *)defaultBottomBorderLineColor;
-(void)_addBackdropViewForModernToolbarAppearance;
-(void)_addBottomBorderViewForModernToolbarAppearance;
-(void)_addBackdropDarkeningViewForModernToolbarAppearance;
-(double)topBorderHeight;
-(void)setHasTopBorder:(char)arg1 ;
-(void)setUsesScopeBarAppearance:(char)arg1 ;
-(void)setUsesModernToolbarAppearance:(char)arg1 ;
-(void)setDefaultKeyLoop;
-(void)willExpand;
-(void)didExpand;
-(void)willCollapse;
-(void)didCollapse;
-(char)hasTopBorder;
-(char)hasBottomBorder;
-(NSColor *)bottomBorderColor;
-(char)usesScopeBarAppearance;
-(char)usesModernToolbarAppearance;
-(NSView *)firstChildKeyView;
-(NSView *)lastChildKeyView;
-(NSView *)externalNextKeyView;
-(void)setExternalNextKeyView:(NSView *)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(NSView *)contentView;
-(void)setNextKeyView:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setContentView:(NSView *)arg1 ;
-(char)isOpaque;
-(NSColor *)backgroundColor;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(char)becomeFirstResponder;
-(char)mouseDownCanMoveWindow;
-(NSImage *)backgroundImage;
-(void)setBackgroundImage:(NSImage *)arg1 ;
@end

