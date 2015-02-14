/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVCaptureControlsViewController.h>

@class NSProgressIndicator, NSButton, NSImage;

@interface AVCaptureControlsRecordingViewController : AVCaptureControlsViewController {

	char _recordButtonEnabled;
	char _redDotHidden;
	char _optionKeyPressed;
	NSProgressIndicator* _finishingRecordingProgressIndicator;
	NSButton* _recordButton;
	NSImage* _recordButtonImage;

}

@property (nonatomic,retain) NSProgressIndicator * finishingRecordingProgressIndicator;              //@synthesize finishingRecordingProgressIndicator=_finishingRecordingProgressIndicator - In the implementation block
@property (nonatomic,retain) NSButton * recordButton;                                                //@synthesize recordButton=_recordButton - In the implementation block
@property (assign,nonatomic) char recordButtonEnabled;                                               //@synthesize recordButtonEnabled=_recordButtonEnabled - In the implementation block
@property (nonatomic,retain) NSImage * recordButtonImage;                                            //@synthesize recordButtonImage=_recordButtonImage - In the implementation block
@property (assign,getter=isRedDotHidden,nonatomic) char redDotHidden;                                //@synthesize redDotHidden=_redDotHidden - In the implementation block
@property (assign,nonatomic) char optionKeyPressed;                                                  //@synthesize optionKeyPressed=_optionKeyPressed - In the implementation block
+(id)keyPathsForValuesAffectingRecordButtonEnabled;
+(id)keyPathsForValuesAffectingRecordButtonImage;
-(void)setRecordButton:(NSButton *)arg1 ;
-(void)setFinishingRecordingProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setRedDotHidden:(char)arg1 ;
-(id)recordButtonPauseImage;
-(id)recordButtonRecordImage;
-(id)recordButtonStopImage;
-(void)syncRecordButtonWithCaptureStatus;
-(char)recordButtonEnabled;
-(NSImage *)recordButtonImage;
-(NSProgressIndicator *)finishingRecordingProgressIndicator;
-(NSButton *)recordButton;
-(void)setRecordButtonEnabled:(char)arg1 ;
-(void)setRecordButtonImage:(NSImage *)arg1 ;
-(char)isRedDotHidden;
-(void)setOptionKeyPressed:(char)arg1 ;
-(char)optionKeyPressed;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)flagsChanged:(id)arg1 ;
@end

