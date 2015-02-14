/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THWContainerLayout.h>
#import <iBAReaderKit/THWStackedControlContainerLayoutDelegate.h>
#import <iBAReaderKit/THWReviewTextAnswerLayoutDelegate.h>
#import <iBAReaderKit/THWReviewQuestionLayout.h>
#import <iBAReaderKit/TSDLayoutGeometryProvider.h>

@protocol THWReviewQuestionLayoutDelegate;
@class THWReviewQuestion, THWStackedControlContainer, NSArray, NSString;

@interface THWReviewTextMultipleChoiceLayout : THWContainerLayout <THWStackedControlContainerLayoutDelegate, THWReviewTextAnswerLayoutDelegate, THWReviewQuestionLayout, TSDLayoutGeometryProvider> {

	unsigned long long _questionIndex;
	THWReviewQuestion* _question;
	THWStackedControlContainer* _answerStack;
	NSArray* _answerLayouts;
	id<THWReviewQuestionLayoutDelegate> _delegate;
	CGSize _answersSize;
	CGSize _imageSize;
	CGSize _contentSize;
	CGRect _imageFrame;
	CGRect _answersFrame;

}

@property (nonatomic,retain,readonly) THWStackedControlContainer * answerStack;              //@synthesize answerStack=_answerStack - In the implementation block
@property (nonatomic,retain,readonly) NSArray * answerLayouts;                               //@synthesize answerLayouts=_answerLayouts - In the implementation block
@property (nonatomic,readonly) id<THWReviewQuestionLayoutDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect imageFrame;                                            //@synthesize imageFrame=_imageFrame - In the implementation block
@property (nonatomic,readonly) CGRect answersFrame;                                          //@synthesize answersFrame=_answersFrame - In the implementation block
@property (nonatomic,readonly) CGSize answersSize;                                           //@synthesize answersSize=_answersSize - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                             //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) double maxImageWidth; 
@property (nonatomic,readonly) char imageIsAtSide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long questionIndex;                             //@synthesize questionIndex=_questionIndex - In the implementation block
@property (nonatomic,retain,readonly) THWReviewQuestion * question;                          //@synthesize question=_question - In the implementation block
-(id)computeLayoutGeometry;
-(THWReviewQuestion *)question;
-(CGRect)answersFrame;
-(CGSize)answersSize;
-(char)imageIsAtSide;
-(unsigned long long)questionIndex;
-(THWStackedControlContainer *)answerStack;
-(NSArray *)answerLayouts;
-(void)reviewQuestionAnswerUpdated;
-(Class)repClassOverride;
-(int)p_imagePlacement;
-(CGPoint)stackedControlContainerOrigin:(id)arg1 ;
-(CGSize)p_answersSizeForWidth:(double)arg1 ;
-(NSEdgeInsets)stackedControlContainerInsets:(id)arg1 ;
-(id)layoutForChoiceIndex:(unsigned long long)arg1 ;
-(void)p_invalidateCachedGeometry;
-(CGSize)p_maxSizeWithImageSize:(CGSize)arg1 ;
-(double)p_answersHeightForWidth:(double)arg1 ;
-(double)reviewTextAnswerLayoutWidth:(id)arg1 ;
-(id)layoutGeometryForLayout:(id)arg1 ;
-(double)stackedControlContainerWidth:(id)arg1 ;
-(void)invalidateSize;
-(id)dependentLayouts;
-(void)p_setupAnswerLayouts;
-(id)childInfosForLayout;
-(id)controlContainerChildInfosForLayout:(id)arg1 ;
-(id)controlContainerAdditionalChildLayouts:(id)arg1 ;
-(id)initWithQuestion:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(double)p_binSearchAnswersWidth:(double)arg1 maxWidth:(double)arg2 naturalWidth:(double)arg3 height:(double)arg4 ;
-(id)reviewTextAnswerLayoutListLabelParagraphStyle:(id)arg1 ;
-(double)stackedControlContainer:(id)arg1 verticalPaddingAfter:(id)arg2 ;
-(double)stackedControlContainer:(id)arg1 verticalPaddingBefore:(id)arg2 ;
-(double)stackedControlContainerMinHeight:(id)arg1 ;
-(id)stackedControlContainer:(id)arg1 layoutGeometryForLayout:(id)arg2 ;
-(double)stackedControlContainer:(id)arg1 verticalSpacingAfter:(id)arg2 ;
-(double)stackedControlContainer:(id)arg1 verticalSpacingBefore:(id)arg2 ;
-(unsigned)stackedControlContainerVerticalAlignment:(id)arg1 ;
-(void)stackedControlContainerChildrenPositioned:(id)arg1 ;
-(id)stackedControlContainer:(id)arg1 styleProviderForLayout:(id)arg2 ;
-(unsigned)stackedControlContainer:(id)arg1 alignmentForLayout:(id)arg2 ;
-(char)dependentsRelyOnSize;
-(double)maxImageWidth;
-(CGRect)imageFrame;
-(void)dealloc;
-(id<THWReviewQuestionLayoutDelegate>)delegate;
-(CGSize)contentSize;
-(CGSize)imageSize;
-(CGSize)minContentSize;
@end

