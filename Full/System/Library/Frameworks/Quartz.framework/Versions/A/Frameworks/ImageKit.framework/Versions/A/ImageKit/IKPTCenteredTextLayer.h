/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSDictionary;

@interface IKPTCenteredTextLayer : CALayer {

	NSString* _string;
	NSDictionary* _attributes;
	CGSize _boxSize;

}

@property (nonatomic,retain) NSString * string; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize boxSize;                         //@synthesize boxSize=_boxSize - In the implementation block
-(void)setBoxSize:(CGSize)arg1 ;
-(CGSize)boxSize;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

