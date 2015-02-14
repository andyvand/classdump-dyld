/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue, NSColor;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue * red; 
@property (readonly) DOMCSSPrimitiveValue * green; 
@property (readonly) DOMCSSPrimitiveValue * blue; 
@property (readonly) DOMCSSPrimitiveValue * alpha; 
@property (copy,readonly) NSColor * color; 
-(void)finalize;
-(void)dealloc;
-(NSColor *)color;
-(DOMCSSPrimitiveValue *)alpha;
-(id)_color;
-(DOMCSSPrimitiveValue *)red;
-(DOMCSSPrimitiveValue *)green;
-(DOMCSSPrimitiveValue *)blue;
@end

