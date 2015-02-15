/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString * align; 
@property (copy) NSString * ch; 
@property (copy) NSString * chOff; 
@property (copy) NSString * vAlign; 
@property (readonly) DOMHTMLCollection * rows; 
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(DOMHTMLCollection *)rows;
-(NSString *)ch;
-(void)setCh:(NSString *)arg1 ;
-(NSString *)chOff;
-(void)setChOff:(NSString *)arg1 ;
-(NSString *)vAlign;
-(void)setVAlign:(NSString *)arg1 ;
-(void)deleteRow:(int)arg1 ;
-(id)insertRow:(int)arg1 ;
@end

