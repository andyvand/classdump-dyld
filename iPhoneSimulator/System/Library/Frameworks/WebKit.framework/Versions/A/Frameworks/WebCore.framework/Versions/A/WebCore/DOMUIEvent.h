/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView * view; 
@property (readonly) int detail; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
@property (readonly) int layerX; 
@property (readonly) int layerY; 
@property (readonly) int pageX; 
@property (readonly) int pageY; 
@property (readonly) int which; 
-(int)charCode;
-(int)detail;
-(int)layerX;
-(int)layerY;
-(int)pageX;
-(int)pageY;
-(int)which;
-(void)initUIEvent:(id)arg1 canBubble:(char)arg2 cancelable:(char)arg3 view:(id)arg4 detail:(int)arg5 ;
-(void)initUIEvent:(id)arg1 :(char)arg2 :(char)arg3 :(id)arg4 :(int)arg5 ;
-(DOMAbstractView *)view;
-(int)keyCode;
@end

