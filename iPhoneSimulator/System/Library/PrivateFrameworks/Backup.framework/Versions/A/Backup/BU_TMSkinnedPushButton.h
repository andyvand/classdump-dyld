/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <Backup/BU_TMPushButton.h>

@interface BU_TMSkinnedPushButton : BU_TMPushButton {

	BOOL fHasCustomImages;
	int fNormalID;
	TFCGImage* fNormalImage;
	int fDisabledID;
	TFCGImage* fDisabledImage;
	int fPressedID;
	TFCGImage* fPressedImage;
	int fSelectedID;
	TFCGImage* fSelectedImage;
	int fMouseOverID;
	TFCGImage* fMouseOverImage;

}
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)flushImages;
-(BOOL)loadedImages;
-(void)setTextColorsNormal:(short)arg1 disabled:(short)arg2 pressed:(short)arg3 ;
-(void)setOnePartButtonImagesWithNormalID:(int)arg1 pressedID:(int)arg2 selectedID:(int)arg3 disabledID:(int)arg4 mouseOverID:(int)arg5 ;
@end

