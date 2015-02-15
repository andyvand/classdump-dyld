/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSControl.h>
#import <AppKit/NSUserInterfaceValidations.h>
#import <AppKit/NSAccessibilityButton.h>

@class NSString, NSImage;

@interface NSButton : NSControl <NSUserInterfaceValidations, NSAccessibilityButton>

@property (assign,setter=safari_setLeftToRightImagePosition:,nonatomic) unsigned long long safari_leftToRightImagePosition; 
@property (assign) unsigned long long bezelStyle; 
@property (assign) char allowsMixedState; 
@property (assign) char showsBorderOnlyWhileMouseInside; 
@property (copy) NSString * title; 
@property (copy) NSString * alternateTitle; 
@property (retain) NSImage * image; 
@property (retain) NSImage * alternateImage; 
@property (assign) unsigned long long imagePosition; 
@property (assign) long long state; 
@property (getter=isBordered) char bordered; 
@property (getter=isTransparent) char transparent; 
@property (copy) NSString * keyEquivalent; 
@property (assign) unsigned long long keyEquivalentModifierMask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)addAttributes:(id)arg1 ;
-(id)_templateImageFrom:(id)arg1 ofSize:(CGSize)arg2 ;
-(void)setTemplateImageSize:(CGSize)arg1 ;
-(id)menuItemForm;
-(unsigned long long)safari_leftToRightImagePosition;
-(void)safari_setLeftToRightImagePosition:(unsigned long long)arg1 ;
-(void)setABTextColor:(id)arg1 ;
-(void)abReplaceTitleTextWithImage;
-(id)abTextColor;
-(id)detailedDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setButtonType:(unsigned long long)arg1 ;
-(void)setImagePosition:(unsigned long long)arg1 ;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)setBordered:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(long long)state;
-(void)setTitle:(NSString *)arg1 ;
-(char)isBordered;
-(unsigned long long)bezelStyle;
-(void)setBezelStyle:(unsigned long long)arg1 ;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(void)setKeyEquivalentModifierMask:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)startSpeaking:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(NSString *)keyEquivalent;
-(unsigned long long)keyEquivalentModifierMask;
-(void)stopSpeaking:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)accessibilityPerformPress;
-(id)accessibilityLabel;
-(char)isFlipped;
-(char)isTransparent;
-(void)setTransparent:(char)arg1 ;
-(void)setTitleWithMnemonic:(id)arg1 ;
-(NSEdgeInsets)alignmentRectInsets;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)resignFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(id)_focusRingBleedRegion;
-(void)viewDidMoveToWindow;
-(NSImage *)alternateImage;
-(void)setAlternateImage:(NSImage *)arg1 ;
-(NSString *)alternateTitle;
-(void)setAlternateTitle:(NSString *)arg1 ;
-(id)attributedTitle;
-(void)setAttributedTitle:(id)arg1 ;
-(id)attributedAlternateTitle;
-(void)setAttributedAlternateTitle:(id)arg1 ;
-(unsigned long long)imagePosition;
-(unsigned long long)imageScaling;
-(void)getPeriodicDelay:(float*)arg1 interval:(float*)arg2 ;
-(void)setPeriodicDelay:(float)arg1 interval:(float)arg2 ;
-(char)_canBecomeDefaultButton;
-(void)_setWindow:(id)arg1 ;
-(id)_recursiveFindDefaultButtonCell;
-(id)_popupToSubstituteInInit;
-(void)setSound:(id)arg1 ;
-(id)sound;
-(double)periodicDelay;
-(void)setPeriodicDelay:(double)arg1 ;
-(double)periodicInterval;
-(void)setPeriodicInterval:(double)arg1 ;
-(CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
-(void)highlight:(char)arg1 ;
-(char)_keyEquivalentModifierMaskMatchesModifierFlags:(unsigned long long)arg1 ;
-(char)performMnemonic:(id)arg1 ;
-(void)shiftModifySelection:(id)arg1 ;
-(void)altModifySelection:(id)arg1 ;
-(void)_setSound:(id)arg1 ;
-(id)_sound;
-(double)baselineOffsetFromBottom;
-(void)setAllowsMixedState:(char)arg1 ;
-(char)allowsMixedState;
-(void)setNextState;
-(void)setShowsBorderOnlyWhileMouseInside:(char)arg1 ;
-(char)showsBorderOnlyWhileMouseInside;
-(void)_setMouseTrackingForCell:(id)arg1 ;
-(void)_clearMouseTrackingForCell:(id)arg1 ;
-(id)ns_widgetType;
@end

