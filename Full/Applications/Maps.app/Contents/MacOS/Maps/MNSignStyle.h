/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSString, NSColor, NSImage;

@interface MNSignStyle : NSObject {

	NSString* _squareImageName;
	NSColor* _foregroundColor;
	NSColor* _accentColor;

}

@property (nonatomic,__weak,readonly) NSColor * foregroundColor; 
@property (nonatomic,__weak,readonly) NSColor * accentColor; 
@property (nonatomic,__weak,readonly) NSImage * squareSignImage; 
+(SCD_Struct_MN4)_defaultArrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_MN4)_arrowMetricsByApplyingScale:(double)arg1 toMetrics:(SCD_Struct_MN4)arg2 forView:(id)arg3 ;
+(id)signStyleForBasicColor:(int)arg1 ;
+(SCD_Struct_MN4)arrowMetricsForStyle:(int)arg1 scaledToMatchReferenceSize:(CGSize)arg2 forView:(id)arg3 ;
+(SCD_Struct_MN4)arrowMetricsForStyle:(int)arg1 ;
-(NSColor *)accentColor;
-(id)initWithForegroundColor:(id)arg1 accentColor:(id)arg2 squareSignImageName:(id)arg3 ;
-(id)innerBackgroundImageForSize:(CGSize)arg1 ;
-(id)outerBackgroundImageForSize:(CGSize)arg1 ;
-(id)borderImageForSize:(CGSize)arg1 ;
-(NSEdgeInsets)borderInsetsForSize:(CGSize)arg1 ;
-(NSImage *)squareSignImage;
-(NSColor *)foregroundColor;
@end
