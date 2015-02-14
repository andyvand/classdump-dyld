/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSColor, NSString, NSNumber;

@interface _AMMailCharacter : SBObject

@property (copy) NSColor * color; 
@property (copy) NSString * font; 
@property (copy) NSNumber * size; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(NSString *)font;
-(void)setFont:(NSString *)arg1 ;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(id)attachments;
-(id)attributeRuns;
@end

