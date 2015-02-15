/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSafariItem.h>

@class NSColor, NSString;

@interface _AMSafariWord : _AMSafariItem

@property (copy) NSColor * color; 
@property (copy) NSString * font; 
@property (assign) long long size; 
-(NSString *)font;
-(void)setFont:(NSString *)arg1 ;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(id)characters;
-(id)attachments;
-(id)words;
-(id)attributeRuns;
-(id)paragraphs;
@end

