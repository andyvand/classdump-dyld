/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextView.h>
#import <AppKit/NSLayoutManagerDelegate.h>

@class NSString;

@interface NSSecureTextView : NSTextView <NSLayoutManagerDelegate> {

	long long _outerTag;
	long long _innerTag;
	struct {
		unsigned _secureInput : 1;
		unsigned _capsLockDown : 1;
		unsigned _numLockDown : 1;
		unsigned _invalidated : 1;
		unsigned _reserved : 28;
	}  _sdvFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_doMenu:(id)arg1 ;
+(id)secureTextViewForWindow:(id)arg1 ;
+(char)_allowKillRing;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)startSpeaking:(id)arg1 ;
-(void)accessibilityPostNotification:(id)arg1 ;
-(id)inputContext;
-(void)becomeKeyWindow;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)showGuessPanel:(id)arg1 ;
-(void)resignKeyWindow;
-(void)setSelectable:(char)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(id)menuForEvent:(id)arg1 ;
-(id)accessibilityValueAttribute;
-(void)copy:(id)arg1 ;
-(void)didChangeText;
-(void)setImportsGraphics:(char)arg1 ;
-(void)setRichText:(char)arg1 ;
-(id)accessibilityAXAttributedStringForCharacterRange:(NSRange)arg1 parent:(id)arg2 ;
-(id)accessibilityRTFForRangeAttributeForParameter:(id)arg1 ;
-(void)complete:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)flagsChanged:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)quickLookWithEvent:(id)arg1 ;
-(char)shouldChangeTextInRanges:(id)arg1 replacementStrings:(id)arg2 ;
-(void)enableSecureInput:(char)arg1 ;
-(void)_resetTooltips;
-(void)checkSpelling:(id)arg1 ;
-(void)orderFrontSubstitutionsPanel:(id)arg1 ;
-(void)_updateIndicators;
-(void)_drawInsertionPointInRect:(CGRect)arg1 color:(id)arg2 ;
-(void)layoutManagerDidInvalidateLayout:(id)arg1 ;
-(void)_detachFieldEditorFromWindow:(id)arg1 ;
-(id)writablePasteboardTypes;
-(char)writeSelectionToPasteboard:(id)arg1 type:(id)arg2 ;
-(id)itemsForSharingServiceInRanges:(id)arg1 ;
-(char)_continuousCheckingAllowed;
-(char)_allowsMultipleTextSelectionByMouse;
-(unsigned long long)enabledTextCheckingTypes;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)getCapsLockRect:(CGRect*)arg1 numLockRect:(CGRect*)arg2 ;
-(id)_accessibilityIndicatorImageChildrenWithParent:(id)arg1 ;
-(id)_accessibilityIndicatorImageUnderPoint:(CGPoint)arg1 forParent:(id)arg2 ;
-(void)_accessibilityPostValueChangeNotificationAfterDelay;
@end

