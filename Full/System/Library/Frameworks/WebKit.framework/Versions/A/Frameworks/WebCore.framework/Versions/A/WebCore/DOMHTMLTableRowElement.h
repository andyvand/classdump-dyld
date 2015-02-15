/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (readonly) int rowIndex; 
@property (readonly) int sectionRowIndex; 
@property (readonly) DOMHTMLCollection * cells; 
@property (copy) NSString * align; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * ch; 
@property (copy) NSString * chOff; 
@property (copy) NSString * vAlign; 
-(NSString *)bgColor;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(void)setBgColor:(NSString *)arg1 ;
-(NSString *)ch;
-(void)setCh:(NSString *)arg1 ;
-(NSString *)chOff;
-(void)setChOff:(NSString *)arg1 ;
-(NSString *)vAlign;
-(void)setVAlign:(NSString *)arg1 ;
-(int)sectionRowIndex;
-(id)insertCell:(int)arg1 ;
-(void)deleteCell:(int)arg1 ;
-(DOMHTMLCollection *)cells;
-(int)rowIndex;
@end

