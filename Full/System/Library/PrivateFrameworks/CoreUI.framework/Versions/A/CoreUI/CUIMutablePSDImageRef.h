/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDImageRef.h>

@interface CUIMutablePSDImageRef : CUIPSDImageRef
-(void)addLayer:(id)arg1 ;
-(id)initWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2 ;
-(void)addLayoutMetricsChannel:(id)arg1 ;
-(void)addOrUpdateSlicesWithSliceRects:(id)arg1 ;
-(CFDataRef)copyDefaultICCProfileData;
-(unsigned)psdLayerBlendModeForCGBlendMode:(int)arg1 ;
-(PSDGradient*)newPSDGradientFromCUIPSDGradient:(id)arg1 ;
-(unsigned)newUInt32CArray:(unsigned*)arg1 withNSArray:(id)arg2 prependNumber:(id)arg3 appendNumber:(id)arg4 ;
-(unsigned)newSliceRectsArray:(PSDRect*)arg1 withSliceRects:(id)arg2 ;
-(unsigned)newSliceRectsArray:(PSDRect*)arg1 withXCutPositions:(id)arg2 yCutPositions:(id)arg3 ;
-(char)saveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)insertLayoutMetricsChannel:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)deleteLayoutMetricsChannelAtIndex:(unsigned)arg1 ;
-(void)insertLayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)deleteLayerAtIndex:(unsigned)arg1 ;
-(void)addOrUpdateSlicesWithXCutPositions:(id)arg1 yCutPositions:(id)arg2 ;
-(void)updateSliceName:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)saveToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFileURL:(id)arg1 ;
@end

