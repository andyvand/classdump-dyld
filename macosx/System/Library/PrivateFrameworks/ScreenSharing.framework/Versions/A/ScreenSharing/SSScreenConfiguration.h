/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/NSCopying.h>

@class SSScreenInfo, NSArray;

@interface SSScreenConfiguration : NSObject <NSCopying> {

	SSRect mScaledSelectedScreenRect;
	SSScreenInfo* mGlobalScreen;
	NSArray* mScreens;
	char mGlobalIsMixedMode;
	char mIsDisplayInfo2;
	char mIsVNC;
	void* mReservedForInstanceVariables;

}

@property (assign) SSRect scaledSelectedScreenRect; 
@property (retain) SSScreenInfo * globalScreen; 
@property (copy) NSArray * screens; 
@property (assign) char globalIsMixedMode; 
@property (assign) char isDisplayInfo2; 
@property (assign) char isVNC; 
-(void)setScreens:(NSArray *)arg1 ;
-(SSScreenInfo *)globalScreen;
-(char)isDisplayInfo2;
-(char)isVNC;
-(char)globalIsMixedMode;
-(SSRect)scaledSelectedScreenRect;
-(void)setGlobalScreen:(SSScreenInfo *)arg1 ;
-(void)setScaledSelectedScreenRect:(SSRect)arg1 ;
-(void)setGlobalIsMixedMode:(char)arg1 ;
-(void)setIsDisplayInfo2:(char)arg1 ;
-(void)setIsVNC:(char)arg1 ;
-(id)screenWithID:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)screens;
@end

