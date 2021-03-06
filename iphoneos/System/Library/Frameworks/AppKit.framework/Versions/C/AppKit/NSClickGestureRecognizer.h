/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSGestureRecognizer.h>
#import <AppKit/NSCoding.h>

@interface NSClickGestureRecognizer : NSGestureRecognizer <NSCoding> {

	long long _flags;
	CGPoint _location;
	unsigned long long _buttonMask;
	long long _numberOfClicksRequired;
	long long _currentButtonCount;
	long long _activeButtonCount;
	long long _currentClickCount;
	id _reserved0;

}

@property (assign) double allowableMovement; 
@property (assign) unsigned long long buttonMask; 
@property (assign) long long numberOfClicksRequired;              //@synthesize numberOfClicksRequired=_numberOfClicksRequired - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)reset;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(unsigned long long)buttonMask;
-(void)setButtonMask:(unsigned long long)arg1 ;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1 ;
-(char)_hasCustomAllowableMovement;
-(void)_setHasCustomAllowableMovement:(char)arg1 ;
-(long long)numberOfClicksRequired;
-(void)clearClickTimer;
-(void)tooSlow:(id)arg1 ;
-(void)_failRecognition;
-(void)startClickTimer:(double)arg1 ;
-(void)_beginInteraction;
-(void)setNumberOfClicksRequired:(long long)arg1 ;
@end

