/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/RolloverTrackingButton.h>

@interface NewTabButton : RolloverTrackingButton {

	long long _addNewTabButtonStyle;

}

@property (assign,nonatomic) long long addNewTabButtonStyle;              //@synthesize addNewTabButtonStyle=_addNewTabButtonStyle - In the implementation block
+(id)installNewTabButtonInView:(id)arg1 ;
+(double)width;
-(void)setAddNewTabButtonStyle:(long long)arg1 ;
-(id)_imageForNonMainWindow;
-(void)_setHasMouseOverHighlight:(char)arg1 animated:(char)arg2 ;
-(void)mouseEnteredOrExited:(char)arg1 ;
-(id)_imageForMainWindow;
-(id)_pressedImage;
-(id)_rolloverImage;
-(id)imageForCurrentButtonState;
-(long long)addNewTabButtonStyle;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)allowsVibrancy;
-(void)_windowChangedKeyState;
-(void)awakeFromNib;
-(void)_finishInitialization;
@end

