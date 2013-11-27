/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>

@class TSUColor, TSDStrokePattern;

@interface TSDMutableStroke : TSDStroke

@property (assign,nonatomic,@dynamic) BOOL dontClearBackground; 
@property (nonatomic,@dynamic,retain) TSUColor * color; 
@property (assign,nonatomic,@dynamic) float width; 
@property (assign,nonatomic,@dynamic) float actualWidth; 
@property (assign,nonatomic,@dynamic) int cap; 
@property (assign,nonatomic,@dynamic) int join; 
@property (assign,nonatomic,@dynamic) float miterLimit; 
@property (nonatomic,@dynamic,retain) TSDStrokePattern * pattern; 
+(id)emptyStroke;
+(id)stroke;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(void)setDontClearBackground:(BOOL)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
