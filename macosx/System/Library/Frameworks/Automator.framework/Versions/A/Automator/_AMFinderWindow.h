/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <ScriptingBridge/SBObject.h>

@class NSString, NSDictionary;

@interface _AMFinderWindow : SBObject

@property (assign) CGPoint position; 
@property (assign) CGRect bounds; 
@property (readonly) char titled; 
@property (copy,readonly) NSString * name; 
@property (assign) long long index; 
@property (readonly) char closeable; 
@property (readonly) char floating; 
@property (readonly) char modal; 
@property (readonly) char resizable; 
@property (readonly) char zoomable; 
@property (assign) char zoomed; 
@property (readonly) char visible; 
@property (assign) char collapsed; 
@property (copy) NSDictionary * properties; 
-(id)delete;
-(char)closeable;
-(char)floating;
-(long long)id;
-(char)modal;
-(char)resizable;
-(char)titled;
-(char)zoomable;
-(char)zoomed;
-(void)setZoomed:(char)arg1 ;
-(void)emptySecurity:(char)arg1 ;
-(void)openUsing:(id)arg1 withProperties:(id)arg2 ;
-(void)printWithProperties:(id)arg1 ;
-(long long)dataSizeAs:(id)arg1 ;
-(id)duplicateTo:(id)arg1 replacing:(char)arg2 routingSuppressed:(char)arg3 ;
-(id)moveTo:(id)arg1 replacing:(char)arg2 positionedAt:(id)arg3 routingSuppressed:(char)arg4 ;
-(void)updateNecessity:(char)arg1 registeringApplications:(char)arg2 ;
-(void)setIndex:(long long)arg1 ;
-(void)reveal;
-(void)setProperties:(NSDictionary *)arg1 ;
-(char)visible;
-(void)select;
-(char)collapsed;
-(char)exists;
-(CGRect)bounds;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)position;
-(NSString *)name;
-(long long)index;
-(void)activate;
-(void)close;
-(NSDictionary *)properties;
-(void)setCollapsed:(char)arg1 ;
-(void)eject;
-(void)erase;
@end

