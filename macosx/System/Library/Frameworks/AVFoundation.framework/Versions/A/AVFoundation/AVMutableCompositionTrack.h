/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCompositionTrack.h>

@class AVMutableCompositionTrackInternal, NSString, NSArray;

@interface AVMutableCompositionTrack : AVCompositionTrack {

	AVMutableCompositionTrackInternal* _mutablePriv;

}

@property (assign,nonatomic) int naturalTimeScale; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (nonatomic,copy) NSArray * segments; 
-(float)preferredVolume;
-(NSString *)extendedLanguageTag;
-(NSString *)languageCode;
-(CGAffineTransform)preferredTransform;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(int)naturalTimeScale;
-(NSArray *)segments;
-(long long)alternateGroupID;
-(void)insertEmptyTimeRange:(SCD_Struct_CM6)arg1 ;
-(void)removeTimeRange:(SCD_Struct_CM6)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_CM6)arg1 toDuration:(SCD_Struct_CM5)arg2 ;
-(void)_setTrackReaderPropertyValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)setSegments:(NSArray *)arg1 ;
-(char)insertTimeRange:(SCD_Struct_CM6)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_CM5)arg3 error:(id*)arg4 ;
-(char)insertTimeRanges:(id)arg1 ofTracks:(id)arg2 atTime:(SCD_Struct_CM5)arg3 error:(id*)arg4 ;
-(char)validateTrackSegments:(id)arg1 error:(id*)arg2 ;
-(void)setNaturalTimeScale:(int)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

