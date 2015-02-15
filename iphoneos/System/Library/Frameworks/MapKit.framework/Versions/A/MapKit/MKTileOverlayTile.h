/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK23 _path;
	SCD_Struct_MK4 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK23 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK4 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(double)scale;
-(void)setFrame:(SCD_Struct_MK4)arg1 ;
-(id)description;
-(SCD_Struct_MK23)path;
-(SCD_Struct_MK4)frame;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(void)setPath:(SCD_Struct_MK23)arg1 ;
-(void)setScale:(double)arg1 ;
@end
