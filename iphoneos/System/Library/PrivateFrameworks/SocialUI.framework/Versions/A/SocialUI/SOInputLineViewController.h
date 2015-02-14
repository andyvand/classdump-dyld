/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <SocialUI/NSStackViewDelegate.h>
#import <SocialUI/SOInputLineDelegate.h>
#import <SocialUI/CPKPopoverDelegate.h>
#import <SocialUI/AVAudioRecorderDelegate.h>

@protocol SOInputLineViewControllerDelegate;
@class CPKPopover, SOChatDisplayController, NSView, SORecordingWaveformContainerView, SOPreviewingWaveformContainerView, SOFlexibleScrollView, SOInputLine, NSButton, NSLayoutConstraint, IMAccount, SORecordingWaveformView, NSTextField, AVAudioRecorder, AVAudioPlayer, NSAttributedString, NSTextStorage, NSStackView, NSArray, NSString;

@interface SOInputLineViewController : NSViewController <NSStackViewDelegate, SOInputLineDelegate, CPKPopoverDelegate, AVAudioRecorderDelegate> {

	CPKPopover* _smileyPopover;
	char _delegateRespondsToInputLineTextDidChange;
	char _delegateRespondsToInputLineDidEnter;
	char _delegateRespondsToUndoManager;
	char _delegateRespondsToCompletionsForPartialString;
	char _alwaysHideSmileyButton;
	char _showsSmileyButton;
	char _alwaysHideAudioMessageButton;
	char _showAudioMessageButton;
	char _showStopRecordingButton;
	char _showPreviewingButtons;
	char _isRecording;
	char _isPreviewingRecording;
	id<SOInputLineViewControllerDelegate> _delegate;
	SOChatDisplayController* _chatDisplayController;
	NSView* _inputBorderView;
	SORecordingWaveformContainerView* _recordingView;
	SOPreviewingWaveformContainerView* _previewingView;
	SOFlexibleScrollView* _scrollView;
	SOInputLine* _inputLine;
	double _leadingTextInputMargin;
	double _trailingTextInputMargin;
	NSButton* _smileyButton;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _maximumHeightConstraint;
	NSLayoutConstraint* _fontSubstitutionMinimumHeight;
	NSLayoutConstraint* _smileyButtonWidthConstraint;
	NSLayoutConstraint* _inputBorderContentsTrailingConstraint;
	IMAccount* _watchedAccount;
	SORecordingWaveformView* _waveformView;
	NSTextField* _audioRecordingTimestamp;
	NSButton* _audioMessageButton;
	NSView* _previewingButtonsView;
	NSButton* _cancelRecordingButton;
	NSButton* _sendRecordingButton;
	NSButton* _stopRecordingButton;
	AVAudioRecorder* _recorder;
	AVAudioPlayer* _player;

}

