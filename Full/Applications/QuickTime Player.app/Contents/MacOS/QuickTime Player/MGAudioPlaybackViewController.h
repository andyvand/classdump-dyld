/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player/QuickTime Player-Structs.h>
#import <QuickTime Player/MGDocumentViewController.h>
#import <QuickTime Player/MGVisualContentContainer.h>

@class NSWindowController, AVAudioView, NSString;

@interface MGAudioPlaybackViewController : MGDocumentViewController <MGVisualContentContainer> {

	CGSize _initialViewSize;
	unsigned _inStateRestore : 1;
	SCD_Struct_MG13 _maximumTrimDuration;
	SCD_Struct_MG13 _trimControlsSavedReversePlaybackEndTime;
	SCD_Struct_MG13 _trimControlsSavedForwardPlaybackEndTime;
	NSWindowController* _parentWindowController;
	AVAudioView* _audioView;

}

@property (nonatomic,__weak,readonly) NSWindowController * parentWindowController;                 //@synthesize parentWindowController=_parentWindowController - In the implementation block
@property (__weak) AVAudioView * audioView;                                                        //@synthesize audioView=_audioView - In the implementation block
@property (nonatomic,readonly) char canTrim; 
@property (getter=isShowingTrimControls,nonatomic,readonly) char showingTrimControls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingIsShowingTrimControls;
+(void)initialize;
-(void)becomeMainViewControllerForWindowController:(id)arg1 ;
-(void)resignMainViewControllerForWindowController:(id)arg1 ;
-(CGRect)contentFrameForBoundsSize:(CGSize)arg1 ;
-(CGSize)naturalContentSize;
-(char)prefersConstrainedContentAspectRatio;
-(CGSize)maximumContentSize;
-(char)isShowingTrimControls;
-(NSWindowController *)parentWindowController;
-(char)canTrim;
-(void)startTrim:(id)arg1 ;
-(char)_canPerformSelector:(SEL)arg1 ;
-(void)startTrimForMediaClip:(id)arg1 withMaximumDuration:(SCD_Struct_MG13)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SCD_Struct_MG13)mediaClipOffsetInMediaTrack:(id)arg1 ;
-(void)presentTrimDidFailErrorForMediaClip:(id)arg1 dueToUnloadedAssetForMediaClip:(id)arg2 ;
-(AVAudioView *)audioView;
-(void)setAudioView:(AVAudioView *)arg1 ;
-(CGSize)minimumContentSize;
-(void)gotoNextChapter:(id)arg1 ;
-(void)gotoPreviousChapter:(id)arg1 ;
-(CGRect)contentFrame;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)invalidateRestorableState;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)close;
-(void)selectAll:(id)arg1 ;
-(void)loadView;
@end
