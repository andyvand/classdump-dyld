/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/NSCopying.h>

@interface CUIImage : NSObject <NSCopying> {

	CGImageRef _cgImage;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
+(id)imageWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)cgImage;
-(void)dealloc;
-(CGImageRef)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(id)initWithCGImage:(CGImageRef)arg1 ;
@end

