/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVCaptureControlsRecordingViewController.h>

@class NSView;

@interface AVFloatingCaptureControlsViewController : AVCaptureControlsRecordingViewController {

	NSView* _initialFirstResponder;
	/*^block*/id _nextKeyViewSetupBlock;

}
+(id)keyPathsForValuesAffectingMovableControlsContentView;
-(void)setupNextKeyView;
-(id)backgroundBackdropViewMaskImage;
-(long long)layoutStyle;
-(CGSize)intrinsicControlsContentViewSize;
-(SCD_Struct_AV6)controlsContentViewMargin;
-(char)movableControlsContentView;
-(id)recordButtonPauseImage;
-(id)recordButtonRecordImage;
-(id)recordButtonStopImage;
-(void)loadView;
-(id)initialFirstResponder;
@end

