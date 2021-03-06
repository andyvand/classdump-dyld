/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <ScreenSharing/NSCopying.h>

@interface SSScreenInfo : NSObject <NSCopying> {

	CGRect mFrame;
	CGRect mDestinationFrame;
	unsigned long long mIdentifier;
	unsigned long long mIndex;
	unsigned long long mFlags;
	char mIsGlobalScreen;
	double mUIResolution;
	SSRect mScaledFrame;
	void* mReservedForInstanceVariables;

}

@property (assign) CGRect frame; 
@property (assign) CGRect destinationFrame; 
@property (assign) SSRect scaledFrame; 
@property (assign) unsigned long long identifier; 
@property (assign) unsigned long long index; 
@property (assign) unsigned long long flags; 
@property (assign) char isGlobalScreen; 
@property (assign) double UIResolution; 
-(void)setIndex:(unsigned long long)arg1 ;
-(char)isGlobalScreen;
-(CGRect)destinationFrame;
-(SSRect)scaledFrame;
-(double)UIResolution;
-(void)setIsGlobalScreen:(char)arg1 ;
-(void)setUIResolution:(double)arg1 ;
-(void)setScaledFrame:(SSRect)arg1 ;
-(void)setDestinationFrame:(CGRect)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
@end

