/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class NSString;

@interface _AMTextEditApplication : SBApplication

@property (readonly) char frontmost; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * version; 
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(char)frontmost;
-(void)print:(id)arg1 printDialog:(char)arg2 withProperties:(id)arg3 ;
-(void)quitSaving:(int)arg1 ;
-(NSString *)name;
-(id)windows;
-(id)documents;
-(id)documents;
-(id)open:(id)arg1 ;
-(NSString *)version;
@end

