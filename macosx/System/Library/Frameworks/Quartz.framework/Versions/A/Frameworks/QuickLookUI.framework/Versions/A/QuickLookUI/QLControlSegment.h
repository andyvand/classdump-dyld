/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLControl.h>

@class NSString, NSImage, NSControl, QLControlCommon, QLControlSegmentedControl;

@interface QLControlSegment : NSObject <QLControl> {

	int _style;
	int _segmentedStyle;
	char _alternate;
	char _sendActionOnMouseDown;
	char _shown;
	double _tooltipMargin;
	NSImage* _originalImage;
	NSString* _keyEquivalent;
	CGRect _frame;
	QLControlCommon* _common;
	QLControlSegmentedControl* _segmentedControl;
	unsigned long long _segmentIndex;
	SEL _action;
	id _target;

}

@property (retain) QLControlSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign) unsigned long long segmentIndex;                           //@synthesize segmentIndex=_segmentIndex - In the implementation block
@property (copy) id menuProvider; 
@property (readonly) NSControl * control; 
@property (retain) NSImage * image; 
@property (copy) NSString * title; 
@property (copy) NSString * keyEquivalent;                                    //@synthesize keyEquivalent=_keyEquivalent - In the implementation block
@property (assign) CGRect frame;                                              //@synthesize frame=_frame - In the implementation block
@property (assign) QLControlCommon * common;                                  //@synthesize common=_common - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * controlIdentifier; 
@property (assign) int style;                                                 //@synthesize style=_style - In the implementation block
@property (assign) int segmentedStyle;                                        //@synthesize segmentedStyle=_segmentedStyle - In the implementation block
@property (assign) char alternate;                                            //@synthesize alternate=_alternate - In the implementation block
@property (assign) char sendActionOnMouseDown;                                //@synthesize sendActionOnMouseDown=_sendActionOnMouseDown - In the implementation block
@property (assign) double tooltipMargin;                                      //@synthesize tooltipMargin=_tooltipMargin - In the implementation block
@property (getter=isEnabled) char enabled; 
@property (getter=isShown) char shown;                                        //@synthesize shown=_shown - In the implementation block
@property (readonly) NSImage * originalImage; 
@property (copy) NSString * toolTip; 
@property (getter=isHidden) char hidden; 
@property (assign) SEL action;                                                //@synthesize action=_action - In the implementation block
@property (__weak) id target;                                                 //@synthesize target=_target - In the implementation block
@property (assign) double buttonWidth; 
-(void)_updateStyle;
-(NSControl *)control;
-(char)alternate;
-(id)initWithFrame:(CGRect)arg1 andSegmentedControl:(id)arg2 ;
-(void)setSegmentIndex:(unsigned long long)arg1 ;
-(QLControlCommon *)common;
-(unsigned long long)segmentIndex;
-(void)setMenuProvider:(id)arg1 ;
-(id)menuProvider;
-(void)setControlIdentifier:(NSString *)arg1 ;
-(NSString *)controlIdentifier;
-(int)segmentedStyle;
-(void)setSegmentedStyle:(int)arg1 ;
-(char)sendActionOnMouseDown;
-(void)setSendActionOnMouseDown:(char)arg1 ;
-(double)tooltipMargin;
-(void)setTooltipMargin:(double)arg1 ;
-(double)buttonWidth;
-(void)setButtonWidth:(double)arg1 ;
-(void)_controlPressed;
-(void)_updateTooltip;
-(void)setCommon:(QLControlCommon *)arg1 ;
-(NSImage *)originalImage;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(int)style;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)target;
-(SEL)action;
-(void)setTitle:(NSString *)arg1 ;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)keyEquivalent;
-(void)setAlternate:(char)arg1 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 ;
-(NSString *)toolTip;
-(void)setToolTip:(NSString *)arg1 ;
-(char)isShown;
-(void)setStyle:(int)arg1 ;
-(void)setShown:(char)arg1 ;
-(QLControlSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(QLControlSegmentedControl *)arg1 ;
@end

