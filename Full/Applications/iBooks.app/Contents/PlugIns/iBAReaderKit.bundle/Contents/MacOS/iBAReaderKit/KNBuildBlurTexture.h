/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@interface KNBuildBlurTexture : NSObject {

	unsigned _textureName;
	double _blurAmount;
	CGRect _frame;
	CGRect _bounds;

}

@property (assign,nonatomic) unsigned textureName;              //@synthesize textureName=_textureName - In the implementation block
@property (assign,nonatomic) CGRect frame;                      //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect bounds;                     //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double blurAmount;                 //@synthesize blurAmount=_blurAmount - In the implementation block
-(void)setBlurAmount:(double)arg1 ;
-(double)blurAmount;
-(void)setTextureName:(unsigned)arg1 ;
-(id)initWithTextureName:(unsigned)arg1 frame:(CGRect)arg2 blurAmount:(double)arg3 ;
-(void)teardown;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(unsigned)textureName;
@end

