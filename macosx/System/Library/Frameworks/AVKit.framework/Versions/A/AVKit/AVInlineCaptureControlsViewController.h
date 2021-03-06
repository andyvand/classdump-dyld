/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVCaptureControlsRecordingViewController.h>

@class NSView;

@interface AVInlineCaptureControlsViewController : AVCaptureControlsRecordingViewController {

	NSView* _initialFirstResponder;
	double _unmutedVolume;
	/*^block*/id _nextKeyViewSetupBlock;

}
-(void)setupNextKeyView;
-(id)backgroundBackdropViewMaskImage;
-(long long)layoutStyle;
-(CGSize)intrinsicControlsContentViewSize;
-(void)volumeButtonPressed:(id)arg1 ;
-(id)recordButtonPauseImage;
-(id)recordButtonRecordImage;
-(id)recordButtonStopImage;
-(void)loadView;
-(id)initialFirstResponder;
@end

