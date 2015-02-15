/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class _AMSystemEventsConfiguration, _AMSystemEventsInterface, NSString;

@interface _AMSystemEventsService : _AMSystemEventsItem

@property (readonly) char active; 
@property (copy) _AMSystemEventsConfiguration * currentConfiguration; 
@property (copy,readonly) _AMSystemEventsInterface * interface; 
@property (readonly) long long kind; 
@property (copy) NSString * name; 
-(id)id;
-(_AMSystemEventsConfiguration *)currentConfiguration;
-(void)setCurrentConfiguration:(_AMSystemEventsConfiguration *)arg1 ;
-(id)configurations;
-(_AMSystemEventsInterface *)interface;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)kind;
-(char)active;
@end
