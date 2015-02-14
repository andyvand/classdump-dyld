/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <ScriptingBridge/SBObject.h>

@class NSString, _AMiCalDocument, NSNumber;

@interface _AMiCalWindow : SBObject

@property (copy) NSString * name; 
@property (assign) CGRect bounds; 
@property (copy,readonly) _AMiCalDocument * document; 
@property (readonly) char closeable; 
@property (readonly) char titled; 
@property (copy) NSNumber * index; 
@property (readonly) char floating; 
@property (readonly) char miniaturizable; 
@property (assign) char miniaturized; 
@property (readonly) char modal; 
@property (readonly) char resizable; 
@property (assign) char visible; 
@property (readonly) char zoomable; 
@property (assign) char zoomed; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(char)closeable;
-(char)floating;
-(id)id;
-(char)miniaturizable;
-(char)miniaturized;
-(void)setMiniaturized:(char)arg1 ;
-(char)modal;
-(char)resizable;
-(char)titled;
-(char)zoomable;
-(char)zoomed;
-(void)setZoomed:(char)arg1 ;
-(void)saveIn:(id)arg1 as:(id)arg2 ;
-(void)setIndex:(NSNumber *)arg1 ;
-(char)visible;
-(char)exists;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)index;
-(_AMiCalDocument *)document;
-(void)setVisible:(char)arg1 ;
-(void)show;
@end

