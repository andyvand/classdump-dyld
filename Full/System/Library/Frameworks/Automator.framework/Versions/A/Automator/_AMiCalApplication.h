/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class NSString;

@interface _AMiCalApplication : SBApplication

@property (copy,readonly) NSString * name; 
@property (readonly) char frontmost; 
@property (copy,readonly) NSString * version; 
+(id)application;
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(char)frontmost;
-(void)quitSaving:(int)arg1 ;
-(void)GetURL:(id)arg1 ;
-(void)createCalendarWithName:(id)arg1 ;
-(void)reloadCalendars;
-(void)switchViewTo:(int)arg1 ;
-(void)viewCalendarAt:(id)arg1 ;
-(NSString *)name;
-(id)windows;
-(id)documents;
-(void)print:(id)arg1 ;
-(void)open:(id)arg1 ;
-(NSString *)version;
-(id)calendars;
@end