@property (assign,nonatomic) id<SOInputLineViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SOChatDisplayController * chatDisplayController;                                //@synthesize chatDisplayController=_chatDisplayController - In the implementation block
@property (nonatomic,retain) NSView * inputBorderView;                                                       //@synthesize inputBorderView=_inputBorderView - In the implementation block
@property (nonatomic,retain) SORecordingWaveformContainerView * recordingView;                               //@synthesize recordingView=_recordingView - In the implementation block
@property (nonatomic,retain) SOPreviewingWaveformContainerView * previewingView;                             //@synthesize previewingView=_previewingView - In the implementation block
@property (nonatomic,retain) SOFlexibleScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SOInputLine * inputLine;                                                        //@synthesize inputLine=_inputLine - In the implementation block
@property (assign,nonatomic) double minimumHeight; 
@property (assign,nonatomic) double maximumHeight; 
@property (nonatomic,retain) NSAttributedString * inputLineContents; 
@property (nonatomic,readonly) NSTextStorage * textStorage; 
@property (assign,nonatomic) double leadingTextInputMargin;                                                  //@synthesize leadingTextInputMargin=_leadingTextInputMargin - In the implementation block
@property (assign,nonatomic) double trailingTextInputMargin;                                                 //@synthesize trailingTextInputMargin=_trailingTextInputMargin - In the implementation block
@property (assign,nonatomic) char alwaysHideSmileyButton;                                                    //@synthesize alwaysHideSmileyButton=_alwaysHideSmileyButton - In the implementation block
@property (assign,nonatomic) char showsSmileyButton;                                                         //@synthesize showsSmileyButton=_showsSmileyButton - In the implementation block
@property (assign,nonatomic) char alwaysHideAudioMessageButton;                                              //@synthesize alwaysHideAudioMessageButton=_alwaysHideAudioMessageButton - In the implementation block
@property (assign,nonatomic) char showAudioMessageButton;                                                    //@synthesize showAudioMessageButton=_showAudioMessageButton - In the implementation block
@property (assign,nonatomic) char showStopRecordingButton;                                                   //@synthesize showStopRecordingButton=_showStopRecordingButton - In the implementation block
@property (assign,nonatomic) char showPreviewingButtons;                                                     //@synthesize showPreviewingButtons=_showPreviewingButtons - In the implementation block
@property (assign,nonatomic) char isRecording;                                                               //@synthesize isRecording=_isRecording - In the implementation block
@property (nonatomic,readonly) NSStackView * stackView; 
@property (nonatomic,readonly) NSArray * audioMessageButtonLayoutConstraints; 
@property (nonatomic,readonly) NSArray * stopRecordingButtonLayoutConstraints; 
@property (nonatomic,readonly) NSArray * recordingViewLayoutConstraints; 
@property (nonatomic,readonly) NSArray * previewingViewLayoutConstraints; 
@property (nonatomic,readonly) NSArray * previewingButtonsViewLayoutConstraints; 
@property (nonatomic,retain) NSButton * smileyButton;                                                        //@synthesize smileyButton=_smileyButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * minimumHeightConstraint;                            //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * maximumHeightConstraint;                            //@synthesize maximumHeightConstraint=_maximumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fontSubstitutionMinimumHeight;                             //@synthesize fontSubstitutionMinimumHeight=_fontSubstitutionMinimumHeight - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * smileyButtonWidthConstraint;                        //@synthesize smileyButtonWidthConstraint=_smileyButtonWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * inputBorderContentsTrailingConstraint;              //@synthesize inputBorderContentsTrailingConstraint=_inputBorderContentsTrailingConstraint - In the implementation block
@property (nonatomic,retain) IMAccount * watchedAccount;                                                     //@synthesize watchedAccount=_watchedAccount - In the implementation block
@property (nonatomic,retain) SORecordingWaveformView * waveformView;                                         //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,retain) NSTextField * audioRecordingTimestamp;                                          //@synthesize audioRecordingTimestamp=_audioRecordingTimestamp - In the implementation block
@property (nonatomic,retain) NSButton * audioMessageButton;                                                  //@synthesize audioMessageButton=_audioMessageButton - In the implementation block
@property (nonatomic,retain) NSView * previewingButtonsView;                                                 //@synthesize previewingButtonsView=_previewingButtonsView - In the implementation block
@property (nonatomic,retain) NSButton * cancelRecordingButton;                                               //@synthesize cancelRecordingButton=_cancelRecordingButton - In the implementation block
@property (nonatomic,retain) NSButton * sendRecordingButton;                                                 //@synthesize sendRecordingButton=_sendRecordingButton - In the implementation block
@property (nonatomic,retain) NSButton * stopRecordingButton;                                                 //@synthesize stopRecordingButton=_stopRecordingButton - In the implementation block
@property (nonatomic,retain) AVAudioRecorder * recorder;                                                     //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,retain) AVAudioPlayer * player;                                                         //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char isPreviewingRecording;                                                     //@synthesize isPreviewingRecording=_isPreviewingRecording - In the implementation block
@property (nonatomic,readonly) char containsAudioMessage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)soInputLineViewBorderColor;
+(CGRect)_balloonCenter;
+(id)_roundedImage;
+(CGRect)_roundedCenter;
-(AVAudioPlayer *)player;
-(void)stopRecording;
-(char)isRecording;
-(SOChatDisplayController *)chatDisplayController;
-(void)setChatDisplayController:(SOChatDisplayController *)arg1 ;
-(char)inputLineUsingiMessageService:(id)arg1 ;
-(id)defaultTypingAttributesForInputLine:(id)arg1 ;
-(char)inputLineShouldInsertNewLine:(id)arg1 ;
-(char)inputLine:(id)arg1 canAttachFilesAtURLs:(id)arg2 ;
-(char)containsAudioMessage;
-(SOInputLine *)inputLine;
-(void)setInputLine:(SOInputLine *)arg1 ;
-(SORecordingWaveformView *)waveformView;
-(void)setWaveformView:(SORecordingWaveformView *)arg1 ;
-(char)isPreviewingRecording;
-(void)cancelRecording;
-(void)_chatDisplayControllerRecipientsDidChange;
-(void)_chatDisplayControllerSendingAccountDidChange;
-(void)_didResignWindowChange:(id)arg1 ;
-(void)clearInputLine;
-(void)_updatePlaceholderText;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(NSLayoutConstraint *)maximumHeightConstraint;
-(void)_updateEdgeInsets;
-(void)_updateSmileyButtonVisibility;
-(char)showsSmileyButton;
-(void)_updateAudioMessageButtonVisibilty;
-(char)showAudioMessageButton;
-(char)showStopRecordingButton;
-(void)_updateStopRecordingButtonVisibility;
-(char)showPreviewingButtons;
-(void)_updatePreviewingButtonsVisibility;
-(NSButton *)audioMessageButton;
-(NSButton *)stopRecordingButton;
-(NSView *)previewingButtonsView;
-(SORecordingWaveformContainerView *)recordingView;
-(SOPreviewingWaveformContainerView *)previewingView;
-(void)startRecording;
-(void)sendRecording;
-(void)setShowsSmileyButton:(char)arg1 ;
-(void)setShowAudioMessageButton:(char)arg1 ;
-(void)setWatchedAccount:(IMAccount *)arg1 ;
-(char)alwaysHideSmileyButton;
-(NSButton *)smileyButton;
-(NSLayoutConstraint *)smileyButtonWidthConstraint;
-(NSLayoutConstraint *)inputBorderContentsTrailingConstraint;
-(char)alwaysHideAudioMessageButton;
-(NSView *)inputBorderView;
-(void)setShowPreviewingButtons:(char)arg1 ;
-(void)setShowStopRecordingButton:(char)arg1 ;
-(NSButton *)sendRecordingButton;
-(void)setIsRecording:(char)arg1 ;
-(void)_transitionInputLineIntoRecording;
-(void)_updateVoiceMetering;
-(NSTextField *)audioRecordingTimestamp;
-(void)_inputLineUpdateTimeStamp:(id)arg1 ;
-(void)_inputLineUpdateVoiceMetering:(id)arg1 ;
-(void)setIsPreviewingRecording:(char)arg1 ;
-(void)_cleanupRecording;
-(void)_transitionInputLineIntoMessaging;
-(double)leadingTextInputMargin;
-(double)trailingTextInputMargin;
-(void)_transitionInputLineIntoPreviewRecording;
-(NSArray *)audioMessageButtonLayoutConstraints;
-(NSArray *)previewingButtonsViewLayoutConstraints;
-(NSArray *)recordingViewLayoutConstraints;
-(NSArray *)previewingViewLayoutConstraints;
-(NSLayoutConstraint *)fontSubstitutionMinimumHeight;
-(void)setFontSubstitutionMinimumHeight:(NSLayoutConstraint *)arg1 ;
-(double)minimumHeight;
-(NSButton *)cancelRecordingButton;
-(void)setRecorder:(AVAudioRecorder *)arg1 ;
-(char)characterPickerPopover:(id)arg1 didSelectCharacter:(id)arg2 ;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(char)arg2 ;
-(void)setMinimumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)setMaximumHeight:(double)arg1 ;
-(NSAttributedString *)inputLineContents;
-(void)setInputLineContents:(NSAttributedString *)arg1 ;
-(void)setLeadingTextInputMargin:(double)arg1 ;
-(void)setTrailingTextInputMargin:(double)arg1 ;
-(void)setAlwaysHideSmileyButton:(char)arg1 ;
-(void)setAlwaysHideAudioMessageButton:(char)arg1 ;
-(NSArray *)stopRecordingButtonLayoutConstraints;
-(void)showSmileyPicker:(id)arg1 ;
-(void)selectVoiceMessage:(id)arg1 ;
-(void)cancelRecording:(id)arg1 ;
-(void)sendRecording:(id)arg1 ;
-(void)stopRecording:(id)arg1 ;
-(void)resetInputLine;
-(void)applyMessageFormatToInputLine;
-(void)setInputBorderView:(NSView *)arg1 ;
-(void)setRecordingView:(SORecordingWaveformContainerView *)arg1 ;
-(void)setPreviewingView:(SOPreviewingWaveformContainerView *)arg1 ;
-(void)setSmileyButton:(NSButton *)arg1 ;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMaximumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSmileyButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setInputBorderContentsTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(IMAccount *)watchedAccount;
-(void)setAudioRecordingTimestamp:(NSTextField *)arg1 ;
-(void)setAudioMessageButton:(NSButton *)arg1 ;
-(void)setPreviewingButtonsView:(NSView *)arg1 ;
-(void)setCancelRecordingButton:(NSButton *)arg1 ;
-(void)setSendRecordingButton:(NSButton *)arg1 ;
-(void)setStopRecordingButton:(NSButton *)arg1 ;
-(void)setDelegate:(id<SOInputLineViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setPlayer:(AVAudioPlayer *)arg1 ;
-(id<SOInputLineViewControllerDelegate>)delegate;
-(NSTextStorage *)textStorage;
-(void)textDidChange:(id)arg1 ;
-(id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(id)undoManagerForTextView:(id)arg1 ;
-(void)viewDidLoad;
-(SOFlexibleScrollView *)scrollView;
-(void)setScrollView:(SOFlexibleScrollView *)arg1 ;
-(NSStackView *)stackView;
-(void)stackView:(id)arg1 didReattachViews:(id)arg2 ;
-(AVAudioRecorder *)recorder;
@end

