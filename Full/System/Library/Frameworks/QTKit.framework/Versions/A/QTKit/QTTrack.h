/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTTrackHelper, QTMovie, QTInvalidationSet;

@interface QTTrack : NSObject {

	long long _flags;
	QTTrackHelper* _trackHelper;
	QTMovie* _movie;
	QTInvalidationSet* _children;
	int _cachedTrackID;
	long long _reserved1;
	long long _reserved2;
	long long _reserved3;
	long long _reserved4;

}
+(id)trackWithTrackID:(long long)arg1 error:(id*)arg2 andMovie:(id)arg3 ;
+(id)allReadableAttributeKeysForVisibility:(unsigned long long)arg1 ;
+(id)attributeKeysDisallowedForReadingUnderPlaybackAPIRestriction;
+(id)allWritableAttributeKeysForVisibility:(unsigned long long)arg1 ;
+(id)attributeKeysDisallowedForWritingUnderPlaybackAPIRestriction;
+(id)trackWithProxy:(int)arg1 ;
-(id)creationTime;
-(unsigned long long)dataSize;
-(id)modificationTime;
-(long long)timeScale;
-(int)audioChannelCount;
-(float)audioSampleRate;
-(int)audioSampleSize;
-(id)dataFormat;
-(int)dataRate;
-(void)setHorizontalOffset:(float)arg1 ;
-(float)horizontalOffset;
-(SCD_Struct_QT12)offset;
-(long long)trackID;
-(id)commonMetadata;
-(id)href;
-(void)setHref:(id)arg1 ;
-(float)naturalHeight;
-(float)naturalWidth;
-(id)mediaType;
-(CGSize)naturalSize;
-(void)setMuted:(char)arg1 ;
-(id)chapterlist;
-(id)channels;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)hasAudio;
-(CGSize)currentSize;
-(void)setCurrentSize:(CGSize)arg1 ;
-(AudioStreamBasicDescription*)audioStreamBasicDescription;
-(id)initWithProxy:(int)arg1 ;
-(char)restrictedToPlaybackAPI;
-(void)setRestrictedToPlaybackAPI:(char)arg1 ;
-(char)usesFigMedia;
-(char)usesQuickTime;
-(id)undoAttributes;
-(int)objectToken;
-(id)alternate;
-(long long)isoLanguageCode;
-(id)isoLanguageCodeAsString;
-(id)extendedLanguageTagString;
-(char)isExcludedFromAutoSelection;
-(id)referenceByType:(unsigned)arg1 index:(long long)arg2 ;
-(void)setAnnotation:(id)arg1 ofType:(unsigned)arg2 ;
-(UserDataRecord*)userDataRef;
-(id)userDataOfType:(unsigned)arg1 ;
-(id)userDataOfType:(unsigned)arg1 atIndex:(long long)arg2 ;
-(char)setUserData:(id)arg1 ofType:(unsigned)arg2 ;
-(char)setUserData:(id)arg1 ofType:(unsigned)arg2 atIndex:(long long)arg3 ;
-(char)addUserData:(id)arg1 ofType:(unsigned)arg2 ;
-(long long)userDataCountOfType:(unsigned)arg1 ;
-(void)insertEmptySegmentAt:(SCD_Struct_QT16)arg1 ;
-(void)deleteSegment:(SCD_Struct_QT16)arg1 ;
-(void)scaleSegment:(SCD_Struct_QT16)arg1 newDuration:(SCD_Struct_QT12)arg2 ;
-(void)addImage:(id)arg1 forDuration:(SCD_Struct_QT12)arg2 withAttributes:(id)arg3 ;
-(void)addImage:(id)arg1 forDuration:(SCD_Struct_QT12)arg2 atTime:(SCD_Struct_QT12)arg3 withAttributes:(id)arg4 ;
-(char)addCVImageBuffer:(CVBufferRef)arg1 forRange:(SCD_Struct_QT16)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(void)insertSegmentOfTrack:(id)arg1 timeRange:(SCD_Struct_QT16)arg2 atTime:(SCD_Struct_QT12)arg3 ;
-(void)insertSegmentOfTrack:(id)arg1 fromRange:(SCD_Struct_QT16)arg2 scaledToRange:(SCD_Struct_QT16)arg3 ;
-(void)setUndoAttributes:(id)arg1 ;
-(SCD_Struct_QT12)frameStartTime:(SCD_Struct_QT12)arg1 ;
-(SCD_Struct_QT12)frameEndTime:(SCD_Struct_QT12)arg1 ;
-(SCD_Struct_QT12)keyframeStartTime:(SCD_Struct_QT12)arg1 ;
-(float)balance;
-(float)bass;
-(float)gain;
-(float)treble;
-(void)setBalance:(float)arg1 ;
-(void)setBass:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(void)setTreble:(float)arg1 ;
-(char)muted;
-(AudioChannelLayout*)audioChannelLayout;
-(void)generateApertureModeDimensions;
-(void)removeApertureModeDimensions;
-(char)hasApertureModeDimensions;
-(char)isDRMProtected;
-(char)isDRMAuthorized;
-(char)canDRMInteractWithUser;
-(void)setCanDRMInteractWithUser:(char)arg1 ;
-(id)userDataAnnotations;
-(id)timeCodeTrack;
-(void)rotate:(double)arg1 around:(CGPoint)arg2 ;
-(void)scale:(float)arg1 around:(CGPoint)arg2 ;
-(void)skew:(CGPoint)arg1 around:(CGPoint)arg2 ;
-(void)flipX;
-(void)flipY;
-(char)hasWiredActions;
-(char)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id*)arg3 ;
-(char)setMetadata:(id)arg1 forFormat:(id)arg2 ;
-(float)floatFrameRate;
-(void)_learnAboutStream:(id)arg1 ;
-(void)_forgetAboutStream:(id)arg1 ;
-(id)audioFormatString;
-(id)videoFormatString;
-(id)streamAtIndex:(int)arg1 ;
-(id)initWithTrackHelper:(id)arg1 error:(id*)arg2 ;
-(id)initWithTrackID:(long long)arg1 error:(id*)arg2 andMovie:(id)arg3 ;
-(id)mediaRetained;
-(id)trackAttributes;
-(char)_isAttributeAvailableForWriting:(id)arg1 exception:(id*)arg2 ;
-(void)setTrackAttributes:(id)arg1 ;
-(char)_isAttributeAvailableForReading:(id)arg1 exception:(id*)arg2 ;
-(CGRect)scaledBounds;
-(int)fixedFrameRate;
-(id)displayNameShort;
-(id)codecName;
-(id)mediaName;
-(id)mediaTypeInMedia;
-(id)mediaSubType;
-(SCD_Struct_QT16)preloadRange;
-(void)setPreloadRange:(SCD_Struct_QT16)arg1 ;
-(char)usageInMovie;
-(char)usageInPoster;
-(char)usageInPreview;
-(void)setUsageInMovie:(char)arg1 ;
-(void)setUsageInPoster:(char)arg1 ;
-(void)setUsageInPreview:(char)arg1 ;
-(char)isVisual;
-(char)highQualityVideo;
-(char)deinterlaceVideo;
-(char)singleFieldVideo;
-(char)neverPurgeHint;
-(char)preloadHint;
-(void)setHighQualityVideo:(char)arg1 ;
-(void)setDeinterlaceVideo:(char)arg1 ;
-(void)setSingleFieldVideo:(char)arg1 ;
-(void)setNeverPurgeHint:(char)arg1 ;
-(void)setPreloadHint:(char)arg1 ;
-(char)isChapterTrack;
-(CGSize)sourceDimensions;
-(CGPoint)sourcePosition;
-(id)formatSummary;
-(void)setScaledBounds:(CGRect)arg1 ;
-(void)setSourceDimensions:(CGSize)arg1 ;
-(void)setTransferMode:(long long)arg1 withColor:(id)arg2 ;
-(RGBColor)operationColor;
-(void)setOperationColor:(RGBColor)arg1 ;
-(void)setMatrix:(MatrixRecord)arg1 ;
-(void)setChapterlist:(id)arg1 ;
-(void)setSourcePosition:(CGPoint)arg1 ;
-(void)setReference:(id)arg1 refType:(unsigned)arg2 index:(long long)arg3 ;
-(id)sampleSizeString;
-(id)sampleRateString;
-(long long)languageAsMacOrMP4Code;
-(MatrixRecord)defaultMatrix;
-(Rect)defaultRect;
-(char)hasMask;
-(void)setMaskWithDataRef:(id)arg1 ;
-(void)invertMask;
-(void)clearMask;
-(MatrixRecord)transformationMatrix;
-(QTPFixedQuad)defaultQuad;
-(QTPFixedQuad)transformedQuad;
-(void)setTransformationMatrix:(MatrixRecord)arg1 ;
-(void)setTransformedQuad:(QTPFixedQuad)arg1 ;
-(void)rotate:(double)arg1 ;
-(void)setCurrentWidth:(float)arg1 sizeMode:(long long)arg2 preserveAspect:(char)arg3 ;
-(void)setCurrentHeight:(float)arg1 sizeMode:(long long)arg2 preserveAspect:(char)arg3 ;
-(float)currentWidth:(long long)arg1 ;
-(float)currentHeight:(long long)arg1 ;
-(id)matrixAsData;
-(id)currentMatrixAsData;
-(id)defaultMatrixAsData;
-(void)setMatrixData:(id)arg1 ;
-(void)resetMatrix;
-(id)operationColorAsNSColor;
-(void)setOperationColorWithNSColor:(id)arg1 ;
-(float)playerTransparency;
-(void)setPlayerTransparency:(float)arg1 ;
-(float)displayedWidth;
-(float)displayedHeight;
-(id)subtitlesLanguageString;
-(id)metaDataDisplayName;
-(id)timeCodeStringForTime:(SCD_Struct_QT12)arg1 ;
-(char)isTimeCode;
-(char)isTimeCodeDropFrame;
-(char)isAudioVariableRate;
-(void)setBassGain:(int)arg1 ;
-(void)setTrebleGain:(int)arg1 ;
-(SampleDescription*)getSampleDescriptionHandle;
-(SampleDescription*)getSampleDescriptionHandle:(long long)arg1 ;
-(SoundDescriptionV2*)getSoundDescriptionV2Handle;
-(SoundDescriptionV2*)getSoundDescriptionV2Handle:(long long)arg1 ;
-(short)property:(unsigned)arg1 propertyID:(unsigned)arg2 propertySize:(unsigned long long)arg3 propertyValuePtr:(void*)arg4 ;
-(short)setProperty:(unsigned)arg1 propertyID:(unsigned)arg2 propertySize:(unsigned long long)arg3 propertyValuePtr:(void*)arg4 ;
-(SCD_Struct_QT12)mediaTimeForTrackTime:(SCD_Struct_QT12)arg1 ;
-(char)hasMPEGCharacteristics;
-(id)depthString;
-(CGSize)apertureModeDimensionsForMode:(id)arg1 ;
-(void)setApertureModeDimensions:(CGSize)arg1 forMode:(id)arg2 ;
-(long long)streamingBitsPerSecond;
-(float)streamingPercentLost;
-(float)streamingBufferDuration;
-(void)registerForPropertyChanges;
-(void)unregisterForPropertyChanges;
-(void)setExtendedLanguageTagString:(id)arg1 ;
-(void)_learnAboutMedia:(id)arg1 ;
-(void)_forgetAboutMedia:(id)arg1 ;
-(void)setTrackHelper:(id)arg1 ;
-(id)trackHelper;
-(id)streams;
-(char)setColorProfile:(id)arg1 ofType:(id)arg2 ;
-(id)movie;
-(float)verticalOffset;
-(CGAffineTransform)affineTransform;
-(id)annotations;
-(void)setVerticalOffset:(float)arg1 ;
-(long long)transferMode;
-(void)setTransferMode:(long long)arg1 ;
-(void)setAnnotations:(id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(short)layer;
-(id)description;
-(void)invalidate;
-(CGPoint)position;
-(void)setLayer:(short)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setEnabled:(char)arg1 ;
-(int)index;
-(char)isEnabled;
-(long long)frameRate;
-(void)setAlternate:(id)arg1 ;
-(MatrixRecord)matrix;
-(id)undoManager;
-(id)displayName;
-(void)setUndoManager:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)mask;
-(SCD_Struct_QT16)range;
-(long long)language;
-(int)depth;
-(void)setVolume:(float)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(float)volume;
-(id)attributeForKey:(id)arg1 ;
-(id)media;
-(void)setMaskImage:(id)arg1 ;
-(id)maskImage;
-(void)setMask:(id)arg1 ;
-(void)setLanguage:(long long)arg1 ;
-(void)setOffset:(SCD_Struct_QT12)arg1 ;
-(int)proxy;
-(void)dispose;
-(void)setRange:(SCD_Struct_QT16)arg1 ;
-(id)fullName;
-(void)setFullName:(id)arg1 ;
-(id)format;
-(void)setWidth:(int)arg1 height:(int)arg2 ;
-(CGSize)dimensions;
-(void)setDimensions:(CGSize)arg1 ;
@end

