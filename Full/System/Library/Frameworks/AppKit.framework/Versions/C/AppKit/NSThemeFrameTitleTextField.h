/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSAttributedString;

@interface NSThemeFrameTitleTextField : NSView {

	NSAttributedString* _text;
	char _invalidateOnFrameOriginChange;

}

@property (copy) NSAttributedString * attributedStringValue; 
@property (assign) char invalidateOnFrameOriginChange;                    //@synthesize invalidateOnFrameOriginChange=_invalidateOnFrameOriginChange - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(char)isFlipped;
-(void)setTextColor:(id)arg1 ;
-(char)canSmoothFontsInLayer;
-(char)allowsVibrancy;
-(void)_windowChangedKeyState;
-(void)setAttributedStringValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedStringValue;
-(char)invalidateOnFrameOriginChange;
-(void)setInvalidateOnFrameOriginChange:(char)arg1 ;
@end

