/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMStyleSheet.h>

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRule * ownerRule; 
@property (readonly) DOMCSSRuleList * cssRules; 
@property (readonly) DOMCSSRuleList * rules; 
-(DOMCSSRuleList *)cssRules;
-(unsigned)insertRule:(id)arg1 index:(unsigned)arg2 ;
-(unsigned)insertRule:(id)arg1 :(unsigned)arg2 ;
-(void)deleteRule:(unsigned)arg1 ;
-(DOMCSSRule *)ownerRule;
-(DOMCSSRuleList *)rules;
-(int)addRule:(id)arg1 style:(id)arg2 index:(unsigned)arg3 ;
-(void)removeRule:(unsigned)arg1 ;
@end

