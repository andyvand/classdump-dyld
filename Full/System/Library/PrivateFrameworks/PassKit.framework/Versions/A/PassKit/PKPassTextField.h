/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSTextField.h>

@interface PKPassTextField : NSTextField {

	char _drawnOnBackgroundImage;
	long long _typeMask;

}

@property (assign) long long typeMask;                       //@synthesize typeMask=_typeMask - In the implementation block
@property (assign) char drawnOnBackgroundImage;              //@synthesize drawnOnBackgroundImage=_drawnOnBackgroundImage - In the implementation block
+(Class)cellClass;
-(long long)typeMask;
-(void)setTypeMask:(long long)arg1 ;
-(char)drawnOnBackgroundImage;
-(void)setDrawnOnBackgroundImage:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
@end

