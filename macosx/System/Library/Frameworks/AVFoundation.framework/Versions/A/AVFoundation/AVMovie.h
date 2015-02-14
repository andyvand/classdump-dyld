/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVMovieInternal, NSURL, NSArray;

@interface AVMovie : AVAsset {

	AVMovieInternal* _movie;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) char canContainMovieFragments; 
+(id)movieTypes;
+(id)movieWithURL:(id)arg1 options:(id)arg2 ;
+(id)movieWithData:(id)arg1 options:(id)arg2 ;
+(void)initialize;
-(Class)_classForMovieTracks;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(char)canContainMovieFragments;
-(char)containsMovieFragments;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(char)_shouldPrepareToOptimizeForExclusivePlayback;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)_createMovieInternal;
-(id)_movieOptionsDictionaryToFigAssetOptionsDictionary:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 ;
-(id)_initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 URL:(id)arg2 data:(id)arg3 fileType:(id)arg4 options:(id)arg5 ;
-(OpaqueFigMutableMovieRef)_figMutableMovieFromFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(id)defaultMediaDataStorage;
-(SCD_Struct_CM5)posterTime;
-(id)movieHeaderWithFileType:(id)arg1 error:(id*)arg2 ;
-(char)writeMovieHeaderToURL:(id)arg1 fileType:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)fileType;
-(NSArray *)tracks;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
@end

