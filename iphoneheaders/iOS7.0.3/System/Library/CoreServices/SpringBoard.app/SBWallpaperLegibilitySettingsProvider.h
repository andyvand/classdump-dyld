/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoardFoundation/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, ;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {

	<SBFLegibilitySettingsProviderDelegate>* _delegate;
	int _variant;

}

@property (assign,nonatomic) <SBFLegibilitySettingsProviderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)legibilitySettings;
-(id)initWithVariant:(int)arg1 ;
@end
