/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMMouseEvent.h>

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX; 
@property (readonly) int wheelDeltaY; 
@property (readonly) int wheelDelta; 
@property (readonly) char isHorizontal; 
-(unsigned long long)_phase;
-(unsigned long long)_momentumPhase;
-(unsigned)deltaMode;
-(int)wheelDeltaX;
-(int)wheelDeltaY;
-(int)wheelDelta;
-(char)webkitDirectionInvertedFromDevice;
-(void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(char)arg8 altKey:(char)arg9 shiftKey:(char)arg10 metaKey:(char)arg11 ;
-(double)deltaY;
-(double)deltaX;
-(double)deltaZ;
-(char)isHorizontal;
@end

