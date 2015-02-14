/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/OneStepBookmarkingBasicButton.h>

@interface OneStepBookmarkingButton : OneStepBookmarkingBasicButton {

	char _useCheckmarkIcon;

}

@property (assign,nonatomic) char useCheckmarkIcon;              //@synthesize useCheckmarkIcon=_useCheckmarkIcon - In the implementation block
+(Class)cellClass;
-(void)showBookmarkingCompletedUI;
-(void)_updateIcon;
-(void)setUseCheckmarkIcon:(char)arg1 ;
-(void)_fadeCheckmarkToPlusIcon;
-(void)_flashCheckmarkIcon;
-(char)useCheckmarkIcon;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

