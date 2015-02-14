/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTExportOptions.h>

@class NSArray;

@interface QTMutableExportOptions : QTExportOptions

@property (copy,readonly) NSArray * exportMetadata; 
+(unsigned)_qtrainforestTrackTypeFromQTTrackType:(id)arg1 ;
+(id)_qtrainforestPortNameFromQTTrackType:(id)arg1 ;
-(void)setMovieSource:(id)arg1 ;
-(char)setTrackSourceWithURL:(id)arg1 mediaType:(id)arg2 trackIndex:(int)arg3 forPortName:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
-(int)_qtcreateRFExportFromMovie:(id)arg1 ;
-(id)_qtrainforestMediaIndexesForMediaType:(id)arg1 movie:(id)arg2 ;
-(void)setExportMetadata:(id)arg1 metadataFormat:(id)arg2 replaceExisting:(char)arg3 ;
-(char)setTrackSourceWithTrack:(id)arg1 forPortName:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(NSArray *)exportMetadata;
-(id)portNamesForMediaType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

