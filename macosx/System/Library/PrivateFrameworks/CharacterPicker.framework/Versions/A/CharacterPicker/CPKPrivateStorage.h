/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPKCharacterEntity;
#import <CharacterPicker/CharacterPicker-Structs.h>
@class NSView, NSWindow, CPKWindow, CPKPopoverController, CPKDataProvider;

@interface CPKPrivateStorage : NSObject {

	CGRect _positioningRect;
	NSView* _positioningView;
	unsigned long long _preferredEdge;
	id _globalEventMonitor;
	id _localEventMonitor;
	char _needsRebuildView;
	char _settingDataSource;
	char _displayingPopover;
	char _skipOpeningAnimation;
	char _displayAsWindow;
	CGPoint _displayAsWindowLoc;
	NSWindow* _lastKeyWindow;
	id _lastActionObject;
	char _lastTargetValidation;
	NSRange _lastSelectionOnTarget;
	id<CPKCharacterEntity> _lastSelectedEntity;
	CPKWindow* _detachingWindow;
	CPKWindow* _detachedWindow;
	CPKPopoverController* _tempRetainer;
	CPKDataProvider* _delayedSettingProvider;

}

@property (assign) CGRect positioningRect;                                 //@synthesize positioningRect=_positioningRect - In the implementation block
@property (assign) NSView * positioningView;                               //@synthesize positioningView=_positioningView - In the implementation block
@property (assign) unsigned long long preferredEdge;                       //@synthesize preferredEdge=_preferredEdge - In the implementation block
@property (retain) id globalEventMonitor;                                  //@synthesize globalEventMonitor=_globalEventMonitor - In the implementation block
@property (retain) id localEventMonitor;                                   //@synthesize localEventMonitor=_localEventMonitor - In the implementation block
@property (assign) char needsRebuildView;                                  //@synthesize needsRebuildView=_needsRebuildView - In the implementation block
@property (assign) char settingDataSource;                                 //@synthesize settingDataSource=_settingDataSource - In the implementation block
@property (assign) char displayingPopover;                                 //@synthesize displayingPopover=_displayingPopover - In the implementation block
@property (assign) char skipOpeningAnimation;                              //@synthesize skipOpeningAnimation=_skipOpeningAnimation - In the implementation block
@property (assign) char displayAsWindow;                                   //@synthesize displayAsWindow=_displayAsWindow - In the implementation block
@property (assign) CGPoint displayAsWindowLoc;                             //@synthesize displayAsWindowLoc=_displayAsWindowLoc - In the implementation block
@property (assign) NSWindow * lastKeyWindow;                               //@synthesize lastKeyWindow=_lastKeyWindow - In the implementation block
@property (assign) id lastActionObject;                                    //@synthesize lastActionObject=_lastActionObject - In the implementation block
@property (assign) char lastTargetValidation;                              //@synthesize lastTargetValidation=_lastTargetValidation - In the implementation block
@property (assign) NSRange lastSelectionOnTarget;                          //@synthesize lastSelectionOnTarget=_lastSelectionOnTarget - In the implementation block
@property (retain) id<CPKCharacterEntity> lastSelectedEntity;              //@synthesize lastSelectedEntity=_lastSelectedEntity - In the implementation block
@property (retain) CPKWindow * detachingWindow;                            //@synthesize detachingWindow=_detachingWindow - In the implementation block
@property (retain) CPKWindow * detachedWindow;                             //@synthesize detachedWindow=_detachedWindow - In the implementation block
@property (retain) CPKPopoverController * tempRetainer;                    //@synthesize tempRetainer=_tempRetainer - In the implementation block
@property (retain) CPKDataProvider * delayedSettingProvider;               //@synthesize delayedSettingProvider=_delayedSettingProvider - In the implementation block
-(void)setDetachedWindow:(CPKWindow *)arg1 ;
-(void)setLastKeyWindow:(NSWindow *)arg1 ;
-(NSWindow *)lastKeyWindow;
-(void)setSettingDataSource:(char)arg1 ;
-(char)displayingPopover;
-(char)displayAsWindow;
-(void)setDelayedSettingProvider:(CPKDataProvider *)arg1 ;
-(void)setLastSelectedEntity:(id<CPKCharacterEntity>)arg1 ;
-(void)setDetachingWindow:(CPKWindow *)arg1 ;
-(CPKWindow *)detachedWindow;
-(void)setDisplayAsWindow:(char)arg1 ;
-(void)setDisplayAsWindowLoc:(CGPoint)arg1 ;
-(void)setSkipOpeningAnimation:(char)arg1 ;
-(id)lastActionObject;
-(void)setDisplayingPopover:(char)arg1 ;
-(CPKPopoverController *)tempRetainer;
-(void)setTempRetainer:(CPKPopoverController *)arg1 ;
-(void)setLastActionObject:(id)arg1 ;
-(void)setLastTargetValidation:(char)arg1 ;
-(void)setLastSelectionOnTarget:(NSRange)arg1 ;
-(char)settingDataSource;
-(CPKDataProvider *)delayedSettingProvider;
-(void)setGlobalEventMonitor:(id)arg1 ;
-(void)setLocalEventMonitor:(id)arg1 ;
-(id)globalEventMonitor;
-(id)localEventMonitor;
-(id<CPKCharacterEntity>)lastSelectedEntity;
-(CGPoint)displayAsWindowLoc;
-(char)skipOpeningAnimation;
-(CPKWindow *)detachingWindow;
-(char)needsRebuildView;
-(void)setNeedsRebuildView:(char)arg1 ;
-(char)lastTargetValidation;
-(NSRange)lastSelectionOnTarget;
-(void)dealloc;
-(unsigned long long)preferredEdge;
-(void)setPreferredEdge:(unsigned long long)arg1 ;
-(void)setPositioningRect:(CGRect)arg1 ;
-(void)setPositioningView:(NSView *)arg1 ;
-(NSView *)positioningView;
-(CGRect)positioningRect;
@end

