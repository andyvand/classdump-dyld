/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVMediaSelectionOptionInternal, NSString, NSArray, NSLocale, AVAssetTrack;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

@property (readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * mediaSubTypes; 
@property (getter=isPlayable,nonatomic,readonly) char playable; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) int trackID; 
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(char)arg4 ;
-(NSString *)localizedDisplayName;
-(long long)_caseInsensitiveCompare:(id)arg1 ;
-(char)_isAC3;
-(id)_extendedLanguageTagOrUndetermined;
-(id)group;
-(char)hasMediaCharacteristic:(id)arg1 ;
-(int)trackID;
-(NSArray *)commonMetadata;
-(NSString *)extendedLanguageTag;
-(NSString *)mediaType;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)isPlayable;
-(id)_groupMediaType;
-(id)_groupID;
-(AVAssetTrack *)track;
-(id)_ancillaryDescription;
-(NSArray *)mediaSubTypes;
-(char)_isDesignatedDefault;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(char)displaysNonForcedSubtitles;
-(id)optionID;
-(id)_title;
-(id)associatedPersistentIDs;
-(id)associatedExtendedLanguageTag;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(char)arg2 ;
-(id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(char)arg2 ;
-(id)displayNameWithLocale:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(NSString *)displayName;
-(id)propertyList;
@end

