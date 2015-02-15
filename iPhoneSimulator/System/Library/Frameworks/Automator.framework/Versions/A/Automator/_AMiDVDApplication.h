/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBApplication.h>

@class NSArray, NSString, _AMiDVDMenu;

@interface _AMiDVDApplication : SBApplication

@property (copy,readonly) NSArray * applicationDefinedButtonShapes; 
@property (assign) int aspectRatio; 
@property (copy) NSString * autoplayMovie; 
@property (copy) NSArray * autoplaySlideshow; 
@property (assign) int autoplaySlideshowTransitionDirection; 
@property (assign) int autoplaySlideshowTransitionType; 
@property (copy,readonly) NSArray * availableDVDBurners; 
@property (copy,readonly) NSArray * availableTransitions; 
@property (assign) char backgroundEncoding; 
@property (assign) char bestQualityEncoding; 
@property (copy,readonly) _AMiDVDMenu * currentMenu; 
@property (readonly) char discReady; 
@property (readonly) char isBurning; 
@property (assign) char loopAutoplay; 
@property (assign) char motionMode; 
@property (assign) char previewMode; 
@property (assign) char proQualityEncoding; 
@property (readonly) char projectDirty; 
@property (copy) NSString * projectName; 
@property (readonly) long long projectSize; 
@property (copy) NSArray * properties; 
@property (assign) char quietMode; 
@property (readonly) char ready; 
@property (assign) char renderMode; 
@property (assign) char supportChapterMarkers; 
@property (assign) int tvStandard; 
@property (readonly) char frontmost; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * version; 
+(id)application;
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(char)frontmost;
-(void)print:(id)arg1 printDialog:(char)arg2 withProperties:(id)arg3 ;
-(void)quitSaving:(int)arg1 ;
-(id)slideshows;
-(id)applicationThemes;
-(NSArray *)applicationDefinedButtonShapes;
-(NSString *)autoplayMovie;
-(void)setAutoplayMovie:(NSString *)arg1 ;
-(NSArray *)autoplaySlideshow;
-(void)setAutoplaySlideshow:(NSArray *)arg1 ;
-(int)autoplaySlideshowTransitionDirection;
-(void)setAutoplaySlideshowTransitionDirection:(int)arg1 ;
-(int)autoplaySlideshowTransitionType;
-(void)setAutoplaySlideshowTransitionType:(int)arg1 ;
-(NSArray *)availableDVDBurners;
-(NSArray *)availableTransitions;
-(char)backgroundEncoding;
-(void)setBackgroundEncoding:(char)arg1 ;
-(char)bestQualityEncoding;
-(void)setBestQualityEncoding:(char)arg1 ;
-(_AMiDVDMenu *)currentMenu;
-(char)discReady;
-(char)isBurning;
-(char)loopAutoplay;
-(void)setLoopAutoplay:(char)arg1 ;
-(char)motionMode;
-(void)setMotionMode:(char)arg1 ;
-(char)previewMode;
-(void)setPreviewMode:(char)arg1 ;
-(char)proQualityEncoding;
-(void)setProQualityEncoding:(char)arg1 ;
-(char)projectDirty;
-(NSString *)projectName;
-(void)setProjectName:(NSString *)arg1 ;
-(long long)projectSize;
-(char)quietMode;
-(void)setQuietMode:(char)arg1 ;
-(char)ready;
-(char)renderMode;
-(void)setRenderMode:(char)arg1 ;
-(char)supportChapterMarkers;
-(void)setSupportChapterMarkers:(char)arg1 ;
-(int)tvStandard;
-(void)setTvStandard:(int)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
-(NSString *)name;
-(id)windows;
-(id)documents;
-(void)setAspectRatio:(int)arg1 ;
-(int)aspectRatio;
-(id)open:(id)arg1 ;
-(NSArray *)properties;
-(NSString *)version;
-(id)menus;
@end

