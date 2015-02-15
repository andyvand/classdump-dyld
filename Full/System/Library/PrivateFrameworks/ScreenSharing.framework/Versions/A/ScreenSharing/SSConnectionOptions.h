/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenSharing/ScreenSharing-Structs.h>
@class NSMutableDictionary, NSArray;

@interface SSConnectionOptions : NSObject {

	long long mMinimumEncryptionLevel;
	char mShouldGetUserInfo;
	long long mControlType;
	char mShouldFallbackToObserve;
	long long mAuthMethod;
	NSMutableDictionary* mHints;
	NSArray* mVideoEncodings;
	char mSkipAddressPresentation;
	void* mReservedForInstanceVariables;
	char shouldScaleScreen;
	char shouldCurtainScreen;
	char shouldSharePasteboard;
	char openInFullScreen;
	char showConnectionProgress;
	long long sessionSelectionAction;
	long long panningMode;
	long long screenQualityMode;
	unsigned long long selectedScreen;
	CGSize maxSize;
	CGRect restoreWindowFrame;

}

@property (assign) long long minimumEncryptionLevel; 
@property (assign) char shouldGetUserInfo; 
@property (assign) long long controlType; 
@property (assign) long long sessionSelectionAction; 
@property (assign) long long panningMode; 
@property (assign) long long screenQualityMode; 
@property (assign) CGSize maxSize; 
@property (assign) CGRect restoreWindowFrame; 
@property (assign) unsigned long long selectedScreen; 
@property (assign) char shouldScaleScreen; 
@property (assign) char shouldCurtainScreen; 
@property (assign) char shouldSharePasteboard; 
@property (assign) char shouldFallbackToObserve; 
@property (assign) long long authMethod; 
@property (copy) NSMutableDictionary * hints; 
@property (copy) NSArray * videoEncodings; 
@property (assign) char skipAddressPresentation; 
@property (assign) char openInFullScreen; 
@property (assign) char showConnectionProgress; 
+(id)defaultOptions;
-(void)setMinimumEncryptionLevel:(long long)arg1 ;
-(void)setControlType:(long long)arg1 ;
-(void)setSessionSelectionAction:(long long)arg1 ;
-(void)setPanningMode:(long long)arg1 ;
-(void)setScreenQualityMode:(long long)arg1 ;
-(void)setSelectedScreen:(unsigned long long)arg1 ;
-(void)setShouldScaleScreen:(char)arg1 ;
-(void)setShouldSharePasteboard:(char)arg1 ;
-(void)setShouldFallbackToObserve:(char)arg1 ;
-(void)setOpenInFullScreen:(char)arg1 ;
-(void)setAuthMethod:(long long)arg1 ;
-(unsigned long long)selectedScreen;
-(char)skipAddressPresentation;
-(char)shouldCurtainScreen;
-(char)shouldScaleScreen;
-(long long)screenQualityMode;
-(char)shouldSharePasteboard;
-(long long)minimumEncryptionLevel;
-(long long)authMethod;
-(long long)sessionSelectionAction;
-(long long)panningMode;
-(long long)controlType;
-(CGRect)restoreWindowFrame;
-(void)setRestoreWindowFrame:(CGRect)arg1 ;
-(char)showConnectionProgress;
-(NSMutableDictionary *)hints;
-(void)setVideoEncodings:(NSArray *)arg1 ;
-(void)setShouldCurtainScreen:(char)arg1 ;
-(void)setShowConnectionProgress:(char)arg1 ;
-(void)setSkipAddressPresentation:(char)arg1 ;
-(void)setShouldGetUserInfo:(char)arg1 ;
-(void)setHints:(NSMutableDictionary *)arg1 ;
-(char)shouldFallbackToObserve;
-(char)shouldGetUserInfo;
-(char)openInFullScreen;
-(NSArray *)videoEncodings;
-(id)init;
-(void)dealloc;
-(id)description;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
@end

