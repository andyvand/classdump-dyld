/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement

@property (copy) NSString * name; 
@property (copy) NSString * align; 
@property (copy) NSString * alt; 
@property (copy) NSString * border; 
@property (assign) int height; 
@property (assign) int hspace; 
@property (assign) char isMap; 
@property (copy) NSString * longDesc; 
@property (copy) NSString * src; 
@property (copy) NSString * useMap; 
@property (assign) int vspace; 
@property (assign) int width; 
@property (readonly) char complete; 
@property (copy) NSString * lowsrc; 
@property (readonly) int naturalHeight; 
@property (readonly) int naturalWidth; 
@property (readonly) int x; 
@property (readonly) int y; 
@property (copy,readonly) NSString * altDisplayString; 
@property (copy,readonly) NSURL * absoluteImageURL; 
-(NSString *)border;
-(void)setBorder:(NSString *)arg1 ;
-(void)setHeight:(int)arg1 ;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)alt;
-(void)setAlt:(NSString *)arg1 ;
-(int)hspace;
-(void)setHspace:(int)arg1 ;
-(int)vspace;
-(void)setVspace:(int)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(NSString *)longDesc;
-(void)setLongDesc:(NSString *)arg1 ;
-(id)crossOrigin;
-(void)setCrossOrigin:(id)arg1 ;
-(char)isMap;
-(void)setIsMap:(char)arg1 ;
-(id)srcset;
-(void)setSrcset:(id)arg1 ;
-(NSString *)useMap;
-(void)setUseMap:(NSString *)arg1 ;
-(char)complete;
-(NSString *)lowsrc;
-(void)setLowsrc:(NSString *)arg1 ;
-(int)naturalHeight;
-(int)naturalWidth;
-(NSString *)altDisplayString;
-(NSURL *)absoluteImageURL;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setWidth:(int)arg1 ;
-(int)width;
-(int)height;
-(int)x;
-(int)y;
@end

