/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player/QuickTime Player-Structs.h>
#import <QuickTime Player/MGDocument.h>
#import <QuickTime Player/MGInspectionAttributeContainer.h>
#import <QuickTime Player/NSOpenSavePanelDelegate.h>
#import <QuickTime Player/MGMediaCompositionAssetProvider.h>

@protocol MGVisualContentContainer, NSObject;
@class NSArray, AVPlayerItem, MGMediaCompositionUndoController, MGMediaClipAssetCache, NSWindowController, NSMutableArray, NSMutableSet, MGDocumentViewController, MGPlayerDocumentDRMHandler, NSDate, AVPlayer, NSString, QTMovieModernizer, AVAsset, MGMediaComposition, MGMediaCompositionPlayerItemController, MGMediaCompositionEditController, MGMediaCompositionSelectionController, MGMediaClipPreviewProvider, AVPlayerController;

@interface MGPlayerDocument : MGDocument <MGInspectionAttributeContainer, NSOpenSavePanelDelegate, MGMediaCompositionAssetProvider> {

	NSArray* _assetLoaders;
	AVPlayerItem* _loadingPlayerItem;
	id _loadingPlayerItemStatusObserver;
	MGMediaCompositionUndoController* _compositionUndoController;
	MGMediaClipAssetCache* _mediaClipAssetCache;
	NSWindowController* _assetLoadingSheetWindowController;
	/*^block*/id _assetLoadingCancelHandler;
	NSMutableArray* _mediaClipAssetLoadingCompletionHandlers;
	NSMutableSet* _mediaClipAssetCacheMediaClipsToRemove;
	NSMutableArray* _playerItemUpdateCompletionHandlers;
	MGDocumentViewController*<MGVisualContentContainer> _mainViewController;
	MGPlayerDocumentDRMHandler* _playerDRMHandler;
	id<NSObject> _playerPeriodicTimeObserver;
	id _saveToOperationRepresentedObject;
	unsigned _forceModalExportProgressWindow;
	unsigned _forceSaveWithEllipsesMenuItemTitle : 1;
	unsigned _playerIsPlaying : 1;
	unsigned _isCheckingCanClose : 1;
	unsigned _isClosed : 1;
	unsigned _isTearingDownAsset : 1;
	unsigned _isLoadingAssets : 1;
	unsigned _mediaClipAssetCacheNeedsCleanup : 1;
	unsigned _hasBecomeUntitledComposition : 1;
	unsigned _isForcingAudioOnlyUI : 1;
	NSDate* _dateAtStartPlaying;
	double _playbackDuration;
	unsigned _mainWindowIsOnNonMainDisplay : 1;
	unsigned _playedOnNonMainDisplay : 1;
	AVPlayer* _player;
	NSString* _modernizedName;
	char _isObservingCompositionMediaClips;
	char _isObservingCompositionPlayerItemControllerPlayerItem;
	QTMovieModernizer* _modernizer;
	char _forcingVideoUI;
	AVAsset* _asset;
	MGMediaComposition* _composition;
	MGMediaCompositionPlayerItemController* _compositionPlayerItemController;
	MGMediaCompositionEditController* _compositionEditController;
	MGMediaCompositionSelectionController* _compositionSelectionController;
	MGMediaClipPreviewProvider* _mediaClipPreviewProvider;
	AVPlayerController* _playerController;

}

