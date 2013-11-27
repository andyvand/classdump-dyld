/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CoreThemeDocument, CUIMutableCommonAssetStorage, NSMutableArray, NSArray, NSString, TDLogger, NSThread;

@interface TDDistiller : NSObject {

	CoreThemeDocument* document;
	CUIMutableCommonAssetStorage* assetStore;
	NSMutableArray* renditionEntries;
	NSArray* _changedProductions;
	NSArray* _mainThreadPerformRunLoopModes;
	BOOL _incremental;
	BOOL _cancelled;
	BOOL _successful;
	BOOL _finished;
	NSString* _assetStoreVersionString;
	int _assetStoreVersionNumber;
	TDLogger* _logger;
	NSString* _accumulatedErrorDescription;
	NSThread* _callbackThread;
	/*^block*/ id _oldCompletionHandler;
	/*^block*/ id _completionHandler;

}

@property (getter=isIncremental) BOOL incremental;                                //@synthesize incremental=_incremental - In the implementation block
@property (copy) NSString * assetStoreVersionString;                              //@synthesize assetStoreVersionString=_assetStoreVersionString - In the implementation block
@property (assign) int assetStoreVersionNumber;                                   //@synthesize assetStoreVersionNumber=_assetStoreVersionNumber - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                    //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isSuccessful) BOOL successful;                                  //@synthesize successful=_successful - In the implementation block
@property (retain) TDLogger * logger;                                             //@synthesize logger=_logger - In the implementation block
@property (getter=isFinished) BOOL finished;                                      //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSString * accumulatedErrorDescription;              //@synthesize accumulatedErrorDescription=_accumulatedErrorDescription - In the implementation block
@property (retain) NSThread * callbackThread;                                     //@synthesize callbackThread=_callbackThread - In the implementation block
@property (copy) id oldCompletionHandler;                                         //@synthesize oldCompletionHandler=_oldCompletionHandler - In the implementation block
@property (copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setFinished:(BOOL)arg1 ;
-(void)waitUntilFinished;
-(void)dealloc;
-(/*^block*/ id)completionHandler;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)isFinished;
-(void)_logError:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 ;
-(int)assetStoreVersionNumber;
-(void)setAssetStoreVersionNumber:(int)arg1 ;
-(id)assetStoreVersionString;
-(void)setAssetStoreVersionString:(id)arg1 ;
-(BOOL)isIncremental;
-(void)beginDistillWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)isSuccessful;
-(id)accumulatedErrorDescription;
-(void)setAccumulatedErrorDescription:(id)arg1 ;
-(void)_accumulateErrorDescription:(id)arg1 ;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 versionString:(id)arg4 ;
-(BOOL)_setupWithOutputPath:(id)arg1 attemptIncremental:(BOOL)arg2 ;
-(void)setOldCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_logErrorAndAccumulateDescription:(id)arg1 ;
-(id)_keyDataFromKey:(const renditionkeytoken*)arg1 ;
-(void)_logInfo:(id)arg1 ;
-(BOOL)_sortRenditionEntries;
-(void)_storeRenditions;
-(void)setAsset:(id)arg1 withKey:(const renditionkeytoken*)arg2 fromRenditionSpec:(id)arg3 ;
-(id)_renditionsWithError:(id*)arg1 ;
-(id)_productionForRenditionSpec:(id)arg1 ;
-(BOOL)_distillColorDefinitions:(id)arg1 ;
-(BOOL)_distillFonts:(id)arg1 ;
-(BOOL)_distillNamedElements:(id)arg1 ;
-(id)zeroCodeArtworkInfoOfType:(int)arg1 error:(id*)arg2 ;
-(BOOL)distillZeroCodeArtworkInfo:(id)arg1 ofType:(int)arg2 ;
-(BOOL)distillZeroCodeArtworkInfoOfType:(int)arg1 ;
-(BOOL)_distillCursorFacetDefinitions:(id)arg1 ;
-(void)_distillDebuggingInfoForConstants:(id)arg1 isElement:(BOOL)arg2 ;
-(void)setSuccessful:(BOOL)arg1 ;
-(void)markDistillationAsFinished;
-(void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 ;
-(/*^block*/ id)oldCompletionHandler;
-(BOOL)distillCustomFontSizes;
-(BOOL)distillDebuggingInfo;
-(id)_keySpecsToRemoveFromKeySpecs:(id)arg1 ;
-(unsigned)_removeRenditionsWithKeySpecs:(id)arg1 ;
-(id)_renditionsFromProductions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_recordRenditionEntryFromRendition:(id)arg1 ;
-(BOOL)sortAndStoreRenditions;
-(void)_resetDocumentUuid:(id)arg1 ;
-(void)finishDistillationWithSuccess:(BOOL)arg1 ;
-(BOOL)distillCustomColors;
-(BOOL)distillCustomFonts;
-(BOOL)distillNamedElements;
-(BOOL)distillCursorFacetDefinitions;
-(BOOL)distillRenditions;
-(void)_distillChanges:(id)arg1 ;
-(void)_distill:(id)arg1 ;
-(void)saveAndDistillWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)waitTimerDidFire:(id)arg1 ;
-(void)setCallbackThread:(id)arg1 ;
-(id)callbackThread;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 ;
-(id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3 ;
-(id)documentPath;
-(id)_copyStandardEffectDefinitions;
-(BOOL)distillZeroCodeArtworkElementAndPartIdentifiers;
-(void)distillWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)cancelDistill;
-(id)keyFormatData;
-(id)logger;
-(void)setLogger:(id)arg1 ;
-(void)setIncremental:(BOOL)arg1 ;
@end
