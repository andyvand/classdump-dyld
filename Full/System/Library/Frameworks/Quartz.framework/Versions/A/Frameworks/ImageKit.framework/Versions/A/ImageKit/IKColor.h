/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKColor : NSObject {

	CGColorRef _cgColor;

}
+(id)colorWithRGBA:(double*)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)cgColor;
@end

