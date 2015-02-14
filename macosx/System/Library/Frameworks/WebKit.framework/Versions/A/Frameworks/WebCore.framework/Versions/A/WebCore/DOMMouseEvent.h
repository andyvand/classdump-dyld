/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@class DOMNode;

@interface DOMMouseEvent : DOMUIEvent

@property (readonly) int screenX; 
@property (readonly) int screenY; 
@property (readonly) int clientX; 
@property (readonly) int clientY; 
@property (readonly) char ctrlKey; 
@property (readonly) char shiftKey; 
@property (readonly) char altKey; 
@property (readonly) char metaKey; 
@property (readonly) unsigned short button; 
@property (readonly) id<DOMEventTarget> relatedTarget; 
@property (readonly) int offsetX; 
@property (readonly) int offsetY; 
@property (readonly) int x; 
@property (readonly) int y; 
@property (readonly) DOMNode * fromElement; 
@property (readonly) DOMNode * toElement; 
-(char)ctrlKey;
-(char)shiftKey;
-(char)altKey;
-(char)metaKey;
-(int)screenX;
-(int)screenY;
-(int)clientX;
-(int)clientY;
-(id<DOMEventTarget>)relatedTarget;
-(int)offsetX;
-(int)offsetY;
-(DOMNode *)fromElement;
-(DOMNode *)toElement;
-(void)initMouseEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(char)arg10 altKey:(char)arg11 shiftKey:(char)arg12 metaKey:(char)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15 ;
-(void)initMouseEvent:(id)arg1 :(char)arg2 :(char)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(char)arg10 :(char)arg11 :(char)arg12 :(char)arg13 :(unsigned short)arg14 :(id)arg15 ;
-(unsigned short)button;
-(int)x;
-(int)y;
@end

