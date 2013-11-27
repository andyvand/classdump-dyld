/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class PT2DGraphView;

@interface PT2DGraphDotView : UIView {

	PT2DGraphView* _graph;
	CGPoint _graphPoint;

}

@property (assign,nonatomic,__weak) PT2DGraphView * graph;              //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) CGPoint graphPoint;                        //@synthesize graphPoint=_graphPoint - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(id)graph;
-(void)setGraphPoint:(CGPoint)arg1 ;
-(CGPoint)graphPoint;
-(void)setGraph:(id)arg1 ;
-(void).cxx_destruct;
@end
