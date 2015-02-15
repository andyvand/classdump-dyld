/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/_AMSafariItem.h>

@class _AMSafariTab, _AMSafariDocument, NSString;

@interface _AMSafariWindow : _AMSafariItem

@property (copy) _AMSafariTab * currentTab; 
@property (assign) CGRect bounds; 
@property (readonly) char closeable; 
@property (copy,readonly) _AMSafariDocument * document; 
@property (readonly) char floating; 
@property (assign) long long index; 
@property (readonly) char miniaturizable; 
@property (assign) char miniaturized; 
@property (readonly) char modal; 
@property (copy) NSString * name; 
@property (readonly) char resizable; 
@property (readonly) char titled; 
@property (assign) char visible; 
@property (readonly) char zoomable; 
@property (assign) char zoomed; 
-(char)closeable;
-(char)floating;
-(long long)id;
-(char)miniaturizable;
-(char)miniaturized;
-(void)setMiniaturized:(char)arg1 ;
-(char)modal;
-(char)resizable;
-(char)titled;
-(char)zoomable;
-(char)zoomed;
-(void)setZoomed:(char)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(id)tabs;
-(char)visible;
-(_AMSafariTab *)currentTab;
-(void)setCurrentTab:(_AMSafariTab *)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)index;
-(_AMSafariDocument *)document;
-(void)setVisible:(char)arg1 ;
@end

