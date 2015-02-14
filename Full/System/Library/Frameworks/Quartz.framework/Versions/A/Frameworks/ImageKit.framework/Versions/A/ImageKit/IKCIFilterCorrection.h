/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageCorrection.h>

@class CIFilter;

@interface IKCIFilterCorrection : IKImageCorrection {

	CIFilter* _filter;

}

@property (retain) CIFilter * filter;              //@synthesize filter=_filter - In the implementation block
+(id)filterWithName:(id)arg1 identifier:(id)arg2 ;
-(CIFilter *)filter;
-(void)setFilter:(CIFilter *)arg1 ;
-(id)processedImage:(id)arg1 ciContext:(id)arg2 cgContext:(CGContextRef)arg3 ;
-(char)isIdentity;
-(id)initWithClassName:(id)arg1 identifier:(id)arg2 ;
-(void)updateMinMax;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(id)name;
-(id)attributes;
-(void)setDefaults;
@end

