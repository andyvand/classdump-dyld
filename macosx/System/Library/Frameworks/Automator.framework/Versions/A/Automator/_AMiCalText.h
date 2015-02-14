/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSColor, NSString, NSNumber;

@interface _AMiCalText : SBObject

@property (copy) NSColor * color; 
@property (copy) NSString * font; 
@property (copy) NSNumber * size; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(id)arg2 ;
-(void)GetURL;
-(char)exists;
-(NSString *)font;
-(void)setFont:(NSString *)arg1 ;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(id)characters;
-(id)attachments;
-(id)words;
-(id)attributeRuns;
-(id)paragraphs;
-(void)show;
@end

