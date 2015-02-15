/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMStyleSheet, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement

@property (assign) char disabled; 
@property (copy) NSString * charset; 
@property (copy) NSString * href; 
@property (copy) NSString * hreflang; 
@property (copy) NSString * media; 
@property (copy) NSString * rel; 
@property (copy) NSString * rev; 
@property (copy) NSString * target; 
@property (copy) NSString * type; 
@property (readonly) DOMStyleSheet * sheet; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
-(void)setDisabled:(char)arg1 ;
-(NSString *)href;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)hreflang;
-(void)setHreflang:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(NSString *)rev;
-(void)setRev:(NSString *)arg1 ;
-(NSURL *)absoluteLinkURL;
-(char)disabled;
-(void)setMedia:(NSString *)arg1 ;
-(DOMStyleSheet *)sheet;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)media;
@end

