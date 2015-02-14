/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMovieTrack.h>

@class AVMutableMovieTrackInternal, NSArray, AVMediaDataStorage, NSURL;

@interface AVMutableMovieTrack : AVMovieTrack {

	AVMutableMovieTrackInternal* _mutableMovieTrackInternal;

}

@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) AVMediaDataStorage * mediaDataStorage; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,nonatomic) long long alternateGroupID; 
@property (assign,getter=isModified,nonatomic) char modified; 
+(id)trackWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(float)preferredVolume;
-(NSArray *)metadata;
-(int)trackID;
-(id)extendedLanguageTag;
-(id)languageCode;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(long long)alternateGroupID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_CM6)arg1 ;
-(void)removeTimeRange:(SCD_Struct_CM6)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_CM6)arg1 toDuration:(SCD_Struct_CM5)arg2 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(AVMediaDataStorage *)mediaDataStorage;
-(id)initWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(void)_createMutableMovieTrackInternal;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(id)_stringForProperty:(CFStringRef)arg1 ;
-(CGSize)_sizeForProperty:(CFStringRef)arg1 ;
-(void)_setString:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(void)_setSize:(CGSize)arg1 forProperty:(CFStringRef)arg2 ;
-(NSURL *)sampleReferenceBaseURL;
-(CGSize)cleanApertureDimensions;
-(CGSize)productionApertureDimensions;
-(CGSize)encodedPixelsDimensions;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(void)setMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(void)setCleanApertureDimensions:(CGSize)arg1 ;
-(void)setProductionApertureDimensions:(CGSize)arg1 ;
-(void)setEncodedPixelsDimensions:(CGSize)arg1 ;
-(char)insertTimeRange:(SCD_Struct_CM6)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_CM5)arg3 copySampleData:(char)arg4 error:(id*)arg5 ;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 decodeTime:(SCD_Struct_CM5*)arg2 presentationTime:(SCD_Struct_CM5*)arg3 ;
-(char)insertMediaTimeRange:(SCD_Struct_CM6)arg1 intoTimeRange:(SCD_Struct_CM6)arg2 ;
-(char)appendMediaData:(id)arg1 dataOffset:(long long*)arg2 ;
-(void)addTrackAssociationToMovieTrack:(id)arg1 type:(id)arg2 ;
-(void)removeTrackAssociationToMovieTrack:(id)arg1 type:(id)arg2 ;
-(long long)layer;
-(id)description;
-(void)setLayer:(long long)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)locale;
-(char)isModified;
-(void)setModified:(char)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(CGSize)dimensions;
@end

