/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMDocument.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument

@property (readonly) DOMHTMLCollection * embeds; 
@property (readonly) DOMHTMLCollection * plugins; 
@property (readonly) DOMHTMLCollection * scripts; 
@property (readonly) int width; 
@property (readonly) int height; 
@property (copy) NSString * dir; 
@property (copy) NSString * designMode; 
@property (copy,readonly) NSString * compatMode; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * fgColor; 
@property (copy) NSString * alinkColor; 
@property (copy) NSString * linkColor; 
@property (copy) NSString * vlinkColor; 
-(NSString *)bgColor;
-(NSString *)compatMode;
-(id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)createDocumentFragmentWithText:(id)arg1 ;
-(id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2 ;
-(id)_createDocumentFragmentWithText:(id)arg1 ;
-(void)setBgColor:(NSString *)arg1 ;
-(DOMHTMLCollection *)embeds;
-(DOMHTMLCollection *)plugins;
-(DOMHTMLCollection *)scripts;
-(NSString *)dir;
-(void)setDir:(NSString *)arg1 ;
-(NSString *)designMode;
-(void)setDesignMode:(NSString *)arg1 ;
-(NSString *)fgColor;
-(void)setFgColor:(NSString *)arg1 ;
-(NSString *)alinkColor;
-(void)setAlinkColor:(NSString *)arg1 ;
-(void)setLinkColor:(NSString *)arg1 ;
-(NSString *)vlinkColor;
-(void)setVlinkColor:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(void)writeln:(id)arg1 ;
-(void)captureEvents;
-(void)releaseEvents;
-(void)clear;
-(void)close;
-(NSString *)linkColor;
-(void)open;
-(int)width;
-(int)height;
@end

