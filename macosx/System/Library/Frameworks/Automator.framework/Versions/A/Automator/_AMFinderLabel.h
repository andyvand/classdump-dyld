/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString, NSColor;

@interface _AMFinderLabel : SBObject

@property (copy) NSString * name; 
@property (assign) long long index; 
@property (copy) NSColor * color; 
-(id)delete;
-(void)emptySecurity:(char)arg1 ;
-(void)openUsing:(id)arg1 withProperties:(id)arg2 ;
-(void)printWithProperties:(id)arg1 ;
-(long long)dataSizeAs:(id)arg1 ;
-(id)duplicateTo:(id)arg1 replacing:(char)arg2 routingSuppressed:(char)arg3 ;
-(id)moveTo:(id)arg1 replacing:(char)arg2 positionedAt:(id)arg3 routingSuppressed:(char)arg4 ;
-(void)updateNecessity:(char)arg1 registeringApplications:(char)arg2 ;
-(void)setIndex:(long long)arg1 ;
-(void)reveal;
-(void)select;
-(char)exists;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)index;
-(void)activate;
-(void)close;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(void)eject;
-(void)erase;
@end