@property (nonatomic,readonly) unsigned long long mediaClipCount; 
@property (nonatomic,readonly) NSArray * mediaClipSelection; 
@property (nonatomic,readonly) double dataSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * inspectionTitle; 
@property (readonly) NSArray * inspectionAttributes; 
@property (readonly) NSArray * inspectionInformation; 
@property (readonly) NSString * displayName; 
@property (readonly) AVPlayer * player; 
@property (nonatomic,readonly) AVAsset * asset;                                                                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) MGMediaComposition * composition;                                                      //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) MGMediaCompositionPlayerItemController * compositionPlayerItemController;              //@synthesize compositionPlayerItemController=_compositionPlayerItemController - In the implementation block
@property (nonatomic,readonly) MGMediaCompositionEditController * compositionEditController;                          //@synthesize compositionEditController=_compositionEditController - In the implementation block
@property (nonatomic,readonly) MGMediaCompositionSelectionController * compositionSelectionController;                //@synthesize compositionSelectionController=_compositionSelectionController - In the implementation block
@property (nonatomic,readonly) MGMediaClipPreviewProvider * mediaClipPreviewProvider;                                 //@synthesize mediaClipPreviewProvider=_mediaClipPreviewProvider - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MG4 compositionDuration; 
@property (retain) AVPlayerController * playerController;                                                             //@synthesize playerController=_playerController - In the implementation block
@property (getter=isMediaCompositionDocument,nonatomic,readonly) char mediaCompositionDocument; 
@property (getter=isRestrictedFromEditing,readonly) char restrictedFromEditing; 
@property (getter=isRestrictedFromSaving,readonly) char restrictedFromSaving; 
@property (readonly) char canShareVideo; 
@property (readonly) char canShareAudio; 
@property (assign,getter=isForcingVideoUI,nonatomic) char forcingVideoUI;                                             //@synthesize forcingVideoUI=_forcingVideoUI - In the implementation block
@property (assign,nonatomic) char playerIsPlaying; 
+(id)keyPathsForValuesAffectingInspectionAttributes;
+(id)keyPathsForValuesAffectingInspectionInformation;
+(id)keyPathsForValuesAffectingMediaCompositionDocument;
+(id)keyPathsForValuesAffectingClosedCaptionsAvailable;
+(id)keyPathsForValuesAffectingCanShare;
+(id)keyPathsForValuesAffectingCanShareVideo;
+(id)keyPathsForValuesAffectingCanShareAudio;
+(id)keyPathsForValuesAffectingMediaClipCount;
+(id)keyPathsForValuesAffectingMediaClipSelection;
+(void)initialize;
+(char)canConcurrentlyReadDocumentsOfType:(id)arg1 ;
-(void)logMoviePlaybackStatistics;
-(id)mainViewController;
-(NSString *)inspectionTitle;
-(NSArray *)inspectionAttributes;
-(NSArray *)inspectionInformation;
-(char)isMediaCompositionDocument;
-(void)shareToiTunes:(id)arg1 ;
-(void)mainMenuNeedsUpdate:(id)arg1 ;
-(char)canExportPassthrough:(id)arg1 ;
-(void)handlePauseCommand:(id)arg1 ;
-(id)currentAudioRecordingDevice;
-(id)currentVideoRecordingDevice;
-(id)currentAudioCompression;
-(id)currentMovieCompression;
-(id)currentScreenCompression;
-(id)currentTimeInSeconds;
-(void)setCurrentTimeInSeconds:(id)arg1 ;
-(void)handleStopCommand:(id)arg1 ;
-(void)updateMainViewControllerWithoutKVONotification;
-(void)setAsset:(id)arg1 forMediaClip:(id)arg2 ;
-(void)makeCurrentPlayerItem:(id)arg1 ;
-(void)singleJobProgressSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)document:(id)arg1 shouldClose:(char)arg2 contextInfo:(void*)arg3 ;
-(void)tearDownAsset;
-(void)clearAudibleAndLegibleMenus;
-(void)cleanUpMediaClipAssetCacheIfNeeded;
-(char)canShareVideo;
-(char)canShareAudio;
-(void)loop:(id)arg1 ;
-(char)isRestrictedFromSaving;
-(id)assetForMediaClip:(id)arg1 ;
-(id)reusableAssetForMediaClip:(id)arg1 ;
-(void)assetLoadingSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)assetLoadingDidFinish;
-(void)assetLoadingDidStartWithCancelHandler:(/*^block*/id)arg1 ;
-(id)mediaClipWithPreciseDurationToReplaceMediaClip:(id)arg1 ;
-(void)setPlayerIsPlaying:(char)arg1 ;
-(char)playerIsPlaying;
-(id)powerSourceType;
-(double)dataRateForPlayerItem:(id)arg1 ;
-(double)durationRoundedToFirstTwoSignificantDigits:(double)arg1 ;
-(id)mediaCodecForPlayerItem:(id)arg1 withMediaType:(id)arg2 ;
-(char)isAirplayMirroringEnabled;
-(int)displayBrightness;
-(void)loadMissingAssetsForCompositionWithCompletionHandler:(/*^block*/id)arg1 ;
-(SCD_Struct_MG4)compositionDuration;
-(id)mediaClipWithPreciseDurationAfterReplacingMediaClip:(id)arg1 ;
-(char)replaceAllMediaClipsWithImpreciseDurations;
-(void)waitForPlayerItemToUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGImageRef)videoFrameAtTime:(SCD_Struct_MG4)arg1 ;
-(char)closedCaptionsAvailable;
-(char)isRestrictedFromEditing;
-(void)toggleForcedAudioOnly:(id)arg1 ;
-(MGMediaCompositionPlayerItemController *)compositionPlayerItemController;
-(MGMediaCompositionEditController *)compositionEditController;
-(MGMediaCompositionSelectionController *)compositionSelectionController;
-(MGMediaClipPreviewProvider *)mediaClipPreviewProvider;
-(char)isForcingVideoUI;
-(void)setForcingVideoUI:(char)arg1 ;
-(void)shareToiTunesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)shareToYouTubeAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)shareToYouTube:(id)arg1 ;
-(void)shareToYouTubeSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)progressForJobController:(id)arg1 service:(id)arg2 ;
-(NSArray *)mediaClipSelection;
-(unsigned long long)mediaClipCount;
-(unsigned long long)indexOfSelectedMediaClip:(id)arg1 ;
-(float)estimatedDataRateForAsset:(id)arg1 ;
-(void)handlePlayCommand:(id)arg1 ;
-(id)handleStepBackwardCommand:(id)arg1 ;
-(id)handleStepForwardCommand:(id)arg1 ;
-(id)handleTrimCommand:(id)arg1 ;
-(id)handleExportCommand:(id)arg1 ;
-(double)dataSize;
-(id)naturalDimensions;
-(id)dataRate;
-(void)document:(id)arg1 didSave:(char)arg2 contextInfo:(void*)arg3 ;
-(char)canShare;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(id)audioDevice;
-(void)setMuted:(char)arg1 ;
-(AVPlayer *)player;
-(char)playing;
-(AVAsset *)asset;
-(char)muted;
-(id)durationInSeconds;
-(id)init;
-(void)dealloc;
-(SCD_Struct_MG4)duration;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(void)saveDocumentTo:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(id)willPresentError:(id)arg1 ;
-(void)close;
-(void)showWindows;
-(id)undoManager;
-(NSString *)displayName;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)writableTypesForSaveOperation:(unsigned long long)arg1 ;
-(char)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)fileWrapperOfType:(id)arg1 error:(id*)arg2 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(char)prepareSavePanel:(id)arg1 ;
-(char)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 ;
-(void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)windowDidChangeScreen:(id)arg1 ;
-(char)panel:(id)arg1 validateURL:(id)arg2 error:(id*)arg3 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(MGMediaComposition *)composition;
@end
