/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSString;

@interface _AMSystemEventsLoginItem : _AMSystemEventsItem

@property (assign) char hidden; 
@property (copy,readonly) NSString * kind; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * path; 
-(char)hidden;
-(NSString *)path;
-(void)setHidden:(char)arg1 ;
-(NSString *)name;
-(NSString *)kind;
@end
