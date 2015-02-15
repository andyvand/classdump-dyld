/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTTrackHelper.h>

@class QTMovie;

@interface QTTrack_FigMedia : QTTrackHelper {

	int _trackID;
	QTMovie* _qtMovie;
	OpaqueFigTrackReaderRef _trackReader;

}
-(id)creationTime;
-(unsigned long long)dataSize;
-(id)modificationTime;
-(long long)timeScale;
-(int)audioChannelCount;
-(float)audioSampleRate;
-(int)audioSampleSize;
-(id)dataFormat;
-(int)dataRate;
-(int)trackID;
-(id)commonMetadata;
-(id)href;
-(id)mediaType;
-(CGSize)naturalSize;
-(void)setMuted:(char)arg1 ;
-(id)chapterlist;
-(id)channels;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(void)setTrackID:(int)arg1 ;
-(id)_stringForProperty:(CFStringRef)arg1 ;
-(int)_SInt32ForProperty:(CFStringRef)arg1 ;
-(unsigned char)_booleanForProperty:(CFStringRef)arg1 ;
-(long long)_longLongForProperty:(CFStringRef)arg1 ;
-(float)_floatForProperty:(CFStringRef)arg1 ;
-(unsigned)figMediaType;
-(char)hasAudio;
-(CGSize)currentSize;
-(AudioStreamBasicDescription*)audioStreamBasicDescription;
-(opaqueCMFormatDescriptionRef)figFormatDescription;
-(void)setQTMovie:(id)arg1 ;
-(char)usesFigMedia;
-(char)usesQuickTime;
-(id)alternate;
-(long long)isoLanguageCode;
-(id)isoLanguageCodeAsString;
-(id)extendedLanguageTagString;
-(char)isExcludedFromAutoSelection;
-(id)referenceByType:(unsigned)arg1 index:(long long)arg2 ;
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
-(char)hasApertureModeDimensions;
-(char)isDRMProtected;
-(char)isDRMAuthorized;
-(char)canDRMInteractWithUser;
-(void)setCanDRMInteractWithUser:(char)arg1 ;
-(id)userDataAnnotations;
-(id)timeCodeTrack;
-(char)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id*)arg3 ;
-(char)setMetadata:(id)arg1 forFormat:(id)arg2 ;
-(float)floatFrameRate;
-(id)audioFormatString;
-(id)videoFormatString;
-(id)initWithTrackID:(int)arg1 error:(id*)arg2 forParent:(id)arg3 andMovie:(id)arg4 ;
-(id)mediaRetained;
-(CGRect)scaledBounds;
-(id)displayNameShort;
-(id)codecName;
-(id)mediaName;
-(id)mediaTypeInMedia;
-(id)mediaSubType;
-(char)isVisual;
-(char)highQualityVideo;
-(char)deinterlaceVideo;
-(char)singleFieldVideo;
-(id)formatSummary;
-(id)sampleSizeString;
-(id)sampleRateString;
-(id)subtitlesLanguageString;
-(id)metaDataDisplayName;
-(id)timeCodeStringForTime:(SCD_Struct_QT12)arg1 ;
-(char)isTimeCode;
-(char)isTimeCodeDropFrame;
-(char)isAudioVariableRate;
-(SampleDescription*)getSampleDescriptionHandle;
-(SampleDescription*)getSampleDescriptionHandle:(long long)arg1 ;
-(SoundDescriptionV2*)getSoundDescriptionV2Handle;
-(SoundDescriptionV2*)getSoundDescriptionV2Handle:(long long)arg1 ;
-(char)hasMPEGCharacteristics;
-(id)depthString;
-(CGSize)apertureModeDimensionsForMode:(id)arg1 ;
-(void)setApertureModeDimensions:(CGSize)arg1 forMode:(id)arg2 ;
-(long long)streamingBitsPerSecond;
-(float)streamingPercentLost;
-(float)streamingBufferDuration;
-(id)trackPropertyFromAlternateTrackGroup:(id)arg1 ;
-(int)numericValueFromFigFormatDescriptionExtension:(CFStringRef)arg1 ;
-(id)stringValueFromFigFormatDescriptionExtension:(CFStringRef)arg1 ;
-(unsigned)figMediaSubType;
-(SCD_Struct_QT12)_QTTimeForProperty:(CFStringRef)arg1 ;
-(id)movie;
-(CGAffineTransform)affineTransform;
-(id)annotations;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(void)setEnabled:(char)arg1 ;
-(int)index;
-(char)isEnabled;
-(long long)frameRate;
-(MatrixRecord)matrix;
-(id)displayName;
-(SCD_Struct_QT16)range;
-(long long)language;
-(int)depth;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(id)media;
-(id)fullName;
-(id)format;
-(CGSize)dimensions;
@end
