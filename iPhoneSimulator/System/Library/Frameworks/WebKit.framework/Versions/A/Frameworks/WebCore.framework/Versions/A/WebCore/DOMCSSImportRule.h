/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMCSSRule.h>

@class NSString, DOMMediaList, DOMCSSStyleSheet;

@interface DOMCSSImportRule : DOMCSSRule

@property (copy,readonly) NSString * href; 
@property (readonly) DOMMediaList * media; 
@property (readonly) DOMCSSStyleSheet * styleSheet; 
-(NSString *)href;
-(DOMCSSStyleSheet *)styleSheet;
-(DOMMediaList *)media;
@end

