/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMKeynote5Item.h>

@class NSString, _AMKeynote5MasterSlide, _AMKeynote5SlideTransition;

@interface _AMKeynote5Slide : _AMKeynote5Item

@property (copy) NSString * body; 
@property (copy) _AMKeynote5MasterSlide * master; 
@property (copy) NSString * notes; 
@property (assign) char skipped; 
@property (readonly) long long slideNumber; 
@property (copy) NSString * title; 
@property (copy,readonly) _AMKeynote5SlideTransition * transition; 
-(long long)id;
-(_AMKeynote5MasterSlide *)master;
-(void)setMaster:(_AMKeynote5MasterSlide *)arg1 ;
-(char)skipped;
-(void)setSkipped:(char)arg1 ;
-(long long)slideNumber;
-(_AMKeynote5SlideTransition *)transition;
-(void)jumpTo;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)show;
@end
