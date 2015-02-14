/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedImageDescription : NSObject {

	double _scale;
	long long _idiom;
	long long _subtype;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	int _blendMode;
	long long _templateRenderingMode;
	long long _imageType;
	SCD_Struct_CU0 _edgeInsets;
	SCD_Struct_CU0 _alignmentEdgeInsets;
	long long _resizingMode;
	int _exifOrientation;

}

@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long idiom;                                 //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) long long subtype;                               //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) long long sizeClassHorizontal;                   //@synthesize sizeClassHorizontal=_sizeClassHorizontal - In the implementation block
@property (assign,nonatomic) long long sizeClassVertical;                     //@synthesize sizeClassVertical=_sizeClassVertical - In the implementation block
@property (assign,nonatomic) int blendMode;                                   //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) char isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;                 //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) long long imageType;                             //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) SCD_Struct_CU0 edgeInsets;                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) SCD_Struct_CU0 alignmentEdgeInsets;              //@synthesize alignmentEdgeInsets=_alignmentEdgeInsets - In the implementation block
@property (assign,nonatomic) long long resizingMode;                          //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) int exifOrientation;                             //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(double)scale;
-(int)blendMode;
-(void)setIsTemplate:(char)arg1 ;
-(long long)idiom;
-(void)setIdiom:(long long)arg1 ;
-(long long)sizeClassHorizontal;
-(void)setSizeClassHorizontal:(long long)arg1 ;
-(long long)sizeClassVertical;
-(void)setSizeClassVertical:(long long)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(long long)templateRenderingMode;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(long long)imageType;
-(void)setImageType:(long long)arg1 ;
-(void)setAlignmentEdgeInsets:(SCD_Struct_CU0)arg1 ;
-(int)exifOrientation;
-(void)setExifOrientation:(int)arg1 ;
-(id)description;
-(void)setEdgeInsets:(SCD_Struct_CU0)arg1 ;
-(long long)subtype;
-(char)isTemplate;
-(SCD_Struct_CU0)alignmentEdgeInsets;
-(long long)resizingMode;
-(SCD_Struct_CU0)edgeInsets;
-(void)setResizingMode:(long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setSubtype:(long long)arg1 ;
@end

