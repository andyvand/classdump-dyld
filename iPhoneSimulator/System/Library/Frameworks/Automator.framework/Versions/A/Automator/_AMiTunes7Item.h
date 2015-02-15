/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class SBObject, NSString;

@interface _AMiTunes7Item : SBObject

@property (copy,readonly) SBObject * container; 
@property (copy) NSString * name; 
@property (copy,readonly) NSString * persistentID; 
-(void)delete;
-(long long)id;
-(void)printPrintDialog:(char)arg1 withProperties:(id)arg2 kind:(int)arg3 theme:(id)arg4 ;
-(id)duplicateTo:(id)arg1 ;
-(void)playOnce:(char)arg1 ;
-(void)reveal;
-(char)exists;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)close;
-(void)open;
-(NSString *)persistentID;
-(SBObject *)container;
@end

