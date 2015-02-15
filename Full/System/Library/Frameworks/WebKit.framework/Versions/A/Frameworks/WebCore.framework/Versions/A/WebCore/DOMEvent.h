/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMEvent : DOMObject

@property (copy,readonly) NSString * type; 
@property (readonly) id<DOMEventTarget> target; 
@property (readonly) id<DOMEventTarget> currentTarget; 
@property (readonly) unsigned short eventPhase; 
@property (readonly) char bubbles; 
@property (readonly) char cancelable; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) id<DOMEventTarget> srcElement; 
@property (assign) char returnValue; 
@property (assign) char cancelBubble; 
-(id<DOMEventTarget>)currentTarget;
-(unsigned short)eventPhase;
-(char)bubbles;
-(char)cancelable;
-(unsigned long long)timeStamp;
-(char)defaultPrevented;
-(id<DOMEventTarget>)srcElement;
-(char)returnValue;
-(void)setReturnValue:(char)arg1 ;
-(char)cancelBubble;
-(void)setCancelBubble:(char)arg1 ;
-(void)stopPropagation;
-(void)preventDefault;
-(void)initEvent:(id)arg1 canBubbleArg:(char)arg2 cancelableArg:(char)arg3 ;
-(void)initEvent:(id)arg1 :(char)arg2 :(char)arg3 ;
-(void)stopImmediatePropagation;
-(void)finalize;
-(void)dealloc;
-(id<DOMEventTarget>)target;
-(NSString *)type;
@end

