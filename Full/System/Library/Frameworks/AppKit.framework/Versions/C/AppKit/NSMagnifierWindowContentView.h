/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSBitmapImageRep;


@protocol NSMagnifierWindowContentView <NSObject>
@property (retain) NSBitmapImageRep * contentImageRep; 
@required
+(CGSize*)magnifierViewSize;
-(id)color;
-(CGPoint*)magnifyingGlassCenterPosition;
-(double)magnifyingGlassRadius;
-(double)magnifiedPointsPerPixel;
-(void)setNextMode;
-(NSBitmapImageRep *)contentImageRep;
-(void)setContentImageRep:(id)arg1;

@end

