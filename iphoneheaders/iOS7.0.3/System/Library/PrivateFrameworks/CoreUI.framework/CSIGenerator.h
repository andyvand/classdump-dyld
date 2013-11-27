/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSMutableArray, CUIPSDGradient, CUIShapeEffectPreset, NSDate;

@interface CSIGenerator : NSObject {

	CGSize _size;
	NSString* _name;
	NSMutableArray* _slices;
	NSMutableArray* _bitmaps;
	NSMutableArray* _metrics;
	BOOL _isFPOHint;
	BOOL _isExcludedFromFilter;
	short _colorSpaceID;
	short _layout;
	unsigned _scaleFactor;
	CUIPSDGradient* _gradient;
	CUIShapeEffectPreset* _effectPreset;
	int _blendMode;
	float _opacity;
	NSDate* _modtime;

}

@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isRenditionFPO;                                                              //@synthesize isFPOHint=_isFPOHint - In the implementation block
@property (assign,getter=isExcludedFromContrastFilter,nonatomic) BOOL excludedFromContrastFilter;              //@synthesize isExcludedFromFilter=_isExcludedFromFilter - In the implementation block
@property (assign,nonatomic) short colorSpaceID;                                                               //@synthesize colorSpaceID=_colorSpaceID - In the implementation block
@property (assign,nonatomic) unsigned scaleFactor;                                                             //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,retain) CUIPSDGradient * gradient;                                                        //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CUIShapeEffectPreset * effectPreset;                                              //@synthesize effectPreset=_effectPreset - In the implementation block
@property (assign,nonatomic) int blendMode;                                                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) float opacity;                                                                    //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,copy) NSDate * modtime;                                                                   //@synthesize modtime=_modtime - In the implementation block
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(id)name;
-(unsigned)scaleFactor;
-(void)setGradient:(id)arg1 ;
-(id)gradient;
-(void)setEffectPreset:(id)arg1 ;
-(id)modtime;
-(void)_addNodes:(id)arg1 toNodeList:(csigradientdatanode*)arg2 ;
-(void)formatCSIHeader:(csiheader*)arg1 ;
-(void)writeHeader:(csiheader*)arg1 toData:(id)arg2 ;
-(unsigned long)writeResourcesToData:(id)arg1 ;
-(unsigned long)writeGradientToData:(id)arg1 ;
-(unsigned long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(BOOL)arg3 ;
-(id)initWithCanvasSize:(CGSize)arg1 sliceCount:(unsigned)arg2 layout:(short)arg3 ;
-(id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned)arg2 ;
-(void)addBitmap:(id)arg1 ;
-(void)addSliceRect:(CGRect)arg1 ;
-(void)addMetrics:(SCD_Struct_CS4)arg1 ;
-(id)CSIRepresentationWithCompression:(BOOL)arg1 ;
-(BOOL)isRenditionFPO;
-(void)setIsRenditionFPO:(BOOL)arg1 ;
-(BOOL)isExcludedFromContrastFilter;
-(void)setExcludedFromContrastFilter:(BOOL)arg1 ;
-(short)colorSpaceID;
-(void)setColorSpaceID:(short)arg1 ;
-(void)setScaleFactor:(unsigned)arg1 ;
-(id)effectPreset;
-(void)setModtime:(id)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
@end
