/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DOCKPreferences : NSObject

@property (assign,nonatomic) float autohideDelayPref; 
@property (assign,nonatomic) float durationDigDurationPref; 
@property (assign,nonatomic) float durationDigPerFrameDurationPref; 
@property (assign,nonatomic) float durationDigAnglePref; 
@property (assign,nonatomic) unsigned char minimizeToApplicationPref; 
@property (assign,nonatomic) unsigned char showProcessIndicatorsPref; 
@property (assign,nonatomic) unsigned dockBlurPref; 
@property (assign,nonatomic) char groupWindowsByApplicationPref; 
@property (assign,nonatomic) char showDesktopGestureEnabledPref; 
@property (assign,nonatomic) char showAppExposeGestureEnabledPref; 
@property (assign,nonatomic) char showMissionControlGestureEnabledPref; 
@property (assign,nonatomic) char autoReorderSpacesPref; 
@property (assign,nonatomic) char showLaunchpadGestureEnabledPref; 
+(id)preferences;
-(float)autohideDelayPref;
-(void)setAutohideDelayPref:(float)arg1 ;
-(float)durationDigDurationPref;
-(void)setDurationDigDurationPref:(float)arg1 ;
-(float)durationDigPerFrameDurationPref;
-(void)setDurationDigPerFrameDurationPref:(float)arg1 ;
-(float)durationDigAnglePref;
-(void)setDurationDigAnglePref:(float)arg1 ;
-(unsigned char)minimizeToApplicationPref;
-(void)setMinimizeToApplicationPref:(unsigned char)arg1 ;
-(unsigned char)showProcessIndicatorsPref;
-(void)setShowProcessIndicatorsPref:(unsigned char)arg1 ;
-(unsigned)dockBlurPref;
-(void)setDockBlurPref:(unsigned)arg1 ;
-(void)setEnabledStatePref:(int)arg1 ;
-(int)enabledStatePref;
-(char)groupWindowsByApplicationPref;
-(void)setGroupWindowsByApplicationPref:(char)arg1 ;
-(char)showDesktopGestureEnabledPref;
-(void)setShowDesktopGestureEnabledPref:(char)arg1 ;
-(char)showAppExposeGestureEnabledPref;
-(void)setShowAppExposeGestureEnabledPref:(char)arg1 ;
-(char)showMissionControlGestureEnabledPref;
-(void)setShowMissionControlGestureEnabledPref:(char)arg1 ;
-(char)autoReorderSpacesPref;
-(void)setAutoReorderSpacesPref:(char)arg1 ;
-(char)showLaunchpadGestureEnabledPref;
-(void)setShowLaunchpadGestureEnabledPref:(char)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end
