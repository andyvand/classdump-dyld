/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSURL, AVMediaFileType, NSArray;

@interface AVAssetWriterConfigurationState : NSObject {

	NSURL* _URL;
	AVMediaFileType* _mediaFileType;
	SCD_Struct_CM5 _movieFragmentInterval;
	char _shouldOptimizeForNetworkUse;
	NSURL* _directoryForTemporaryFiles;
	NSArray* _metadataItems;
	int _movieTimeScale;
	CGAffineTransform _preferredTransform;
	float _preferredVolume;
	float _preferredRate;
	NSArray* _inputs;
	NSArray* _inputGroups;

}

@property (nonatomic,copy) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) AVMediaFileType * mediaFileType;                     //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM5 movieFragmentInterval;              //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (assign,nonatomic) char shouldOptimizeForNetworkUse;                  //@synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse - In the implementation block
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles;                  //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
@property (nonatomic,copy) NSArray * metadataItems;                             //@synthesize metadataItems=_metadataItems - In the implementation block
@property (assign,nonatomic) int movieTimeScale;                                //@synthesize movieTimeScale=_movieTimeScale - In the implementation block
@property (assign,nonatomic) CGAffineTransform preferredTransform;              //@synthesize preferredTransform=_preferredTransform - In the implementation block
@property (assign,nonatomic) float preferredVolume;                             //@synthesize preferredVolume=_preferredVolume - In the implementation block
@property (assign,nonatomic) float preferredRate;                               //@synthesize preferredRate=_preferredRate - In the implementation block
@property (nonatomic,copy) NSArray * inputs;                                    //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,copy) NSArray * inputGroups;                               //@synthesize inputGroups=_inputGroups - In the implementation block
-(float)preferredRate;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)setMediaFileType:(AVMediaFileType *)arg1 ;
-(SCD_Struct_CM5)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_CM5)arg1 ;
-(char)shouldOptimizeForNetworkUse;
-(void)setShouldOptimizeForNetworkUse:(char)arg1 ;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(NSArray *)metadataItems;
-(void)setMetadataItems:(NSArray *)arg1 ;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setInputs:(NSArray *)arg1 ;
-(NSArray *)inputGroups;
-(void)setInputGroups:(NSArray *)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)inputs;
@end
