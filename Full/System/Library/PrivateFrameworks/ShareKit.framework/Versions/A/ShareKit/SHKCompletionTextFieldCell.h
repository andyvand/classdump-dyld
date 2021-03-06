/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:19 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class SHKCompletionItem;

@interface SHKCompletionTextFieldCell : NSTextFieldCell {

	double _beforeMargin;
	double _afterMargin;
	SHKCompletionItem* _completion;

}

@property (assign) double beforeMargin;                                   //@synthesize beforeMargin=_beforeMargin - In the implementation block
@property (assign) double afterMargin;                                    //@synthesize afterMargin=_afterMargin - In the implementation block
@property (nonatomic,retain) SHKCompletionItem * completion;              //@synthesize completion=_completion - In the implementation block
-(SHKCompletionItem *)completion;
-(CGRect)_adjustFrameToVerticallyCenterText:(CGRect)arg1 inView:(id)arg2 ;
-(void)setCompletion:(SHKCompletionItem *)arg1 ;
-(void)setBeforeMargin:(double)arg1 ;
-(void)setAfterMargin:(double)arg1 ;
-(double)beforeMargin;
-(double)afterMargin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)highlightColorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
@end

