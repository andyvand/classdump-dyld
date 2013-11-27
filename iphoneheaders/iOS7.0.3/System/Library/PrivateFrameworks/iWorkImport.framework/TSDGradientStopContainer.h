/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDGradientStopContainer <NSObject,NSMutableCopying>
@property (nonatomic,retain) NSArray * gradientStops; 
@property (nonatomic,retain) TSUColor * firstColor; 
@property (nonatomic,retain) TSUColor * lastColor; 
@required
-(id)firstColor;
-(id)gradientStops;
-(id)lastColor;
-(void)setColorOfStopAtIndex:(unsigned)arg1 toColor:(id)arg2;
-(void)insertGradientStop:(id)arg1;
-(void)insertStopAtFraction:(float)arg1;
-(void)swapStopAtIndex:(unsigned)arg1 withStopAtIndex:(unsigned)arg2;
-(void)insertStopAtFraction:(float)arg1 withColor:(id)arg2;
-(void)removeStop:(id)arg1;
-(id)removeStopAtIndex:(unsigned)arg1;
-(void)reverseStopOrder;
-(void)evenlyDistributeStops;
-(void)moveStopAtIndex:(unsigned)arg1 toFraction:(float)arg2;
-(void)setInflectionOfStopAtIndex:(unsigned)arg1 toInflection:(float)arg2;
-(void)setGradientStops:(id)arg1;
-(void)setFirstColor:(id)arg1;
-(void)setLastColor:(id)arg1;
@end
