/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSResponder.h>

@protocol OS_dispatch_source, AVCaptureControllerDelegate;
@class AVCaptureSession, AVCaptureFileOutput, NSObject, AVCaptureAudioPreviewOutput, NSArray, AVCaptureQualityItem, NSNumber, AVCaptureDeviceSelectionController, AVCaptureDeviceInput, NSString;

@interface AVCaptureController : NSResponder {

	AVCaptureSession* _session;
	unsigned _sessionHasBeenSet : 1;
	AVCaptureFileOutput* _fileOutput;
	id _didStartRunningObserver;
	id _didStopRunningObserver;
	NSObject*<OS_dispatch_source> _recordingTimeAndSizeTimer;
	NSObject*<OS_dispatch_source> _audioLevelIndicatorTimer;
	AVCaptureAudioPreviewOutput* _captureAudioPreviewOutput;
	NSArray* _captureQualityItems;
	AVCaptureQualityItem* _selectedQualityItem;
	char _videoPreviewEnabled;
	char _audioPreviewEnabled;
	char _wantsDefaultConfiguration;
	char _captureSessionRunning;
	char _canStartRecording;
	float _audioPreviewVolume;
	id<AVCaptureControllerDelegate> _delegate;
	long long _status;
	double _recordedTime;
	NSNumber* _recordedFileSize;
	double _audioLevel;
	AVCaptureDeviceSelectionController* _captureDeviceSelectionController;

}

