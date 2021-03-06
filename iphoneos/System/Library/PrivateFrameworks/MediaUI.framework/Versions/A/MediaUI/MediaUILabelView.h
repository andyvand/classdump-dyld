/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUIUtilityView.h>

@class NSFont, NSColor;

@interface MediaUILabelView : MediaUIUtilityView

@property (copy) id label; 
@property (copy) NSFont * font; 
@property (copy) NSColor * backgroundColor; 
@property (copy) NSColor * textColor; 
@property (assign) unsigned long long alignment; 
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setTextColor:(NSColor *)arg1 ;
-(unsigned long long)alignment;
-(NSColor *)textColor;
-(NSColor *)backgroundColor;
-(id)makeBackingLayer;
-(void)setLabel:(id)arg1 ;
-(id)label;
@end

