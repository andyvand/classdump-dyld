/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSData;

@interface CUIThemeRendition : NSObject {

	renditionkeytoken _stackKey[16];
	renditionkeytoken* _key;
	long long _type;
	unsigned _subtype;
	unsigned _scale;
	struct {
		unsigned isHeaderFlaggedFPO : 1;
		unsigned isExcludedFromContrastFilter : 1;
		unsigned isVectorBased : 1;
		unsigned isOpaque : 1;
		unsigned reserved : 28;
	}  _renditionFlags;
	long long _templateRenderingMode;
	long long _artworkStatus;
	unsigned long long _colorSpaceID;
	NSString* _name;
	NSData* _srcData;
	long long _validLookGradation;
	double _opacity;
	int _blendMode;
	NSString* _utiType;
	int _exifOrientation;

}

@property (assign,nonatomic) double opacity;                   //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                    //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
+(id)displayNameForRenditionType:(long long)arg1 ;
+(id)filteredCSIDataFromBaseCSIData:(id)arg1 ;
+(Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned)arg2 ;
-(id)metrics;
-(double)scale;
-(int)blendMode;
-(id)imageForSliceIndex:(long long)arg1 ;
-(id)effectPreset;
-(void)setBlendMode:(int)arg1 ;
-(long long)templateRenderingMode;
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(id)utiType;
-(unsigned long long)colorSpaceID;
-(CGImageRef)unslicedImage;
-(id)sliceInformation;
-(char)isTiled;
-(char)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(double)gradientDrawingAngle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(char)isHeaderFlaggedFPO;
-(long long)artworkStatus;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(char)isValidForLookGradation:(long long)arg1 ;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(unsigned)gradientStyle;
-(CGPDFDocumentRef)pdfDocument;
-(void)dealloc;
-(id)description;
-(id)name;
-(const renditionkeytoken*)key;
-(id)data;
-(long long)type;
-(unsigned)subtype;
-(char)isOpaque;
-(char)isVectorBased;
-(void)setOpacity:(double)arg1 ;
-(id)gradient;
-(double)opacity;
@end