@property (readonly) AVCaptureSession * session; 
@property (readonly) char sessionHasBeenSet; 
@property (getter=isVideoPreviewEnabled) char videoPreviewEnabled;                                     //@synthesize videoPreviewEnabled=_videoPreviewEnabled - In the implementation block
@property (getter=isAudioPreviewEnabled) char audioPreviewEnabled;                                     //@synthesize audioPreviewEnabled=_audioPreviewEnabled - In the implementation block
@property (assign) char wantsDefaultConfiguration;                                                     //@synthesize wantsDefaultConfiguration=_wantsDefaultConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<AVCaptureControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) AVCaptureDeviceInput * videoInput; 
@property (readonly) AVCaptureDeviceInput * audioInput; 
@property (readonly) AVCaptureFileOutput * fileOutput; 
@property (readonly) long long status;                                                                 //@synthesize status=_status - In the implementation block
@property (assign) double recordedTime;                                                                //@synthesize recordedTime=_recordedTime - In the implementation block
@property (retain) NSNumber * recordedFileSize;                                                        //@synthesize recordedFileSize=_recordedFileSize - In the implementation block
@property (getter=isRecording,readonly) char recording; 
@property (getter=isFinishingRecording) char finishingRecording; 
@property (getter=isCaptureSessionRunning) char captureSessionRunning;                                 //@synthesize captureSessionRunning=_captureSessionRunning - In the implementation block
@property (readonly) CGSize contentDimensions; 
@property (assign) double audioLevel;                                                                  //@synthesize audioLevel=_audioLevel - In the implementation block
@property (assign,nonatomic) float audioPreviewVolume;                                                 //@synthesize audioPreviewVolume=_audioPreviewVolume - In the implementation block
@property (readonly) NSArray * videoInputSourceItems; 
@property (readonly) NSArray * audioInputSourceItems; 
@property (copy) NSArray * captureQualityItems; 
@property (retain) AVCaptureQualityItem * selectedQualityItem; 
@property (readonly) NSString * deviceDisabledDescription; 
@property (readonly) NSString * deviceErrorDescription; 
@property (assign) char canStartRecording;                                                             //@synthesize canStartRecording=_canStartRecording - In the implementation block
@property (readonly) char canPauseRecording; 
@property (readonly) char canResumeRecording; 
@property (readonly) char canStopRecording; 
@property (retain) AVCaptureDeviceSelectionController * captureDeviceSelectionController;              //@synthesize captureDeviceSelectionController=_captureDeviceSelectionController - In the implementation block
+(id)keyPathsForValuesAffectingVideoInput;
+(id)keyPathsForValuesAffectingAudioInput;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingRecording;
+(id)keyPathsForValuesAffectingVideoInputSourceItems;
+(id)keyPathsForValuesAffectingAudioInputSourceItems;
+(id)keyPathsForValuesAffectingDeviceDisabledDescription;
+(id)keyPathsForValuesAffectingDeviceErrorDescription;
+(id)keyPathsForValuesAffectingCanPauseRecording;
+(id)keyPathsForValuesAffectingCanResumeRecording;
+(id)keyPathsForValuesAffectingCanStopRecording;
-(CGSize)contentDimensions;
-(char)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(char)arg3 ;
-(void)_handleSpaceKeyWithEvent:(id)arg1 ;
-(void)changeAudioPreviewVolumeToMaximum:(id)arg1 ;
-(void)increaseAudioPreviewVolume:(id)arg1 ;
-(void)changeAudioPreviewVolumeToMinimum:(id)arg1 ;
-(void)decreaseAudioPreviewVolume:(id)arg1 ;
-(char)canStartRecording;
-(void)startRecording:(id)arg1 ;
-(char)canPauseRecording;
-(void)pauseRecording:(id)arg1 ;
-(char)canStopRecording;
-(char)canResumeRecording;
-(void)resumeRecording:(id)arg1 ;
-(float)audioPreviewVolume;
-(void)setAudioPreviewVolume:(float)arg1 ;
-(AVCaptureDeviceInput *)videoInput;
-(AVCaptureDeviceInput *)audioInput;
-(char)sessionHasBeenSet;
-(void)createDefaultSessionAndFileOutputAsynchronously;
-(void)setSession:(id)arg1 videoPreviewEnabled:(char)arg2 audioPreviewEnabled:(char)arg3 ;
-(AVCaptureFileOutput *)fileOutput;
-(void)setCaptureQualityItems:(NSArray *)arg1 ;
-(AVCaptureQualityItem *)selectedQualityItem;
-(NSArray *)captureQualityItems;
-(void)setSelectedQualityItem:(AVCaptureQualityItem *)arg1 ;
-(char)isFinishingRecording;
-(void)setFinishingRecording:(char)arg1 ;
-(id)_defaultCaptureQualityItems;
-(void)stopAudioLevelIndicatorTimer;
-(id)_firstDeviceInputWithConnectionOfMediaType:(id)arg1 fromSession:(id)arg2 ;
-(void)_createDefaultSessionAndFileOutputAsynchronously:(char)arg1 ;
-(void)setFileOutput:(AVCaptureFileOutput *)arg1 ;
-(void)setVideoPreviewEnabled:(char)arg1 ;
-(void)setAudioPreviewEnabled:(char)arg1 ;
-(void)updateCanStartRecording;
-(void)updateCaptureSessionRunning;
-(void)setCaptureDeviceSelectionController:(AVCaptureDeviceSelectionController *)arg1 ;
-(void)_updateVideoInputForSession:(id)arg1 ;
-(void)_updateAudioInputForSession:(id)arg1 ;
-(void)startAudioLevelIndicatorTimer;
-(void)startRecordingTimeAndSizeTimer;
-(void)stopRecordingTimeAndSizeTimer;
-(void)updateRecordingTimeAndSize;
-(void)setRecordedFileSize:(NSNumber *)arg1 ;
-(void)setRecordedTime:(double)arg1 ;
-(void)setCaptureSessionRunning:(char)arg1 ;
-(AVCaptureDeviceSelectionController *)captureDeviceSelectionController;
-(void)updateAudioLevel;
-(void)setAudioLevel:(double)arg1 ;
-(id)_selectedVideoSourceItem;
-(id)_inputSourceItemsForCaptureDevices:(id)arg1 selectedSourceItem:(id)arg2 mediaType:(id)arg3 ;
-(id)_selectedAudioSourceItem;
-(NSArray *)audioInputSourceItems;
-(NSArray *)videoInputSourceItems;
-(id)audioDeviceErrorDescription;
-(id)videoDeviceErrorDescription;
-(NSString *)deviceDisabledDescription;
-(NSString *)deviceErrorDescription;
-(void)setCanStartRecording:(char)arg1 ;
-(void)selectInputSourceItem:(id)arg1 ;
-(char)isVideoPreviewEnabled;
-(char)isAudioPreviewEnabled;
-(char)wantsDefaultConfiguration;
-(void)setWantsDefaultConfiguration:(char)arg1 ;
-(double)recordedTime;
-(char)isCaptureSessionRunning;
-(double)audioLevel;
-(char)isRecording;
-(NSNumber *)recordedFileSize;
-(void)stopRecording:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<AVCaptureControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<AVCaptureControllerDelegate>)delegate;
-(void)keyDown:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(AVCaptureSession *)session;
@end

