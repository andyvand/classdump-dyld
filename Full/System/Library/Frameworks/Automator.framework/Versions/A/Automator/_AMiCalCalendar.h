/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiCalItem.h>

@class NSString, NSColor;

@interface _AMiCalCalendar : _AMiCalItem

@property (copy) NSString * name; 
@property (copy) NSColor * color; 
@property (copy,readonly) NSString * uid; 
@property (readonly) char writable; 
@property (copy) NSString * objectDescription; 
-(NSString *)objectDescription;
-(void)setObjectDescription:(NSString *)arg1 ;
-(char)writable;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(id)events;
-(id)todos;
-(NSString *)uid;
@end

