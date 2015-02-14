/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMKeynote5Item.h>

@class _AMKeynote5Slide, NSString;

@interface _AMKeynote5Slideshow : _AMKeynote5Item

@property (copy) _AMKeynote5Slide * currentSlide; 
@property (readonly) char playing; 
@property (readonly) char modified; 
@property (copy) NSString * name; 
@property (copy) NSString * path; 
-(char)modified;
-(id)masterSlides;
-(id)slides;
-(id)docThemes;
-(_AMKeynote5Slide *)currentSlide;
-(void)setCurrentSlide:(_AMKeynote5Slide *)arg1 ;
-(char)playing;
-(NSString *)path;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setPath:(NSString *)arg1 ;
@end

