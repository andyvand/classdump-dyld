/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageCorrection.h>

@interface IKVImageCorrection : IKImageCorrection
+(id)filterWithName:(id)arg1 identifier:(id)arg2 ;
-(void)setCorrectionEnabled:(char)arg1 ;
-(id)processedImage:(id)arg1 ciContext:(id)arg2 cgContext:(CGContextRef)arg3 ;
-(char)isIdentity;
@end

