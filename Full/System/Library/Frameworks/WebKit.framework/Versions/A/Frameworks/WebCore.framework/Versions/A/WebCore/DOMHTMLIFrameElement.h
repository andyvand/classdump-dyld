/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class WebFrame, NSString, DOMDocument, DOMAbstractView;

@interface DOMHTMLIFrameElement : DOMHTMLElement

@property (nonatomic,readonly) WebFrame * contentFrame; 
@property (copy) NSString * align; 
@property (copy) NSString * frameBorder; 
@property (copy) NSString * height; 
@property (copy) NSString * longDesc; 
@property (copy) NSString * marginHeight; 
@property (copy) NSString * marginWidth; 
@property (copy) NSString * name; 
@property (copy) NSString * scrolling; 
@property (copy) NSString * src; 
@property (copy) NSString * width; 
@property (readonly) DOMDocument * contentDocument; 
@property (readonly) DOMAbstractView * contentWindow; 
-(WebFrame *)contentFrame;
-(void)setHeight:(NSString *)arg1 ;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(NSString *)frameBorder;
-(void)setFrameBorder:(NSString *)arg1 ;
-(NSString *)longDesc;
-(void)setLongDesc:(NSString *)arg1 ;
-(NSString *)marginHeight;
-(void)setMarginHeight:(NSString *)arg1 ;
-(NSString *)marginWidth;
-(void)setMarginWidth:(NSString *)arg1 ;
-(NSString *)scrolling;
-(void)setScrolling:(NSString *)arg1 ;
-(DOMDocument *)contentDocument;
-(DOMAbstractView *)contentWindow;
-(id)sandbox;
-(void)setSandbox:(id)arg1 ;
-(id)srcdoc;
-(void)setSrcdoc:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setWidth:(NSString *)arg1 ;
-(NSString *)width;
-(NSString *)height;
@end

