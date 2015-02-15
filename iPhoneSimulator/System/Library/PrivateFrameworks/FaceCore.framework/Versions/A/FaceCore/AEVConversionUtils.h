/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/Versions/A/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@interface AEVConversionUtils : NSObject
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 usingGCD:(char)arg2 dispatchQueue:(dispatch_queue_sRef)arg3 ;
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 usingGCD:(char)arg2 dispatchQueue:(dispatch_queue_sRef)arg3 ;
+(char*)convertCGImageToBufferUsingGrayDevice:(CGImageRef)arg1 ;
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 ;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 usingGCD:(char)arg2 dispatchQueue:(dispatch_queue_sRef)arg3 ;
+(CGImageRef)createImageFromGrayscaleData:(char*)arg1 ofWidth:(int)arg2 andHeight:(int)arg3 ;
@end
