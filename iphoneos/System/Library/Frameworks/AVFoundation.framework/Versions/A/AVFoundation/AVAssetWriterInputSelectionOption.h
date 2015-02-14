/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSString, NSDictionary, NSArray;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {

	AVAssetWriterInput* _input;
	NSString* _mediaType;
	NSDictionary* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatHint;
	NSString* _languageCode;
	NSString* _extendedLanguageTag;
	NSArray* _metadata;
	NSDictionary* _trackReferences;
	char _displaysNonForcedSubtitles;
	char _enabled;

}

@property (nonatomic,readonly) AVAssetWriterInput * input;                                 //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettings;                              //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint;              //@synthesize sourceFormatHint=_sourceFormatHint - In the implementation block
@property (nonatomic,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSString * extendedLanguageTag;                             //@synthesize extendedLanguageTag=_extendedLanguageTag - In the implementation block
@property (nonatomic,readonly) NSArray * metadata;                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * trackReferences;                             //@synthesize trackReferences=_trackReferences - In the implementation block
@property (nonatomic,readonly) char displaysNonForcedSubtitles;                            //@synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles - In the implementation block
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(char)arg2 ;
+(id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)input;
-(NSArray *)metadata;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(id)commonMetadata;
-(NSString *)extendedLanguageTag;
-(NSString *)languageCode;
-(NSString *)mediaType;
-(NSDictionary *)trackReferences;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)isPlayable;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(NSDictionary *)outputSettings;
-(id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(char)arg2 ;
-(char)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2 ;
-(id)_taggedCharacteristics;
-(char)_isAuxiliaryContent;
-(char)_isMainProgramContent;
-(id)_ancillaryDescription;
-(id)mediaSubTypes;
-(char)_isDesignatedDefault;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(char)displaysNonForcedSubtitles;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)locale;
-(id)propertyList;
@end

